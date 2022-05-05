using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using System;

public class AdManager : MonoBehaviour 
{
    public string AppId;
    public string adBannerId;
    public string adInterstitialId;
    public AdPosition bannerPosition;
    public bool testDevice = false;

    private BannerView _bannerView;
    private InterstitialAd _interstitial;

    public static AdManager instance;

    public static Action OnInterstitialAdsClosed;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(instance);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        RequestConfiguration requestConfiguration =
            new RequestConfiguration.Builder()
            .SetSameAppKeyEnabled(true).build();
        MobileAds.SetRequestConfiguration(requestConfiguration);

        MobileAds.Initialize(initStatus => {
            this.CreateBannerAd(CreateRequest());
            this.CreateInterstitialAd(CreateRequest());
        });
        this._interstitial.OnAdClosed += InterstitialAdClosed;
    }

    private void OnDisable()
    {
        if(_interstitial != null)
            this._interstitial.OnAdClosed -= InterstitialAdClosed;
    }

    private void InterstitialAdClosed(object sender, EventArgs e)
    {
        if (OnInterstitialAdsClosed != null)
        {
            OnInterstitialAdsClosed();
        }
    }

    private AdRequest CreateRequest()
    {
        AdRequest request;
        request = new AdRequest.Builder().Build();
        return request;
    }

    public void CreateInterstitialAd(AdRequest request)
    {
        this._interstitial = new InterstitialAd(adInterstitialId);
        this._interstitial.LoadAd(request);
    }

    public bool IsInterstitialAdLoaded()
    {
        return this._interstitial.IsLoaded();
    }

    public void CreateInterstitialRequest()
    {
        this._interstitial.LoadAd(CreateRequest());
    }

    public void ShowInterstitialAd()
    {
        if(this._interstitial.IsLoaded())
            this._interstitial.Show();

        this._interstitial.LoadAd(CreateRequest());
    }

    public void CreateBannerAd(AdRequest request)
    {
        this._bannerView = new BannerView(adBannerId, AdSize.SmartBanner, bannerPosition);
        this._bannerView.LoadAd(request);
        HideBanner();
    }

    public void HideBanner()
    {
        _bannerView.Hide();
    }

    public void ShowBanner()
    {
        _bannerView.Show();
    }
}
