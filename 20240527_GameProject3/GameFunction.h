#pragma once
/*
　ゲーム関数宣言
*/
//関数宣言

//<summary>
//スタート画面
//</summary>
//<param name="deltaTime">デルタタイム</pragma>
//<param name="startScreenImage">画像ハンドル</param>
void StartScreen(double deltaTime, int startScreenImage);

//<summary>
//ゲーム画面
//</summary>
//<param name="deltaTime">デルタタイム</pragma>
void GameProcessing(double deltaTime);

//<summary>
//リザルト画面
//</summary>
void ResultScreen();
