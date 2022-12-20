
// rand()
/*
 0 ~ 32767사이 난수 값을 반환하는 함수

 #include <stdio.h>
#include <time.h> // 1970년 1월 1일부터 진행되는 시간을 가져옴. 시간을 초 단위로
int main(void)
{
	srand(time(NULL));
	for (int a = 0; a < 10; a++)
	{
		// rand()함수는 프로그램이 생성될 때 정해진 값이 출력되기 때문에 프로그램을 여러번 실행시켜도 계속 같은 값만 출력됨
		// 불완전한 랜덤임

		int b = rand() % 9 + 1;
		printf("b값: %d \n", b);
	}
}
*/

// up-down게임
/*
 컴퓨터는 1~50 사이의 난수 값을 갖게 됨

 #include <stdio.h>
#include <time.h> // 1970년 1월 1일부터 진행되는 시간을 가져옴. 시간을 초 단위로
int main(void)
{
	int answer; // 정답을 말할 변수
	int life = 5; // 목숨의 수

	srand(time(NULL));
	int CollectAnswer = rand() % 49 + 1;

	while (1)
	{
		scanf_s("%d", &answer);

		if (life == 0)
		{
			printf("Game Over");
		}

		if (CollectAnswer == answer)
		{
			printf("정답 \n");
			break;
		}
		else if (CollectAnswer > answer)
		{
			printf("up \n");
			life--;
			printf("남은 목숨의 수: %d \n", life);
		}
		else if (CollectAnswer < answer)
		{
			printf("down \n");
			life--;
			printf("남은 목숨의 수: %d \n", life);
		}
	}
	printf("Congraturation! \n");
}
*/