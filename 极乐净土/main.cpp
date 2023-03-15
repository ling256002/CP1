#include <graphics.h>
#include <Windows.h>
#include <mmsystem.h> //播放音乐需要的头文件
#pragma comment(lib,"winmm.lib") //告诉编译器，加载winmm.lib库文件

int main(void) {
	initgraph(800, 513);
	loadimage(0, _T("jile.jpg"));
	//重复播放"极乐净土.mp3"
	mciSendString(_T("play 极乐净土.mp3 repeat"), 0, 0, 0);

	system("pause");
	closegraph();
	return 0;
}