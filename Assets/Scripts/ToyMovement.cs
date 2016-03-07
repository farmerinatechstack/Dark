using UnityEngine;
using System.Collections;

public class ToyMovement : MonoBehaviour {

	public GameObject bear;
	public GameObject bear_positions;
	public Light final_light;

	// Use this for initialization
	void Start () {
		bear = GameObject.Find ("Teddy Main");
		bear_positions = GameObject.Find ("Bear Positions");
		final_light.intensity = 0.0f;

		StartCoroutine (moveBear ());
	}
	
	// Update is called once per frame
	void Update () {
	}

	private IEnumerator moveBear() {
		yield return new WaitForSeconds (19.0f);
		bear.transform.position = bear_positions.transform.GetChild (0).gameObject.transform.position;

		yield return new WaitForSeconds (5.0f);
		bear.transform.position = bear_positions.transform.GetChild (1).gameObject.transform.position;

		yield return new WaitForSeconds (5.0f);
		bear.transform.position = bear_positions.transform.GetChild (2).gameObject.transform.position;
		bear.transform.rotation = bear_positions.transform.GetChild (2).gameObject.transform.rotation;
		final_light.intensity = 30.0f;
		GetComponent<AudioSource> ().Play ();
	}	
}



