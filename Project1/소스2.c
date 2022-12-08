#include <stdio.h>
void fx()
{
	printf("함수 fx실행");
	fx();
}
int main(void)
{
	fx();
}

// 재귀함수
/*
 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수
*/