using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameStateScript : MonoBehaviour {
	public AudioClip StartSong;
	public Button startButton;
	public Text gameOver;
	public Text win;
	public Text lose;

	public GameObject timeEventManager;

	private AudioSource StartSongSrc;

	// Use this for initialization
	void Start () {
		StartSongSrc = UtilityScript.AddAudio (gameObject, StartSong, false, false, 1.0f);
		StartSongSrc.Play ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void StartGame() {
		startButton.GetComponentInChildren<Text> ().enabled = false;
		timeEventManager.SetActive(true);
	}

	public void WinGame() {
		gameOver.enabled = true;
		win.enabled = true;

		StartSongSrc.Play ();
	}

	public void LoseGame() {
		gameOver.enabled = true;
		lose.enabled = true;

		StartSongSrc.Play ();
	}

	public void StopAmbient() {
		StartSongSrc.Stop ();
	}
}
