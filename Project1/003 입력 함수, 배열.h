// 입력 함수 [scanf]
/*
   표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에 맞춰 입력해주는 함수

   char alphabet = 'A';
   int value = 0;
   float data = 0.0;

   출력 <- [][][][][] <- 입력
   버퍼 오버플로가 발생할 수 있음

   scanf_s("%c", &alphabet);
   scanf_s("value = %d data = %f", &value, &data);
   svalue = 15 data = 3.5  <- 입력할 경우 이렇게 적어야함

   printf("alphabet의 값: %c \n", alphabet);
   printf("value의 값: %d \n", value);
   printf("data의 값: %f \n", data);

*/

// 배열
/*
 같은 자료형의 변수들로 이루어진 유한 집합

  ex) int space[5];                                   spcae [0] [1] [2]  [3] [4]
  // 만일 이 배열을 효율 적으로 쓰고 싶다면 int space[5] = {10 ,20 ,30 ,40 ,50}; 이런식으로 만들면 더욱 효율적으로 쓸 수 있다.
  // 배열된 변수의 시작점은 '0'부터 시작함. 예시는 int지만 char, float등 다양하게 쓸 수 있음
  // 배열의 크기는 컴파일 되는 시점부터 고정된 메모리 공간을 갖게된다.
  // 만약 모든 수를 0으로 만들고 싶을 경우 { 0,}; 로 처리하면 모두 0이 되고 만일 0이 아닌 다른 수를 넣으면 0번째 인덱스(공간)만 지정한 값이 되고
  뒤는 모두 0이 된다.
  // 배열의 이름은 배열의 시작주소를 의미한다

  space[0] = 10;
  space[1] = 20;
  space[2] = 30;
  space[3] = 40;
  space[4] = 50;

  printf("space[0]의 값: %d \n", space[0]);
  printf("space[1]의 값: %d \n", space[1]);
  printf("space[2]의 값: %d \n", space[2]);
  printf("space[3]의 값: %d \n", space[3]);
  printf("space[4]의 값: %d \n", space[4]);

*/
