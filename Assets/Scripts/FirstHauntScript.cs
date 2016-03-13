using UnityEngine;
using System.Collections;

public class FirstHauntScript: MonoBehaviour {
	public bool isHaunted;
	public GameObject Positions;
	public Light HauntLight;

	public AudioClip bassHit;
	public AudioClip clickClip;

	public Canvas Instruction0;
	public Canvas Instruction1;

	public GameObject killEffect;

	public static bool CompletedHaunt;

	private AudioSource bassSrc;
	private AudioSource clickSrc;

	void OnEnable() 
	{
		TimeEventManager.IntroDone += StartHaunt;	
	}

	void OnDisable()
	{
		TimeEventManager.IntroDone -= StartHaunt;	
	}

	void Awake()
	{
		bassSrc = UtilityScript.AddAudio (gameObject, bassHit, false, false, 1.0f);
		clickSrc = UtilityScript.AddAudio (gameObject, clickClip, false, false, 1.0f);  
	}

	// Use this for initialization
	void Start () {
		isHaunted = true;
		CompletedHaunt = false;
		HauntLight.intensity = 8.0f;
		Instruction0.enabled = false;
		Instruction1.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void StartHaunt() {
		StartCoroutine (MoveHaunt ());
	}

	private IEnumerator MoveHaunt() {
		// Move to Tier 1
		gameObject.transform.position = Positions.transform.GetChild (0).gameObject.transform.position;

		// Flicker Light
		HauntLight.intensity = 8.0f;
		bassSrc.Play ();
		yield return new WaitForSeconds (1.0f);
		clickSrc.Play ();
		HauntLight.intensity = 0.0f;

		// Move to Tier 2
		yield return new WaitForSeconds (2.0f);
		gameObject.transform.position = Positions.transform.GetChild (1).gameObject.transform.position;
		Instruction0.enabled = true;

		// Flicker Light
		HauntLight.intensity = 8.0f;
		bassSrc.Play ();
		yield return new WaitForSeconds (1.0f);
		clickSrc.Play ();
		HauntLight.intensity = 0.0f;

		// Move to Tier 3
		yield return new WaitForSeconds (1.0f);
		gameObject.transform.position = Positions.transform.GetChild (2).gameObject.transform.position;
		Instruction1.enabled = true;
		HauntLight.intensity = 8.0f;
		bassSrc.Play ();
		CompletedHaunt = true;
	}

	public void KillObject() {
		isHaunted = false;
		StartCoroutine (RunEffect ());
	}

	private IEnumerator RunEffect() {
		GameObject effect = Instantiate (killEffect, transform.position, killEffect.transform.rotation) as GameObject;
		yield return new WaitForSeconds (1.0f);
		Destroy (effect);
		yield return new WaitForSeconds (1.0f);
		Destroy (HauntLight);
		Instruction0.enabled = false;
		Instruction1.enabled = false;
	}
}