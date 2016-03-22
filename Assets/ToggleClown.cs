using UnityEngine;
using System.Collections;

public class ToggleClown : MonoBehaviour {
	public GameObject clownBasic;
	public Light killLight;

	// Use this for initialization
	void Start () {
		killLight.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void ToggleClownRenderer() {
		clownBasic.transform.GetChild(1).GetComponent<SkinnedMeshRenderer> ().enabled = true;
		killLight.intensity = 8.0f;
		killLight.enabled = true;
		StartCoroutine(DestroyClown());
	}

	IEnumerator DestroyClown() {
		yield return new WaitForSeconds(1.5f);
		clownBasic.transform.GetChild(1).GetComponent<SkinnedMeshRenderer> ().enabled = false;
		killLight.enabled = false;
	}
}
