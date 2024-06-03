/*
 �G���g���[�|�C���g���Q�[�����[�v
*/
#include "GameData.h"
#include "GameFunction.h"

//���C���֐�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)//Windows�̃��C���œ�����
{

    //---------------------------//
    // ��{�ݒ�
    //---------------------------//

    ChangeWindowMode(TRUE);//Windows�̉�ʂ��A�N�e�B�u�ɂ���
    DxLib_Init();//DxLib�̏�����
    SetMainWindowText("�^�C�~���O�Q�[��");//Windows�̖��O��ς���
    SetDrawScreen(DX_SCREEN_BACK);//��ʂ̔w�i��
    SetGraphMode(SCREEN_X, SCREEN_Y, 32);//��ʂ̑傫��

    //�~�̕`��
    Circle.posX = CIRCLE_POS_X;
    Circle.posY = CIRCLE_POS_Y;
    Circle.radius = CIRCLE_RADIUS_START;

    ////�摜�n���h���ϐ�
    //int startScreenImage;

    ////�摜���������ɒǉ�
    //startScreenImage = LoadGraph("img/tittle01.png");

    //DxLib�̏�����
    //�G���[���N�����璼���ɏI��
    if (DxLib_Init() == -1)
    {
        return -1;
    }

    //�t���[���J�E���g��������
    nowCount = prevCount = GetNowCount();


    //---------------------------//
    // �Q�[�����[�v
    //---------------------------//

    while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0 && ClearDrawScreen() == 0)
    {
        //���Ԃ��l��
        nowCount = GetNowCount();

        //�f���^�^�C������
        double deltaTime = (nowCount - prevCount) / 1000.0f;

        //�G���^�[�L�[�������ꂽ�����L��������
        enterPressedLastFrame = CheckHitKey(KEY_INPUT_RETURN);

        //�G���^�[�L�[���������ꂽ�񐔂ŕύX����
        //�O��i�X�^�[�g��ʂ̕\���j
        if (!gameStartFlag && !gameEndFlag)
        {
            //�X�^�[�g��ʊ֐����Ăяo��
            StartScreen(deltaTime);
        }
        //1�񂩂�3��i�Q�[����ʁj
        else if (gameStartFlag && !gameEndFlag)
        {
            //�Q�[����ʊ֐����Ăяo��
            GameProcessing(deltaTime);
        }
        //3��ȍ~�i���U���g��ʁj
        else if (gameEndFlag)
        {
            ResultScreen();
        }

        //���������t���[���̎���
        prevCount = nowCount;

    }

    //DxLib�̏I������
    DxLib_End();

    return 0;
}