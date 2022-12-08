// 재귀함수
/*
 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수

 void fx(int x)
{
	if (x == 0)
	{
		return;
	}
	// 재귀 함수는 함수를 계속 호출하기 떄문에 스택 영역에 메모리가 계속 쌓이게 되어 스택 오버플로우가 발생함
	printf("함수 fx실행 카운트 다운 '%d' \n",x);
	fx(x-1);

	// 재귀 함수의 경우 특정한 시점에서 함수를 반환해야 하고, 재귀적으로 호출한 함수는 스택 프레임에 의해 마지막에 호출된
	// 함수부터 차례대로 스택 영역에서 해제됨
}
int main(void)
{
	int count = 6;
	fx(count);
}
*/

// 삼항 연산자
/*
 [  조건  ][참의 경우 출력]:[거짓의 경우 출력]
 10 == 10? 100:0;
*/

// 재귀 함수로 팩토리얼 구현
/*
int Factorial(int x)
{
	if (x ==1)
	{
		printf("%d", x);
		return 1;
	}
	else
	{
		printf("%d*", x);
		return x * Factorial(x - 1);
	}
}
int main(void)
{
	int a=5;
	printf("%d! = ", a); // 5! =
	printf(" = %d", Factorial(a));
}
*/
