// Blocking ������ Ű �Է�
/*
#include <stdio.h>
int main(void)
{
	while (1)
	{
		// blocking������ Ű �Է�
		while (1)
		{
			// Ű�� �Է� �޾����� �����ϰ� 224�� ���� key ������ ����
			int key = _getch();  // Ű�� �Է��� ���� �� 224��� ���� ��ȯ��
			// �Է��� Ű�� ���� ������ �־ �۵�
			key = _getch();

			switch (key)
			{
			// UP
			case 72:printf("�� \n");
				break;
			// LEFT
			case 75:printf("�� \n");
				break;
			// RIGHT
			case 77:printf("�� \n");
				break;
			// DOWN
			case 80:printf("�� \n");
				break;
			}
			printf("�ִϸ��̼� ���� ���� \n");
			printf("�� ���� �ý��� ���� \n");
		}
	}
	return 0;
}
*/

// Non Blocking ������ Ű �Է�
/*
#include <stdio.h>
#include <windows.h> // window�� ���� �������
int main(void)
{
	while (1)
	{
		if (GetAsyncKeyState(VK_UP))
		{
			printf("�� \n");
			Sleep(100); // 1/1000�� ���
			// Sleep();�Լ�: Ư�� �ð��� ����ϴ� �Լ�
		}
		else if (GetAsyncKeyState(VK_LEFT))
		{
			printf("�� \n");
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			printf("�� \n");
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			printf("�� \n");
		}
		printf("�ִϸ��̼� ���� ���� \n");
		printf("�� ���� �ý��� ���� \n");
	}
	return 0;
}
*/