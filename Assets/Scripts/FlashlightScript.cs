using UnityEngine;
using System.Collections;

public class FlashlightScript : MonoBehaviour {
	public BoxCollider GazeCollider;
	public Camera playerCamera;
	public Light GazeLight;

	public bool canRaycast;

	public GameObject stateManager;

	public float duration = 90f;
	public float timeRemaining;

	public int num_haunts = 4;
	private static float MAX_LIGHT_INTENSITY = 5.0f;

	void OnEnable() 
	{
		TimeEventManager.InstructionsDone += StartLight;	
	}

	void OnDisable()
	{
		TimeEventManager.InstructionsDone -= StartLight;	
	}

	// Use this for initialization
	void Start () {
		canRaycast = false;
		GazeCollider.enabled = false;
		GazeLight.enabled = false;
		GazeLight.intensity = MAX_LIGHT_INTENSITY;
		timeRemaining = duration;
	}
	
	// Update is called once per frame
	void Update () {
		// Lerp the flashlight
		float lightPower = Mathf.Lerp(0, MAX_LIGHT_INTENSITY, timeRemaining/duration);
		if (timeRemaining/duration > 0) {
			timeRemaining -= Time.deltaTime;
		}
		GazeLight.intensity = lightPower;

		// Listen for clicks
		if (Cardboard.SDK.Triggered && canRaycast) { // Check for a hit
			RaycastHit hit;
			Transform camTransform = playerCamera.gameObject.transform;

			if (Physics.Raycast (camTransform.position, camTransform.forward, out hit) && hit.collider.gameObject.layer == UtilityScript.HAUNT_LAYER) { // Hit Haunt
				GameObject hitObject = hit.collider.gameObject;
				if (hit.collider.gameObject.name == "FirstHaunt" && hitObject.GetComponent<FirstHauntScript>().isHaunted) {
					hitObject.GetComponent<FirstHauntScript> ().KillObject ();
					timeRemaining += 20f;
					num_haunts--;
				} else if (hitObject.GetComponent<HauntedObjectScript>().isHaunted) {
					hitObject.GetComponent<HauntedObjectScript> ().KillObject ();
					timeRemaining += 20f;
					num_haunts--;
				}
				if (num_haunts == 0) {
					stateManager.GetComponent<GameStateScript> ().WinGame ();
				}
			} else { // Penalty
				timeRemaining -= 20f;
			}
		}
	}

	void StartLight() {
		canRaycast = true;
		GazeCollider.enabled = true;
		GazeLight.enabled = true;
		timeRemaining = duration;
	}
}
