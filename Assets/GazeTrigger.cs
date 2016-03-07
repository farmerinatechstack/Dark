using UnityEngine;
using System.Collections;

public class GazeTrigger : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider col) {
		print("You looked at me!");
	}

	void OnTriggerExit(Collider col) {
		print ("You stopped looking!");
	}
}
