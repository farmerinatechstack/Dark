using UnityEngine;
using System.Collections;

public class TimeEventManager : MonoBehaviour {
	// Time Delays
	public static float INTRO_SEQUENCE_LENGTH = 5.0f;

	// Delegate & Event System
	public delegate void TimeAction();
	public static event TimeAction GameStarted;

	// Use this for initialization
	void Start () 
	{
		StartCoroutine (RunGame ());
	}
	
	// Update is called once per frame
	void Update () 
	{
	
	}

	IEnumerator RunGame()
	{
		yield return new WaitForSeconds (2);
		if (GameStarted != null)
			GameStarted ();

		yield return new WaitForSeconds (INTRO_SEQUENCE_LENGTH);
	}
}
