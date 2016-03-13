using UnityEngine;
using System.Collections;

public class FirstHauntScript: MonoBehaviour {
	public GameObject Positions;
	public Light HauntLight;

	private bool canMove;

	// Use this for initialization
	void Start () {
		HauntLight.intensity = 0.0f;
		canMove = false;

		StartCoroutine (moveBear ());
	}
	
	// Update is called once per frame
	void Update () {
	}

	private IEnumerator moveBear() {
		yield return new WaitForSeconds (19.0f);
		while (!canMove) {}
		gameObject.transform.position = Positions.transform.GetChild (0).gameObject.transform.position;

		yield return new WaitForSeconds (5.0f);
		while (!canMove) {}
		gameObject.transform.position = Positions.transform.GetChild (1).gameObject.transform.position;

		yield return new WaitForSeconds (5.0f);
		while (!canMove) {}
		gameObject.transform.position = Positions.transform.GetChild (2).gameObject.transform.position;
		gameObject.transform.rotation = Positions.transform.GetChild (2).gameObject.transform.rotation;
		HauntLight.intensity = 30.0f;
		GetComponent<AudioSource> ().Play ();
	}

	void OnTriggerEnter() {
		canMove = false;
	}

	void OnTriggerExit() {
		canMove = true;
	}
}