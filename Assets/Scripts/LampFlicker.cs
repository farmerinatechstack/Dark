using UnityEngine;
using System.Collections;

public class LampFlicker : MonoBehaviour {	
	public Light lampLight;

	public static bool CompletedFlicker;

	// Use this for initialization
	void Start () {
		CompletedFlicker = false;

	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void runFlickerSequence() {
		StartCoroutine(flickLight());
	}

	IEnumerator flickLight() {
		yield return new WaitForSeconds (3.0f);
		GetComponent<AudioSource> ().Play ();
		for (int i = 0; i < 20; i++) {
			float flickerInterval = Random.Range (0.0f, 0.2f);
			lampLight.intensity = 0.0f;
			yield return new WaitForSeconds (flickerInterval);
			lampLight.intensity = 8.0f;
			flickerInterval = Random.Range (0.0f, 0.2f);
			yield return new WaitForSeconds (flickerInterval);
		}

		for (int i = 0; i < 2; i++) {
			float flickerInterval = Random.Range (0.1f, 0.5f);
			lampLight.intensity = 0.0f;
			yield return new WaitForSeconds (flickerInterval);
			lampLight.intensity = 8.0f;
			flickerInterval = Random.Range (0.4f, 1f);
			yield return new WaitForSeconds (flickerInterval);
		}
		lampLight.intensity = 0.0f;
		GetComponent<AudioSource> ().Stop ();
		CompletedFlicker = true;
	}

	public void turnOnLight () {
		lampLight.intensity = 8.0f;
	}

	public void turnOffLight () {
		lampLight.intensity = 0.0f;
	}
}
