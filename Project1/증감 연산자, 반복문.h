#pragma once
// 증감 연산자
/* 피연산자를 1씩 증가 혹은 감소시킬 때 사용하는 연산자
 전위 증감 연산자: 값을 증감시킨 후에 연산자가 사용된 코드를 실행함	ex) ++ 변수/ -- 변수

	int x = 10;
	int result = 0;
	int result2 = 0;

	result = ++x;
	// result <= (11) <- 10 + 1
	result2 = --x;
	// result2 <= (10) <- 11 - 1

	printf("%d \n", result);
	printf("%d \n", result2);

 후위 증감 연산자: 값을 먼저 변수에 넣어준 다음 증감시키는 연산자 ex) 변수 ++/ 변수 --

	int x = 10;
	int result = 0;

	result = x++;

	printf("result값: %d \n", result);
	printf("x값: %d \n", x);  // result에 먼저 기본 x값인 10을 넘겨주고 그 후에 x는 10+1을 계산하여 x는 11, result는 10이 출력됨

	result = x--;

	printf("result값: %d \n", result);
	printf("x값: %d \n", x); // result에 전에 저장되어 있던 11의 값을 넘겨주고 이후 x는 11-1을 계산하여 x는 10, result는 11이 출력됨

	* 증감 값을 2 3--- 더 크게하고 싶다면 n+=2(원하는 만큼) <- 이런식으로 하면 됨
 */

 // 반복문
 /*
 반복문: 프로그램에서 특정한 작업을 반복적으로 수행하는 명령문

 for: 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문
 형태: for(초기식(변수); 조건식; 초기식 증감)
 {
   printf("ㅇㅇ");
 }

 ex) 구구단
	 int x, y;

	 for (x = 2; x <= 9; x++)
	 {
		 for (y = 1; y <= 9; y++)
		 {
			 printf("%d x %d = %d \n", x, y, x * y);
		 }
		 printf("\n");
	 }

 while: 특정 조건이 거짓일 때까지 반복하는 반복문
 형태:

 do-while: 조건이 거짓이라도 한번은 실행하는 반복문
 형태:

 */