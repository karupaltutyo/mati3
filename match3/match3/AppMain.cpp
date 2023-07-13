/***********************************************
*プログラミング実習
*マッチ３ゲームの制作
************************************************/


#include"DxLib.h"
#include"FreamControl.h"
#include"InputControl.h"
#include"SceneManager.h"

/*******************************************
*マクロ定義
********************************************/
#define SCREEN_HEIGHT (480)    //スクリーンサイズ（高さ）
#define SCREEN_WIDTH  (640)    //スクリーンサイズ（幅）
#define SCREE_COLORBIT (32)    //スクリーンカラービット
#define FONT_SIZE      (20)    //文字サイズ

/******************************************
* 型定義
*******************************************/

/******************************************
*グローバル変数宣言
******************************************/

/******************************************
*プロトタイプ宣言
******************************************/

/*****************************************
*プログラムの開始
*****************************************/

int WINAPI WinMain(_In_ HINSTANCE  hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{

	//ウィンドウタイトル設定
	SetMainWindowText("Match 3 Puzzle");

	//ウインドモードで起動
	ChangeWindowMode(TRUE);

	//画面サイズの最大サイズ、カラービット数を設定
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);


	//Dxライブラリの初期化処理
	//エラーが発生したら、終了する
	if (DxLib_Init() == D_ERROR)
	{
		retun D_ERROR;
	}

	//各機能の初期化処理
	FreamControl_Initialize();    //フレームレート制御機能


	//入力待機
	WaitKey();


   //Dxライブラリ使用の終了処理
   DxLib_End();


   return 0;

}