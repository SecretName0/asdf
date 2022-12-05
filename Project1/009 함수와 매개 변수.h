// 함수
/*
 하나의 특별한 목적의 작업을 수행하기 위해 설계된 코드의 집합

 함수를 호출 할 때에도 자료형은 사용해야함
 ex)
	int Fx( ) // 자료형 함수명 입력 형태
	{   // <- 함수의 몸체

		return 0;
	}   // <- 함수의 끝

 자료형의 형태들
  - void: 값을 반환하지 않는 자료형 // void 자료형을 이용할 경우, 함수 내에 return이 필요가 없고, 내용은 실행하고 싶은 내용만 있으면 된다.
  ex)
  void main()
  {
  (실행하고 싶은 내용)
  {
  - char
  - short
  - long
  - long long
  - float
  - double
  등등..
*/

// 매개 변수
/*
 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용되는 변수
 매개 변수는 함수 내부에서 사용이 가능하다.


// 반환형 함수명 ()
void Fx()
{
	printf("해위 \n");
	printf("해위 \n");
	printf("해위 \n");
	printf("해위 \n");
	printf("해위 \n");
}

int Damage()
{
	return 3;
	return 10.65;
	// 함수의 반환 값은 하나만 반환됨
}
// 함수 또한 자료형과 반환 값의 형태가 일치하지 않으면 원하는 값을 얻을 수 없고, 같은 이름의 함수를 중복 선언할 수도 없다.

int NewType(int x, int y)
{
	// 매개 변수는 얼마든지 계속 생성할 수 있음
	// 매개 변수는 함수의 내부에서만 사용이 되고, 함수가 종료되면 소멸하게 된다.
	int result = x;

	return result;
}
int main()
{
	Fx();

	printf("Damage 함수가 반환한 결과 값: %d \n", Damage());

	// 인수
	// 함수가 호출될 때 매개변수에 실제로 전달되는 값
	printf("NewType 함수의 반환된 x의 값: %d", NewType(17, 26)); // 뉴타입 함수의 x에 17, y엔 26을 인수로써 대입.
	return 0;
}
*/
