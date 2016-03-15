using UnityEngine;
using System.Collections;

public class UtilityScript : MonoBehaviour {
	public static int HAUNT_LAYER = 8;
	private bool canFindSpace;


	// Use this for initialization
	void Start () {
		canFindSpace = true;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public static AudioSource AddAudio(GameObject obj, AudioClip clip, bool loop, bool playAwake, float vol)
	{
		AudioSource audioSrc = obj.AddComponent <AudioSource>();
		audioSrc.clip = clip;
		audioSrc.loop = loop;
		audioSrc.playOnAwake = playAwake;
		audioSrc.volume = vol;
		return audioSrc;
	}
}
