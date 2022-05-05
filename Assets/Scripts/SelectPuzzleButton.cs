using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SelectPuzzleButton : MonoBehaviour
{
    public GameData gameData;
    public GameLevelData levelData;
    public Text categoryText;
    public Image progressBarFilling;
    public Image lockImage;

    private string gameSceneName = "GameScene";

    private bool _levelLocked;

    // Start is called before the first frame update
    void Start()
    {
        _levelLocked = false;
        var button = GetComponent<Button>();
        button.onClick.AddListener(OnButtonClick);
        UpdateButtonInformation();

        if (_levelLocked)
        {
            lockImage.enabled = true;
            button.interactable = false;
        }
        else
        {
            lockImage.enabled = false;
            button.interactable = true;
        }
    }

    private void OnEnable()
    {
        AdManager.OnInterstitialAdsClosed += InterstitialAdClosed;
    }

    private void OnDisable()
    {
        AdManager.OnInterstitialAdsClosed -= InterstitialAdClosed;
    }

    private void InterstitialAdClosed()
    {

    }

    private void UpdateButtonInformation()
    {
        var currentIndex = -1;
        var totalBoards = 0;

        foreach(var data in levelData.data)
        {
            if(data.catrgoryName == gameObject.name)
            {
                currentIndex = DataSaver.ReadCategoryCurrentIndexValues(gameObject.name);
                totalBoards = data.boardData.Count;

                if(levelData.data[0].catrgoryName == gameObject.name && currentIndex < 0)
                {
                    DataSaver.SaveCategoryData(levelData.data[0].catrgoryName, 0);
                    currentIndex = DataSaver.ReadCategoryCurrentIndexValues(gameObject.name);
                    totalBoards = data.boardData.Count;
                }
            }
        }

        if(currentIndex == -1)
            _levelLocked = true;

        categoryText.text = _levelLocked ? string.Empty : (currentIndex.ToString() + "/" + totalBoards.ToString());
        progressBarFilling.fillAmount = (currentIndex > 0 && totalBoards > 0) ? ((float) currentIndex / (float ) totalBoards) : 0f;
    }

    private void OnButtonClick()
    {
        AdManager.instance.ShowInterstitialAd();
        gameData.selectedCategoryName = gameObject.name;
        SceneManager.LoadScene(gameSceneName);
    }
}
