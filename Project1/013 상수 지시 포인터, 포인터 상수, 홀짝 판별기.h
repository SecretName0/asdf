// 상수 지시 포인터
/*
 포인터가 가리키는 값을 상수화 한다
 int value = 100;
 const int * pointer = &value

 value = 200; // 해당 변수는 상수화 되지 않음

 */

 // 포인터 상수 (배열의 이름)
 /*
  int data = 10;
  int signal = 20;
  int * const address = data

 */

 // 홀짝 판별기
 /*
 int main(void)
 {
	 int a;

	 printf("입력한 수 ");
	 scanf_s("%d", &a);

	 if ((a != 0) && (a % 2 == 0))
	 {
		 printf("짝수 \n");
	 }

	 else if (a % 2 == 1)
	 {
		 printf("홀수 \n");
	 }

	 else
		 printf("0");
 }
 */
