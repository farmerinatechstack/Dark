using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameStateScript : MonoBehaviour {
	public AudioClip StartSong;
	public Button startButton;
	public Button restart;
	public Text gameOver;
	public Text win;
	public Text lose;
	public GameObject endLight;

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

	public void Restart() {
		Application.LoadLevel (0);
	}

	public void WinGame() {
		EndHaunts ();
		endLight.SetActive(true);

		print ("Won Game");
		gameOver.enabled = true;
		win.enabled = true;
		restart.interactable = true;
		restart.GetComponentInChildren<Text>().enabled = true;
		StartSongSrc.Play ();
	}

	public void LoseGame() {
		EndHaunts ();
		endLight.SetActive(true);

		print ("Lost Game");
		gameOver.enabled = true;
		lose.enabled = true;
		restart.interactable = true;
		restart.GetComponentInChildren<Text>().enabled = true;
		StartSongSrc.Play ();
	}

	public void StopAmbient() {
		StartSongSrc.Stop ();
	}

	private void EndHaunts() {
		GameObject.Find ("WomanDoll").GetComponent<HauntedObjectScript> ().EndHaunt ();
		GameObject.Find ("Monkey").GetComponent<HauntedObjectScript> ().EndHaunt ();
		GameObject.Find ("Elephant").GetComponent<HauntedObjectScript> ().EndHaunt ();

	}
}
