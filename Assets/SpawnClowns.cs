using UnityEngine;
using System.Collections;

public class SpawnClowns : MonoBehaviour {
	public GameObject clownPrefab;
	public Transform[] spawnPoints;

	private bool spawnClown;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		if (spawnClown) {
			spawnClown = false;

			int spawnIndex = Random.Range (0, spawnPoints.Length);
			Transform spawnTransform = spawnPoints [spawnIndex];
			StartCoroutine (WaitAndSpawn (spawnTransform));
		}
	}

	void OnEnable() 
	{
		TimeEventManager.FirstHauntEnded += RandomlySpawnClowns;
	}

	void OnDisable()
	{
		TimeEventManager.FirstHauntEnded -= RandomlySpawnClowns;
	}

	void RandomlySpawnClowns() {
		spawnClown = true;
	}

	IEnumerator WaitAndSpawn(Transform t) {
		yield return new WaitForSeconds (Random.Range (6.0f, 10.0f));
		Instantiate (clownPrefab, t.position, t.rotation);
		spawnClown = true;
	}

	public void StopClowns() {
		Destroy (gameObject);
	}
}
