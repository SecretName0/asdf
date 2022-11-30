// 포인터
/*
 메모리의 주소 값을 저장할 수 있는 변수
 포인터에는 정수, 실수, 문자, 문자열 등은 안되고 오직 주소 값만 들어갈 수 있음

 * <- 에스테리스크 연산자
  - 포인터 변수명의 앞에 나올 경우엔 포인터 변수가 가리키고 있는 '메모리에 접근한다'는 의미
  ex) *point;

  - 피연산자가 숫자로 나올 경우는 곱하기를 의미
  ex) 5*9;

  - 자료형과 변수명 사이에 나올 경우는 포인터 변수의 선언을 의미함. 즉, char형 변수값을 가리키는 포인터 변수 point임을 의미
  ex) char * point


	int a = 10;
	int data = 20;

	// 메모리 변경 전

	// 포인터 변수를 저장하려면 주소 값을 저장할 변수의 자료형과 포인터 변수의 자료형이 일치시켜야 함
	int* point = &a;
	*point = 100;
	printf("a의 메모리 주소: %p \n", &a);
	printf("포인터 변수의 메모리 주소: %p \n", point);
	printf("포인터의 메모리 주소: %p \n", &point);

	printf("a의 값: %d \n", a);
	printf("point 변수가 가리키는 메모리의 값: %d \n \n", *point);

	// 변경 후

	point = &data;
	*point = 80;
	printf("data의 메모리 주소: %p \n", &data);
	printf("포인터 변수의 메모리 주소: %p \n", point);
	printf("포인터의 메모리 주소: %p \n", &point);

	printf("data의 값: %d \n", data);
	printf("point 변수가 가리키는 메모리의 값: %d \n \n", *point);
*/
