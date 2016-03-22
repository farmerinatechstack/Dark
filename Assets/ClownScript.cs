using UnityEngine;
using System.Collections;

public class ClownScript : MonoBehaviour {
	public bool isHaunted;
	public bool isKilling;
	private Animator animator;
	public AudioSource killSound;
	public AudioClip killClip;
	public GameObject killEffect;

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
	}

	public void KillClown() {
		isHaunted = false;
		StartCoroutine (RunEffect ());
		StartCoroutine (WaitAndDestroy ());
	}

	IEnumerator WaitAndDestroy() {
		yield return new WaitForSeconds (2.0f);
	}

	void HandleAnimator () {
		animator.SetBool ("isKilling", isKilling);
		animator.SetBool ("isWalking", isHaunted);
	}

	public void Kill() {
		GameObject.Find("KillLocations").GetComponent<ToggleClown>().ToggleClownRenderer();
		StartCoroutine (KillPlayer ());
	}

	IEnumerator KillPlayer() {
		killSound.Play ();
		transform.GetChild (1).GetComponent<SkinnedMeshRenderer> ().enabled = false;
		yield return new WaitForSeconds (1.5f);
		GameObject.Find ("GameStates").GetComponent<GameStateScript> ().LoseGame ();
		Destroy (gameObject);
	}

	void OnTriggerEnter(Collider col) {
		if (col.gameObject.name == "PlayerZone" & isHaunted) {
			gameObject.GetComponent<BoxCollider> ().enabled = false;
			Kill ();
		}
	}

	private IEnumerator RunEffect() {
		GameObject effect = Instantiate (killEffect, transform.position, killEffect.transform.rotation) as GameObject;
		yield return new WaitForSeconds (1.0f);
		Destroy (effect);
		yield return new WaitForSeconds (1.0f);
	}
}
