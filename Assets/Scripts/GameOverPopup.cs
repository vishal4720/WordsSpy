using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverPopup : MonoBehaviour
{
    public GameObject gameOverPopUp;
    public GameObject continueGameAfterAdsButton;

    public GameObject checkNetwork;
    public GameObject checkNetwordExit;

    // Start is called before the first frame update
    void Start()
    {
        continueGameAfterAdsButton.GetComponent<Button>().interactable = false;
        continueGameAfterAdsButton.GetComponent<Button>().onClick.AddListener(OnContinueWithAdsButtonClick);
        checkNetwordExit.GetComponent<Button>().onClick.AddListener(OnExitOfCheckNetwordDialog);
        gameOverPopUp.SetActive(false);
        SetCheckNetworkDialogState(false);

        GameEvents.OnGameOver += ShowGameOverPopUp;
    }

    private void OnContinueWithAdsButtonClick()
    {
        if (AdManager.instance.IsInterstitialAdLoaded())
        {
            AdManager.instance.ShowInterstitialAd();
            CountDownTimer.instance.UpdateCountDownTimeAfterAds();
            SetCheckNetworkDialogState(false);
            gameOverPopUp.SetActive(false);
        }
        else
        {
            AdManager.instance.CreateInterstitialRequest(); 
            SetCheckNetworkDialogState(true);
        }
    }

    public void OnExitOfCheckNetwordDialog()
    {
        SetCheckNetworkDialogState(false);
    }

    private void SetCheckNetworkDialogState(bool state)
    {
        checkNetwork.SetActive(state);
    }

    private void OnDisable()
    {
        GameEvents.OnGameOver -= ShowGameOverPopUp;
    }

    public void ShowGameOverPopUp()
    {
        AdManager.instance.HideBanner();
        gameOverPopUp.SetActive(true);
        //if(AdManager.instance.IsInterstitialAdLoaded())
            continueGameAfterAdsButton.GetComponent <Button>().interactable = true;
       // else
        //    continueGameAfterAdsButton.GetComponent <Button>().interactable = false;
    }
}
