using UnityEngine;
using System.Collections;

public class ClownScript : MonoBehaviour {

	public bool isHaunted;
	public bool isKilling;
	private Animator animator;
	public AudioSource killSound;
	public AudioClip killClip;

	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator> ();
		isHaunted = true;
		isKilling = false;
		killSound = UtilityScript.AddAudio (gameObject, killClip, false, false, 1.0f);
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

	public void KillClown() {
		isHaunted = false;
		StartCoroutine (WaitAndDestroy ());
	}

	IEnumerator WaitAndDestroy() {
		yield return new WaitForSeconds (2.0f);
		//Destroy (gameObject);
	}

	void HandleAnimator () {
		animator.SetBool ("isKilling", isKilling);
		animator.SetBool ("isWalking", isHaunted);
	}

	public void Kill() {
		print ("Killed player");

		GameObject clown = GameObject.Find ("ClownKill");
		gameObject.transform.position = clown.transform.position;
		gameObject.transform.rotation = clown.transform.rotation;
		StartCoroutine (KillPlayer ());

		//gameObject.GetComponent<Animator> ().applyRootMotion = false;
	}

	IEnumerator KillPlayer() {
		isKilling = true;
		killSound.Play ();
		yield return new WaitForSeconds (1.5f);
		Destroy (gameObject);
	}

	void OnTriggerEnter(Collider col) {
		if (col.gameObject.name == "PlayerZone") {
			gameObject.GetComponent<BoxCollider> ().enabled = false;
			Kill ();
		}
	}
}
