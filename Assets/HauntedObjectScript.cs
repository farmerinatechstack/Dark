using UnityEngine;
using System.Collections;

public class HauntedObjectScript : MonoBehaviour {
	public bool canMove;
	public bool isHaunted;

	// store tiers

	public AudioClip warningClip;
	public AudioClip killClip;

	private float tier3Delay;
	private float tier2Delay;
	private float tier1Delay;

	// Use this for initialization
	void Start () {
		canMove = false;
		isHaunted = false;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
