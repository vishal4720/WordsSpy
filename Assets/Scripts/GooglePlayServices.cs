using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;
using GooglePlayGames.BasicApi;
using GooglePlayGames;

public class GooglePlayServices : MonoBehaviour
{
    public GameObject playConsoleLoginButton;
    public GameObject playConsoleLeaderboardButton;


    public static GooglePlayServices instance;



    private void Awake()
    {
        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();

        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(instance);
        }
    }


    public void ShowLeaderboard()
    {
        Social.ShowLeaderboardUI();
    }


    public void UploadLeaderboardScore(int score) {
        Social.ReportScore(score, GPGSIds.leaderboard_high_score, (bool success) => {
            // handle success or failure
            playConsoleLeaderboardButton.SetActive(success);
        });
    }

    public void SendAchievement(string Id)
    {
        Social.ReportProgress(Id,100.0f, (bool success) => { 
            
        });
    }

    public void SendIncrementalAchievement(string Id,int steps)
    {
        PlayGamesPlatform.Instance.IncrementAchievement(
            Id, steps, (bool success) => {
            // handle success or failure
        });
    }


    // Start is called before the first frame update
    void Start()
    {
        playConsoleLoginButton.SetActive(true);
        playConsoleLeaderboardButton.SetActive(false);
        PlayGamesPlatform.Instance.Authenticate(ProcessAuthentication);
        //Social.localUser.Authenticate(success =>{ PlayGamesButtonToggle(!success); });
    }

    private void PlayGamesButtonToggle(bool status)
    {
        playConsoleLoginButton.SetActive(status);
        playConsoleLeaderboardButton.SetActive(!status);
    }

    internal void ProcessAuthentication(SignInStatus status)
    {
        if (status == SignInStatus.Success)
        {
            // Continue with Play Games Services
            PlayGamesButtonToggle(false);
            Debug.Log("Passed");
        }
        else
        {
            // Disable your integration with Play Games Services or show a login button
            // to ask users to sign-in. Clicking it should call

            PlayGamesButtonToggle(true);
            Debug.Log("Failed");
        }
    }

    public void ManualAuthButtonClick()
    {
        Debug.Log("Button Clicked");
        PlayGamesPlatform.Instance.ManuallyAuthenticate(ProcessAuthentication);

    }
}
