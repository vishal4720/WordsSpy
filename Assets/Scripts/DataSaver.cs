using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataSaver : MonoBehaviour
{
    private static string _highScoreKey = "HighScore";

    public static int ReadCategoryCurrentIndexValues(string name)
    {
        var value = -1;
        if (PlayerPrefs.HasKey(name))
        {
            value = PlayerPrefs.GetInt(name);
        }
        return value;
    }

    public static void SaveHighScore(int score)
    {
        if (PlayerPrefs.HasKey(_highScoreKey))
        {
            PlayerPrefs.SetInt(_highScoreKey, PlayerPrefs.GetInt(_highScoreKey) + score);
        }
        else
        {
            PlayerPrefs.SetInt(_highScoreKey, score);
        }
    }

    public static void SaveCategoryData(string categoryName,int currentIndex)
    {
        PlayerPrefs.SetInt(categoryName,currentIndex);
        PlayerPrefs.Save();
    }

    public static void ClearGameData(GameLevelData levelData)
    {
        foreach(var data in levelData.data)
        {
            PlayerPrefs.SetInt(data.catrgoryName, -1);
        } 

        // Unlock First Level
        PlayerPrefs.SetInt(levelData.data[0].catrgoryName, 0);
        PlayerPrefs.Save();
    }
}
