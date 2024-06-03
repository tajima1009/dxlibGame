/*
グローバル変数の初期化
*/
#include "GameData.h"

//グローバル変数の定義
//ゲームフラグ
bool enterPressedLastFrame = false;   //エンターキーが押されたかどうかのフラグ
bool gameStartFlag = false;//ゲーム開発フラグ
bool circleGenerationFlag = true;//円の再生フラグ
bool gameEndFlag = false;//ゲーム終了フラグ
bool enterPressAllowed = true;//エンターキーを押されてるかえを確認

//ゲームカウント
int enterPressCount = 0;

//構造体を変数にする
circle Circle;

//円の最大面積
double circleAreaMax = M_PI * CIRCLE_RADIUS_MAX * CIRCLE_RADIUS_MAX;

//円の面積割合
double circlePorpotin = 0.0f;

//フレームカウント
extern double frameCount = 0;

//カウント前
int prevCount = 0;

//カウント後
int nowCount = 0;

//画像ハンドル変数
int startScreenImage;
//アルファ値
int alpha;