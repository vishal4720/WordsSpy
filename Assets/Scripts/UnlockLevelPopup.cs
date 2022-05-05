using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class UnlockLevelPopup : MonoBehaviour
{
    [System.Serializable]
    public struct CategoryNames
    {
        public string name;
        public Sprite sprite;
    };

    public GameData currentGameData;
    public List<CategoryNames> categoryNames;
    public GameObject winPopUp;
    public Image categoryNameImage;

    // Start is called before the first frame update
    void Start()
    {
        winPopUp.SetActive(false);

        GameEvents.OnUnlockNextCategory += OnUnlockNextCategory;
    }

    private void OnDisable()
    {
        GameEvents.OnUnlockNextCategory -= OnUnlockNextCategory;
    }

    private void OnUnlockNextCategory()
    {
        bool captureNext = false;

        foreach (var writing in categoryNames)
        {
            if (captureNext)
            {
                categoryNameImage.sprite = writing.sprite;
                captureNext = false;
                break;
            }
            if (writing.name == currentGameData.selectedCategoryName)
            {
                captureNext = true;
            }
        }
        GooglePlayServices.instance.SendAchievement(GPGSIds.achievement_category_completed);
        winPopUp.SetActive(true);
    }
}
