// Blocking 형태의 키 입력
/*
#include <stdio.h>
int main(void)
{
	while (1)
	{
		// blocking형태의 키 입력
		while (1)
		{
			// 키가 입력 받았음을 감지하고 224의 값을 key 변수에 넣음
			int key = _getch();  // 키를 입력을 했을 때 224라는 값이 반환됨
			// 입력한 키의 수를 변수에 넣어서 작동
			key = _getch();

			switch (key)
			{
			// UP
			case 72:printf("↑ \n");
				break;
			// LEFT
			case 75:printf("← \n");
				break;
			// RIGHT
			case 77:printf("→ \n");
				break;
			// DOWN
			case 80:printf("↓ \n");
				break;
			}
			printf("애니메이션 동작 실행 \n");
			printf("적 정찰 시스템 동작 \n");
		}
	}
	return 0;
}
*/

// Non Blocking 형태의 키 입력
/*
#include <stdio.h>
#include <windows.h> // window에 관한 헤더파일
int main(void)
{
	while (1)
	{
		if (GetAsyncKeyState(VK_UP))
		{
			printf("↑ \n");
			Sleep(100); // 1/1000로 계산
			// Sleep();함수: 특정 시간을 대기하는 함수
		}
		else if (GetAsyncKeyState(VK_LEFT))
		{
			printf("← \n");
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			printf("→ \n");
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			printf("↓ \n");
		}
		printf("애니메이션 동작 실행 \n");
		printf("적 정찰 시스템 동작 \n");
	}
	return 0;
}
*/