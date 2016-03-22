using UnityEngine;
using System.Collections;

public class HauntedObjectScript : MonoBehaviour {
	public bool canMove;
	public bool isHaunted;
	public float y_offset;
	public AudioClip moveSound;

	public GameObject stateManager;
	public GameObject[] tiers;

	public GameObject killEffect;

	private int currentTier;
	private IEnumerator haunt;
	private AudioSource audio;

	private float tier1Delay;
	private float tier2Delay;
	private float tier3Delay;
	private float killDelay;

	// Use this for initialization
	void Start () {
		canMove = false;
		isHaunted = false;
		currentTier = 0;

		tier1Delay = Random.Range(2.0f, 10.0f);
		tier2Delay = Random.Range(2.0f, 10.0f);
		tier3Delay = Random.Range(2.0f, 10.0f);
		killDelay = Random.Range (2.0f, 10.0f);

		audio = UtilityScript.AddAudio (gameObject, moveSound, false, false, 1.0f);
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void StartHaunt() {
		canMove = true;
		isHaunted = true;
		haunt = MoveAcrossTiers ();
		StartCoroutine (haunt);
	}

	IEnumerator MakeNoise() {
		yield return new WaitForSeconds (Random.Range(5.0f, 20.0f));
		if (isHaunted) {
			audio.Play ();
		}
	}
	
	IEnumerator MoveAcrossTiers() {
		yield return new WaitForSeconds (tier1Delay);
		// Start First Move
		while (!canMove)
			yield return null;
		yield return StartCoroutine(MoveToNextTier ());
		StartCoroutine (MakeNoise ());

		yield return new WaitForSeconds (tier2Delay);
		// Start Second Move
		while (!canMove)
			yield return null;
		yield return StartCoroutine(MoveToNextTier ());

		yield return new WaitForSeconds (tier3Delay);
		// Start Third Move
		while (!canMove)
			yield return null;
		yield return StartCoroutine(MoveToNextTier ());

		yield return new WaitForSeconds (killDelay);
		if (isHaunted) {
			print (gameObject.name + " is killing...");
			GetComponent<KillSequenceScript> ().Kill ();
		}

		yield return new WaitForSeconds (1.0f);
		Destroy (gameObject);
		stateManager.GetComponent<GameStateScript> ().LoseGame ();
	}

	IEnumerator MoveToNextTier() {
		GameObject tier = tiers [currentTier];
		int tierIndex = Random.Range (0, tier.transform.childCount);
		GameObject child = tier.transform.GetChild (tierIndex).gameObject;

		if (!child.GetComponent<LocationScript> ().isFree) {
			tierIndex = 0;
			while (tierIndex < tier.transform.childCount) {
				child = tier.transform.GetChild (tierIndex).gameObject;
				if (child.GetComponent<LocationScript> ().isFree) {
					child.GetComponent<LocationScript> ().isFree = false;
					break;
				}
				yield return null;
				tierIndex++;
				tierIndex = (tierIndex == tier.transform.childCount) ? 0 : tierIndex;
			}
		}

		Vector3 new_position =  tier.transform.GetChild (tierIndex).position;
		new_position.y += y_offset;
		gameObject.transform.position = new_position;
		currentTier++;
	}

	void OnTriggerEnter(Collider col) {
		if (col.gameObject.name == "GazeBox") {
			canMove = false;
		}
	}

	void OnTriggerExit(Collider col) {
		if (col.gameObject.name == "GazeBox") {
			canMove = true;
		}
	}

	public void KillObject() {
		isHaunted = false;
		StopCoroutine (haunt);
		StartCoroutine (RunEffect ());
	}

	public void EndHaunt() {
		if (haunt != null)
			StopCoroutine (haunt);
	}

	private IEnumerator RunEffect() {
		GameObject effect = Instantiate (killEffect, transform.position, killEffect.transform.rotation) as GameObject;
		yield return new WaitForSeconds (1.0f);
		Destroy (effect);
		yield return new WaitForSeconds (1.0f);
	}

}


