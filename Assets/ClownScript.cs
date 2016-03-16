using UnityEngine;
using System.Collections;

public class ClownScript : MonoBehaviour {

	public bool isHaunted;
	public bool isKilling;
	private Animator animator;

	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator> ();
		isHaunted = true;
		isKilling = false;
	}
	
	// Update is called once per frame
	void Update () {
		HandleAnimator ();

		if (Input.GetKeyDown (KeyCode.A)) {
			isHaunted = false;
		}
		if (Input.GetKeyUp (KeyCode.A)) {
			isHaunted = true;
		}
		if (Input.GetKeyDown (KeyCode.K)) {
			isKilling = true;
		}
		if (Input.GetKeyUp (KeyCode.K)) {
			isKilling = false;
		}
	}

	void HandleAnimator () {
		animator.SetBool ("isKilling", isKilling);
		animator.SetBool ("isWalking", isHaunted);
	}
}
