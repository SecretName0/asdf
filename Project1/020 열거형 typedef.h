// 열거형
/*
 반드시 하나의 값만 가지게 될 변수의 집합체

 #include <stdio.h>
enum state
{
	idle,  // 대기 상태
	attack,  // 공격 상태
	defense,  // 방어 상태
	death  // 사망 상태
	// 열거형의 값을 임의로 변경하게 되면 그 뒤에 있는 열거형의 값까지 같이 값이 변화하게 된다.
};
int main(void)
{
	enum state state;
	// 캐릭터의 상태를 지정해줄 수 있음
	// enum의 경우 정수 값이 들어가게 되며, 초기 값을 따로 설정해주지 않으면 0이 나온다.
	// enum은 상수이기 때문에 값을 바꿀 수 없다.

	state = idle;

	switch (state)
	{
		case idle: printf("대기 상태");
			break;

		case attack:printf("공격 상태");
			break;

		case defense:printf("방어 상태");
			break;

		case death:printf("사망 상태");
			break;
	}

	return 0;
}
*/

// typedef
/*
 이미 사용되는 자료형을 자신의 임의대로 재정의 해주는 키워드

 typedef int ZXC; // int == ZXC

 typedef struct Player
{
	int x;
	int y;
	const char* shape;
}Lucia;
*/

// 소수 판별기
/*
 소수: 1보다 큰 자연수 중 1과 자신만을 약수로 가지는 수
 #include <stdio.h>
int main(void)
{
	int a,b; // a = 내가 입력하는 값
	int c = 0;

	printf("입력한 수: ");
	scanf_s("%d", &a);

	for (b = 2; b < a; b++)
	{
		if (a % b == 0)
			c = 1;
			break;
	}

	if (c == 0)
	printf("소수");
	else
	printf("소수가 아님");

	return 0;
}
*/
