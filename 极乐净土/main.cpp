#include <graphics.h>
#include <Windows.h>
#include <mmsystem.h> //����������Ҫ��ͷ�ļ�
#pragma comment(lib,"winmm.lib") //���߱�����������winmm.lib���ļ�

int main(void) {
	initgraph(800, 513);
	loadimage(0, _T("jile.jpg"));
	//�ظ�����"���־���.mp3"
	mciSendString(_T("play ���־���.mp3 repeat"), 0, 0, 0);

	system("pause");
	closegraph();
	return 0;
}