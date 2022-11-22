#include <stdio.h>
int main(void)
{
	int data = 1;
	float dd = 1.2;

	switch (dd)  // 스위치 문에는 조건식으로 실수형 변수와 실수형 상수를 사용할 수 없음
	{
	case 0: printf("Title \n");
		break;  
	case 1: printf("Village \n");
		break;
	case 2: printf("Dungeon \n");
		break;
	default: printf("개같이 멸망 \n");
		break;
	case 3: printf("dd");
    }
}
		