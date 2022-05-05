using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WinPopup : MonoBehaviour
{
    public GameObject winPopup;


    // Start is called before the first frame update
    void Start()
    {
        winPopup.SetActive(false);    
    }

    private void OnEnable()
    {
        GameEvents.OnBoardCompleted += ShowWinPopUp;
        AdManager.OnInterstitialAdsClosed += InterstitialAdCompleted;
    }

    private void OnDisable()
    {
        GameEvents.OnBoardCompleted -= ShowWinPopUp;
        AdManager.OnInterstitialAdsClosed -= InterstitialAdCompleted;
    }

    private void InterstitialAdCompleted()
    {

    }


    private void ShowWinPopUp()
    {
        AdManager.instance.HideBanner();
        GooglePlayServices.instance.SendIncrementalAchievement(GPGSIds.achievement_complete_total_10_levels,1);
        GooglePlayServices.instance.SendIncrementalAchievement(GPGSIds.achievement_complete_20_levels, 1);

        if (CountDownTimer.instance.IsGameCompletedWithin20Sec())
            GooglePlayServices.instance.SendAchievement(GPGSIds.achievement_finish_a_level_within_20_seconds);

        DataSaver.SaveHighScore(10);
        winPopup.SetActive(true);
    }

    public void LoadNextLevel()
    {
        AdManager.instance.ShowInterstitialAd();
        GameEvents.LoadNextLevelMethod();
    }
}
