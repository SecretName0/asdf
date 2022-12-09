// 모듈러 연산자(나머지 연산자)
/*
어떠한 숫자를 다른 숫자로 나눈 나머지를 구하는 연산자

 a mod b -> (프로그래밍에서) a%b

 모듈러 연산자를 이용한 약수 계산 (12의 약수)

 int a, b;
	printf("입력 수의 약수: ");
	scanf("%d", &a);

		for (b = 1; b <= a; b++)
		{
			if (b == 12)
				printf("%d", b);
			else if (a % b == 0)
				printf("%d, ", b);
		}
		return 0;
*/

// while문
/*
조건이 계속될 때까지 계속해서 반복하는 반복문(= 조건이 계속 참이면 무한히 반복함. ex/ while(1) [1은 참을 나타내기 때문에 무한히 반복])

while문을 이용한 구구단
	int a, b;
	a = 2;
	b = 1;

	while (a <= 9)
	{
		printf("%d단 \n", a);
		while (b <= 9)
		{
			printf("%d x %d = %d \n", a, b, a * b);
			b++;
		}
		printf("\n");
		a++;
		b = 1;
	}

*/

// do-while문
/*
조건에 따라 내용이 거짓이라도 최소 1번은 실행하는 반복문

do
{
 내용
} while(조건)
*/

// 복합 대입 연산자
/*
+=, -+, *=, /=, %=

ex)
	int a = 10;

	a +=1; (= a = a+1)
	printf("%d \n", a);  <- 10에 1이 더해져 11이 출력됨

	a -= 6;
	printf("%d \n", a); <- 11이 된 a에 6을 빼 5가 출력

	a *= 2;
	printf("%d \n", a); <- 5가된 a에 2를 곱해 10이 됨

	a /= 5;
	printf("%d \n", a); <- 10이된 a를 5로 나누어 2 출력

	a %= 2;
	printf("%d \n", a); <- 2가된 a를 4로 모듈러 연산하여 0이 출력
*/
