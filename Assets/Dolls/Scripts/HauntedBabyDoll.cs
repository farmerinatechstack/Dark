/// <summary>
/// 
/// Haunted Baby Doll
/// 
/// This is a simple script JUST for showcase purposes (test scene). It coordinates some sounds based on variable iterations and pre-made transitions (animController demo).
/// 
/// NOTE> I do not give support for this script. Feel free to tweak and use it as a base for your own sounds/transitions.
/// 
/// 
/// </summary>

using UnityEngine;
using System.Collections;

public class HauntedBabyDoll : MonoBehaviour {
	
	[SerializeField]AudioClip[] sounds;

	private AudioSource _audioSource;
	private int iterations = 0;


	void Awake(){

		_audioSource = GetComponent <AudioSource> ();
        _audioSource.volume = 0.3f;

	}

	// Use this for initialization
	void Start () {

		StartCoroutine (_mecanimSound());

	}
	

	private IEnumerator _mecanimSound(){

		int headCount = 0;

		Animator thisAnim = GetComponent<Animator> ();

		//anim hashes
		int headMovState = Animator.StringToHash("Bug");
		int headBugState = Animator.StringToHash ("HeadBug");


		while (true) {

			switch (iterations){

			case (int)iterationsName.contorsionSound : 

				//First sound to be applied
				if (thisAnim.GetCurrentAnimatorStateInfo (0).shortNameHash == headMovState && !GetComponent<AudioSource>().isPlaying) {

					
					_audioSource.clip = sounds [(int)iterationsName.contorsionSound];
					GetComponent<AudioSource> ().Play ();

					
					yield return StartCoroutine (__nextIteration());

				}

				break;

			case (int)iterationsName.demonicSound : 

				//Second sound to be applied
				yield return new WaitForSeconds (.6f);

				if (!GetComponent<AudioSource>().isPlaying){

					_audioSource.clip = sounds [(int)iterationsName.demonicSound];
					GetComponent<AudioSource> ().Play ();


					yield return StartCoroutine (__nextIteration());

				}
					
				break;

			case (int)iterationsName.headBug:
				
				//Third
				if (thisAnim.GetCurrentAnimatorStateInfo (0).shortNameHash == headBugState && !GetComponent<AudioSource>().isPlaying){

					_audioSource.clip = sounds [(int)iterationsName.contorsionSound];
			
					GetComponent<AudioSource> ().Play ();

					yield return new WaitForSeconds (.5f);

					headCount++;
					

				}
				break;

			}


			//Reset
			if (headCount == 3){
				
				iterations = 0;
				headCount = 0;

			}

			yield return null;
		}

	}



	private IEnumerator __nextIteration(){

		++iterations;
		yield return null;

	}
		

	private enum iterationsName{

		contorsionSound, demonicSound, headBug
	}
		

	
}
