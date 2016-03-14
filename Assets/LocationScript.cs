using UnityEngine;
using System.Collections;

public class LocationScript : MonoBehaviour {
	public bool isFree;

	// Use this for initialization
	void Start () {
		isFree = true;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider col) {
		isFree = false;
	}

	void OnTriggerExit(Collider col) {
		isFree = true;
	}
}
