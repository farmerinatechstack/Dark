using UnityEngine;
using System.Collections;

public class ToyMovement : MonoBehaviour {

	public GameObject bear;
	public GameObject bear_positions;
	public int count = 0;

	// Use this for initialization
	void Start () {
		bear = GameObject.Find ("Teddy Main");
		bear_positions = GameObject.Find ("Bear Positions");

		GameObject bear_position1 = bear_positions.transform.GetChild (0).gameObject;
		GameObject bear_position2 = bear_positions.transform.GetChild (1).gameObject;
		GameObject bear_position3 = bear_positions.transform.GetChild (2).gameObject;

		StartCoroutine (moveBear ());
	}
	
	// Update is called once per frame
	void Update () {
	}

	private IEnumerator moveBear() {
		yield return new WaitForSeconds (19.0f);
		bear.transform.position = bear_positions.transform.GetChild (count).gameObject.transform.position;
		count++;

		yield return new WaitForSeconds (5.0f);
		bear.transform.position = bear_positions.transform.GetChild (count).gameObject.transform.position;
		count++;

		yield return new WaitForSeconds (5.0f);
		bear.transform.position = bear_positions.transform.GetChild (count).gameObject.transform.position;
		count++;
	}	
}



