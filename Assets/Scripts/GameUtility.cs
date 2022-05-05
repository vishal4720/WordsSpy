using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameUtility : MonoBehaviour
{
    public void LoadScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }

    public void ExitApplication()
    {
        Application.Quit();
    }

    public void HideBannerAds()
    {
        AdManager.instance.HideBanner();
    }

    public void MuteToggleBackgroundMusic()
    {
        SoundManager.Instance.ToggleBackgroundMusic();
    }

    public void MuteToggleSoundFX()
    {
        SoundManager.Instance.ToggleSoundFX();
    }

    public void PrivacyPolicyClick(string url)
    {
        Application.OpenURL(url);
    }
}
