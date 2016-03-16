using UnityEngine;
using System.Collections;

public class TimeEventManager : MonoBehaviour {
	// Time Delays
	public static float TIME_BEFORE_INTRO = 2.0f;

	public GameObject[] hauntedObjects;

	// Delegate & Event System
	public delegate void TimeAction();
	public static event TimeAction GameStarted;
	public static event TimeAction IntroDone;
	public static event TimeAction InstructionsDone;

	public AudioClip ambientClip;

	private AudioSource ambientSrc;

	// Use this for initialization
	void Start () 
	{
		ambientSrc = UtilityScript.AddAudio (gameObject, ambientClip, true, false, 0.25f);
		StartCoroutine (RunGame ());
	}
	
	// Update is called once per frame
	void Update () 
	{
	
	}

	public IEnumerator RunGame()
	{
		yield return new WaitForSeconds (TIME_BEFORE_INTRO);
		if (GameStarted != null)
			GameStarted ();


		ambientSrc.Play ();
		while (!LampFlicker.CompletedFlicker) {
			yield return null;
		}

		if (IntroDone != null)
			IntroDone ();

		while (!FirstHauntScript.CompletedHaunt) {
			yield return null;
		}
			
		yield return new WaitForSeconds (1.0f);
		if (InstructionsDone != null)
			InstructionsDone ();

		while (!FirstHauntScript.FirstHauntEnded) {
			yield return null;
		}

		for (int i = 0; i < hauntedObjects.Length; i++) {
			GameObject hauntedObj = hauntedObjects[i];
			hauntedObj.GetComponent<HauntedObjectScript> ().StartHaunt ();
		}
		
		/*
		int numObjects = hauntedObjects.Length;
		while (numObjects > 0) {
			print ("in while loop");
			int randObjIndex = Random.Range (0, hauntedObjects.Length);
			GameObject hauntedObj = hauntedObjects[randObjIndex];
			if (hauntedObj != null) {
				//syield return new WaitForSeconds (Random.Range (0.1f, 2.0f));
				print (hauntedObj.name);
				hauntedObj.GetComponent<HauntedObjectScript> ().StartHaunt ();
				hauntedObjects [randObjIndex] = null;
				numObjects--;
			}
		}
		*/
	}
}
