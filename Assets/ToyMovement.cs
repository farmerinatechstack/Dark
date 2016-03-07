using UnityEngine;
using System.Collections;

public class ToyMovement : MonoBehaviour {

	public GameObject bear;
	public GameObject bear_positions;
	public float moveDelay = 0f;	
	public int count = 0;

	// Use this for initialization
	void Start () {
		bear = GameObject.Find ("Teddy Main");
		bear_positions = GameObject.Find ("Bear Positions");
		moveDelay = Time.time + 5f;
	}
	
	// Update is called once per frame
	void Update () {
		GameObject bear_position1 = bear_positions.transform.GetChild (0).gameObject;
		GameObject bear_position2 = bear_positions.transform.GetChild (1).gameObject;
		GameObject bear_position3 = bear_positions.transform.GetChild (2).gameObject;


		if (Time.time > moveDelay) {
			bear.transform.position = bear_positions.transform.GetChild (count).gameObject.transform.position;
			moveDelay = moveDelay + 10f;
			count++;
		}
		
	}

}



