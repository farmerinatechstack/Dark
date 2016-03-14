using UnityEngine;
using System.Collections;

public class HauntedObjectScript : MonoBehaviour {
	public bool canMove;
	public bool isHaunted;

	public GameObject[] tiers;

	public AudioClip warningClip;
	public AudioClip killClip;

	private int currentTier;

	private float tier1Delay;
	private float tier2Delay;
	private float tier3Delay;

	// Use this for initialization
	void Start () {
		canMove = false;
		isHaunted = false;
		currentTier = 0;

		tier1Delay = Random.Range(3.0f, 7.0f);
		tier2Delay = Random.Range(3.0f, 7.0f);
		tier3Delay = Random.Range(3.0f, 7.0f);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void StartHaunt() {
		Debug.Log ("starting haunt");
		canMove = true;
		isHaunted = true;
		StartCoroutine (MoveAcrossTiers());
	}

	IEnumerator MoveAcrossTiers() {
		yield return new WaitForSeconds (tier1Delay);
		while (!canMove)
			yield return new WaitForSeconds (0.1f);
		GameObject tier = tiers [currentTier];
		int tierIndex = Random.Range (0, tier.transform.childCount);
		GameObject child = tier.transform.GetChild (tierIndex).gameObject;
		while (!child.GetComponent<LocationScript> ().isFree) {
			tierIndex = Random.Range (0, tier.transform.childCount);
			print ("tierIndex:" + tierIndex);
			yield return new WaitForSeconds (2.0f);
		}
		gameObject.transform.position = tier.transform.GetChild (tierIndex).position;
		currentTier++;

		yield return new WaitForSeconds (tier2Delay);
		while (!canMove)
			yield return new WaitForSeconds (0.1f);
		tier = tiers [currentTier];
		tierIndex = Random.Range (0, tier.transform.childCount);
		child = tier.transform.GetChild (tierIndex).gameObject;
		while (!child.GetComponent<LocationScript> ().isFree) {
			tierIndex = Random.Range (0, tier.transform.childCount);
			yield return new WaitForSeconds (2.0f);
		}
		gameObject.transform.position = tier.transform.GetChild (tierIndex).transform.position;
		currentTier++;

		yield return new WaitForSeconds (tier3Delay);
		while (!canMove)
			yield return new WaitForSeconds (0.1f);
		tier = tiers [currentTier];
		tierIndex = Random.Range (0, tier.transform.childCount);
		child = tier.transform.GetChild (tierIndex).gameObject;
		while (!child.GetComponent<LocationScript> ().isFree) {
			tierIndex = Random.Range (0, tier.transform.childCount);
			yield return new WaitForSeconds (2.0f);
		}
		gameObject.transform.position = tier.transform.GetChild (tierIndex).transform.position;
		currentTier++;
	}

	void MoveToNextTier() {
		GameObject tier = tiers [currentTier];
		int tierIndex = Random.Range (0, tier.transform.childCount);
		GameObject child = tier.transform.GetChild (tierIndex).gameObject;
		while (!child.GetComponent<LocationScript> ().isFree) {
			tierIndex = Random.Range (0, tier.transform.childCount);
		}
		gameObject.transform.position = tier.transform.GetChild (tierIndex).transform.position;
		currentTier++;
	}

	void OnTriggerEnter(Collider col) {
		if (col.gameObject.name == "GazeArea") {
			canMove = false;
		}
	}

	void OnTriggerExit(Collider col) {
		if (col.gameObject.name == "GazeArea") {
			canMove = true;
		}
	}
}
