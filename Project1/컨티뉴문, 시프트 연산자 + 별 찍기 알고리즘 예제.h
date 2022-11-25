// continue문
/*
현재 반복에서 명령문의 실행을 종료하고 반복문의 처음으로 돌아가여 반복문의 다음 코드를 실행하는 명령문

#include <stdio.h>
int main(void)
{
	int a;

	for (a = 0; a < 5; a++)
	{
		if (a == 3)
			continue; // a의 값이 0부터해서 1씩 5까지 오르는데, a가 3이 되었을 때에만 작동을 멈추고 다시 돌아가 3을 건너뜀

		printf("a값: %d \n", a);
	}
}
*/

// 별 생성 알고리즘
/*
{
	int a;
	int b;

		for (a = 0; a < 5; a++)
		{
			for (b = 0; b <= a; b++)
			{
				printf("★");
			}
			printf("\n");
		}
}
*/

// 시프트 연산자
/*
비트 값을 주어진 숫자만큼 부호 방향으로 이동시키는 연산자

#include <stdio.h>
int main(void)
{
	char value = 10; // 0000 1010

	printf("비트를 왼쪽으로 3번 이동한 결과: %d", value << 3);
	// 0101 0000   <- 3번 이동된 결과. 2^6 = 64, 2^4= 16 > 64+16 = 80
	// 만일 이 값을 value에 저장하고 싶다면 <<=을 하면 됨. 오른쪽으로 이동을 원할 시 >>사용
}

*/#pragma once
