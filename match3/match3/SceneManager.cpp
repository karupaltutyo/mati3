#include"SceneManager.h"
#include"TitleScene.h"
#include"GameMainScene.h"
#include"GameClearScene.h"
#include"GameOverScene.h"

/***********************
*マクロ定義
***********************/

/***********************
*型定義
***********************/

/***********************
*変数宣言
***********************/
GAME_MODE GAME_MODE;                  //ゲームモード情報（現在）
GAME_MODE Next_Mode;                  //ゲームモード情報（次）
