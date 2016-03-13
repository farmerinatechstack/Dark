using UnityEngine;
using System.Collections;

public class IntroLightSequence : MonoBehaviour {
	public Light light;
	public Light light1;
	public Light light2;

	public AudioClip startSong;
	public AudioClip transitionClip;

	private AudioSource startSongSrc;
	private AudioSource transitionSrc;

	AudioSource AddAudio(AudioClip clip, bool loop, bool playAwake, float vol)
	{
		AudioSource audioSrc = gameObject.AddComponent <AudioSource>();
		audioSrc.clip = clip;
		audioSrc.loop = loop;
		audioSrc.playOnAwake = playAwake;
		audioSrc.volume = vol;
		return audioSrc;
	}

	void OnEnable() 
	{
		TimeEventManager.GameStarted += LightsOut;	
	}

	void OnDisable()
	{
		TimeEventManager.GameStarted -= LightsOut;	
	}

	void Awake()
	{
		startSongSrc = AddAudio (startSong, false, false, 1.0f);
		transitionSrc = AddAudio (transitionClip, false, false, 1.0f);
	}

	// Use this for initialization
	void Start () {
		startSongSrc.Play ();
	}

	// Update is called once per frame
	void Update () {
		
	}

	void LightsOut()
	{
		startSongSrc.Stop ();
		transitionSrc.Play ();
		StartCoroutine (KillLights ());
	}

	IEnumerator KillLights() 
	{
		yield return new WaitForSeconds (0.4f);
		Destroy (light1.gameObject);

		yield return new WaitForSeconds (0.3f);
		Destroy (light2.gameObject);
	}
}
