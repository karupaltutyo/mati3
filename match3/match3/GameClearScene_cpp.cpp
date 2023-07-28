#include "GameClearScene.h"
#include "DxLib.h"
#include "SceneManager.h"

/***************************
*�}�N����`
***************************/

/***************************
*�^��`
***************************/

/***************************
*�ϐ��錾
***************************/

int GameClearImage;
int GameClearSE;
int GameClearFlag;

/***************************
*�v���g�^�C�v�錾
***************************/

/***************************
*�Q�[���N���A��ʁF�������ݒ�
* �����F�Ȃ�
* �߂�l�G�G���[���
***************************/

int GameClearScene_Initialize(void)
{
	int ret = 0;

	//��ʂ̓ǂݍ���
	GameClearSE = LoadGraph("images/gameclear.png");
	//�����̓ǂݍ���
	GameClearSE = LoadSoundMem("sounds/gameclear_se.mp3");

	GameClearFlag = 0;

	//�G���[�`�F�b�N

	if (GameClearImage == -1)
	{
		ret = -1;
	}

	return ret;
}

/****************************
*�Q�[���N���A��ʁF�X�V����
* �����F�Ȃ�
* �߂�l�F�Ȃ�
****************************/

void GameClearScene_Update(void)
{
	//�Q�[���N���A���ʉ��Đ��`�F�b�N
	if (GameClearFlag == TRUE)
	{
		Change_Scene(E_GAMEMAIN);
	}
	else
	{
		PlaySoundMem(GameClearSE, DX_PLAYTYPE_BACK);
		GameClearFlag = TRUE;

	}
}

/******************************
*�Q�[���N���A
* �����F�Ȃ�
* �߂�l�F�Ȃ�
******************************/

void GameClearScene_Draw(void)
{
	DrawGraph(0, 0, GameClearImage, FALSE);
}