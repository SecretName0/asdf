// 문자열
/*
 문자로 이루어진 배열
 연속적인 메모리 공간에 저장된 문자 변수의 집합
 문자열을 생성할 때는 'NULL문자(= \0)가 포함된다. (단, string[ ]처럼 컴파일러가 알아서 처리한 경우에만 해당하며, string[5]처럼 직접 지정해준 경우
 자료형의 크기대로 나온다.
 *NULL문자의 크기: 1바이트
 문자열은 공백도 함께 메모리 공간에 포함되어 크기가 결정되며, 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됨
 // %s: 문자열을 한번에 출력하는 서식 지정자

 배열의 크기를 생략하고 데이터를 넣게 되면 컴파일러가 자동으로 배열의 크기를 계산하여 줌
 ex) char string[ ] = { 'A','B', 'C', 'D', 'E' };

					   [0] [1]  [2]  [3]  [4]
	char string[5] = { 'A','B', 'C', 'D', 'E' };  // char string[5] = "ABCDE"; 로도 나타낼 수 있음
	// 만일 해당 문에 string[5] = '\0';를 표기 시, E의 자리에 NULL문자가 들어감.


	for (int a = 0; a < 5; a++)
	{
		printf("%c \n", string[a]);
	}

		// char* charPtr = string;

	//printf("charPtr의 크기: %d \n", sizeof(charPtr));

	//charPtr[1] = 'z';
	//charPtr[3] = 't';

	//*charPtr = 'o';

	//charPtr = &string[4];
	//*charPtr = 'y';

	//printf("%s ", string);

	// %s: 문자열을 한번에 출력하는 서식 지정자

		char string[ ]= "abcde";

	char *charPoint = "abcde";

	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며, 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에
	// 문자열의 값을 변경할 수 없다
	charPoint = "AGENT";
*/

// sizeof 연산자
/*
 자료형의 크기를 반환하는 연산자
 sizeof 연산자는 데이터 크기를 Byte단위로 표시함

	printf("char 데이터의 크기: %lu byte \n", sizeof(char));
	printf("short 데이터의 크기: %ld byte \n", sizeof(short));
	printf("int 데이터의 크기: %ld byte \n", sizeof(int));
	printf("float 데이터의 크기: %ld byte \n", sizeof(float));
	printf("double 데이터의 크기: %ld byte \n", sizeof(double));
	printf("long 데이터의 크기: %ld byte \n", sizeof(long));
	printf("long long 데이터의 크기: %ld byte \n", sizeof(long long));

	printf("char 데이터의 크기: %lu byte \n", sizeof(3.14));  // <- 리터럴 값으로 상수를 넣게되면 double로 인식되어 8바이트로 잡히지만
	printf("char 데이터의 크기: %lu byte \n", sizeof(3.14f)); // <- f를 상수값 뒤에 붙히는 것으로 float 값으로 인식해 4바이트로 줄일 수 있음
*/