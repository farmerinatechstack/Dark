using UnityEngine;
using System.Collections;

public class IntroLightSequence : MonoBehaviour {
	public Light light;
	public Light light1;
	public Light light2;

	public GameObject musicBox;

	// Use this for initialization
	void Start () {
		StartCoroutine (lightsOff ());
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	IEnumerator lightsOff() {
		yield return new WaitForSeconds(15.0f);

		Destroy (musicBox);
		GetComponent<AudioSource> ().Play ();
		Destroy (light.gameObject);

		yield return new WaitForSeconds (0.4f);
		Destroy (light1.gameObject);

		yield return new WaitForSeconds (0.3f);
		Destroy (light2.gameObject);
	}
}
