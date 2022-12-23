// scanf등 오류 발생시 경고 제거 코드
// 다시 적용 필요하면 프로젝트 -> project 1 설정에서 c/c++ SDL 검사 예로 바꾸고 해당 코드 지우기
#pragma warning(disable:4996)

// 글자 타이핑 효과(딜레이를 두면서 타이핑이 되는 것)
/*
 #include <stdio.h>
#include <Windows.h>
int main(void)
{
int count = 0;
	const char * content = "League of Legend에 오신 것을 환영합니다.";
	//[L] ~ [.][\0]
	while (content[count] != '\0')
	{
		//[L][e][a]
		printf("%c", content[count++]);
		Sleep(100);
	}
	return 0;
}
*/

// 글자 색상
/*
	// 0 = 검정색
	// 1 = 파란색
	// 2 = 초록색
	// 3 = 옥색
	// 4 = 빨간색
	// 5 = 자주색
	// 6 = 노란색
	// 7 = 횐색
	// 8 = 회색
	// 9 = 연한 파란색
	// 10 = 연한 초록색
	// 11 = 연한 옥색
	// 12 = 연한 빨간색
	// 13 = 연한 자주색
	// 14 = 연한 노란색
	// 15 = 진한 흰색

 사용 코드: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (원하는 색상 넘버));
*/

// 콘솔 크기 설정
/*
	// cols = 가로, lines = 세로
	//system("mode con:cols=50 lines=10");
*/