/*
�O���[�o���ϐ��̏�����
*/
#include "GameData.h"

//�O���[�o���ϐ��̒�`
//�Q�[���t���O
bool enterPressedLastFrame = false;   //�G���^�[�L�[�������ꂽ���ǂ����̃t���O
bool gameStartFlag = false;//�Q�[���J���t���O
bool circleGenerationFlag = true;//�~�̍Đ��t���O
bool gameEndFlag = false;//�Q�[���I���t���O
bool enterPressAllowed = true;//�G���^�[�L�[��������Ă邩�����m�F

//�Q�[���J�E���g
int enterPressCount = 0;

//�\���̂�ϐ��ɂ���
circle Circle;

//�~�̍ő�ʐ�
double circleAreaMax = M_PI * CIRCLE_RADIUS_MAX * CIRCLE_RADIUS_MAX;

//�~�̖ʐϊ���
double circlePorpotin = 0.0f;

//�t���[���J�E���g
extern double frameCount = 0;

//�J�E���g�O
int prevCount = 0;

//�J�E���g��
int nowCount = 0;

//�摜�n���h���ϐ�
int startScreenImage;
//�A���t�@�l
int alpha;