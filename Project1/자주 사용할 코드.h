// scanf�� ���� �߻��� ��� ���� �ڵ�
// �ٽ� ���� �ʿ��ϸ� ������Ʈ -> project 1 �������� c/c++ SDL �˻� ���� �ٲٰ� �ش� �ڵ� �����
#pragma warning(disable:4996)

// ���� Ÿ���� ȿ��(�����̸� �θ鼭 Ÿ������ �Ǵ� ��)
/*
 #include <stdio.h>
#include <Windows.h>
int main(void)
{
int count = 0;
	const char * content = "League of Legend�� ���� ���� ȯ���մϴ�.";
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

// ���� ����
/*
	// 0 = ������
	// 1 = �Ķ���
	// 2 = �ʷϻ�
	// 3 = ����
	// 4 = ������
	// 5 = ���ֻ�
	// 6 = �����
	// 7 = Ⱥ��
	// 8 = ȸ��
	// 9 = ���� �Ķ���
	// 10 = ���� �ʷϻ�
	// 11 = ���� ����
	// 12 = ���� ������
	// 13 = ���� ���ֻ�
	// 14 = ���� �����
	// 15 = ���� ���

 ��� �ڵ�: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (���ϴ� ���� �ѹ�));
*/

// �ܼ� ũ�� ����
/*
	// cols = ����, lines = ����
	//system("mode con:cols=50 lines=10");
*/