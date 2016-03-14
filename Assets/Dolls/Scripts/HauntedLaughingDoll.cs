/// <summary>
/// 
/// Haunted Laughing Doll
/// 
/// This is a simple script JUST for showcase purposes (test scene). It coordinates some sounds based on variable iterations and pre-made transitions (animController demo).
/// 
/// NOTE> I do not give support for this script. Feel free to tweak and use it as a base for your own sounds/transitions.
/// 
/// 
/// 
/// </summary>

using UnityEngine;
using System.Collections;

public class HauntedLaughingDoll : MonoBehaviour {
	
	[SerializeField]AudioClip[] sounds;

	private AudioSource _audioSource;
	private int _iterations = 0;


	void Awake(){

		_audioSource = GetComponent <AudioSource> ();

	}

	// Use this for initialization
	void Start () {

		StartCoroutine (_mecanimSound());

	}
	

	private IEnumerator _mecanimSound(){


		Animator thisAnim = GetComponent<Animator> ();
       
        //anim hashes
        int swinging = Animator.StringToHash("Swinging");
        int swinging0 = Animator.StringToHash("Swinging 0");
        int swinging1 = Animator.StringToHash("Swinging 1");


		while (true) {


            switch (_iterations)
            {


                case (int)iterationsName.swinging:


                    //First sound to be applied
                    yield return StartCoroutine(_swinging(thisAnim, swinging));


                    break;



                case (int)iterationsName.headMov:

                    //Second sound to be applied
                    yield return new WaitForSeconds(1.5f);
                   

                    if (!GetComponent<AudioSource>().isPlaying){

                   
                        _audioSource.clip = sounds[(int)iterationsName.headMov];

                       // _audioSource.volume = 0.5f;
                        GetComponent<AudioSource>().Play();


                        yield return new WaitForSeconds(2.5f);

                      //  _audioSource.volume = 1f;
                        yield return StartCoroutine(__nextIteration());

                    }

                    break;


                case (int)iterationsName.swinging0:

                    //Third
                  //  _audioSource.volume = 1f;
                    yield return StartCoroutine(_swinging(thisAnim, swinging0));


                    break;




                case (int)iterationsName.sloMoLaugh:

                    yield return new WaitForSeconds(1.8f);

                    if (!GetComponent<AudioSource>().isPlaying)
                    {

                        _audioSource.clip = sounds[2];
                        GetComponent<AudioSource>().Play();

                        yield return new WaitForSeconds(4f);
                        yield return StartCoroutine(__nextIteration());

                    }


                    break;


                case (int)iterationsName.swinging1:

                    //Third
                    yield return StartCoroutine(_swinging(thisAnim, swinging1));


                    break;

                case (int)iterationsName.headMov2:


                    if (!GetComponent<AudioSource>().isPlaying)
                    {

                        _audioSource.clip = sounds[3];

                        GetComponent<AudioSource>().Play();

                        yield return StartCoroutine(__nextIteration());


                    }


                    break;


                case (int)iterationsName.headMov22:



                    if (!GetComponent<AudioSource>().isPlaying) {


                      //  _audioSource.volume = 0.5f;
                         

                        _audioSource.clip = sounds[1];
                        GetComponent<AudioSource>().Play();

                        yield return new WaitForSeconds(.5f);

                        GetComponent<AudioSource>().Stop();
                        GetComponent<AudioSource>().Play();

                        yield return new WaitForSeconds(.5f);

                        GetComponent<AudioSource>().Stop();
                        GetComponent<AudioSource>().Play();

                      
                        _iterations = 0;

                    }
                    

                    break;
            }

			yield return null;
		}

	}



    private IEnumerator _swinging(Animator thisAnim, int clip){

        if ((thisAnim.GetCurrentAnimatorStateInfo(0).shortNameHash == clip) && !GetComponent<AudioSource>().isPlaying)
        {

            _audioSource.clip = sounds[(int)iterationsName.swinging];
            GetComponent<AudioSource>().Play();
        }

        if (thisAnim.GetCurrentAnimatorStateInfo(0).shortNameHash != clip)
        {

            GetComponent<AudioSource>().Stop();

            yield return StartCoroutine(__nextIteration());
        }

    }


    private IEnumerator __nextIteration(){

		++_iterations;
		yield return null;

	}
		

	private enum iterationsName{

		swinging, headMov, swinging0, sloMoLaugh, swinging1, headMov2, headMov22
	}
		

	
}
