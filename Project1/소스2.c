#include <stdio.h>
int main(void)
{
	int data = 1;
	float dd = 1.2;

	switch (dd)  // ����ġ ������ ���ǽ����� �Ǽ��� ������ �Ǽ��� ����� ����� �� ����
	{
	case 0: printf("Title \n");
		break;  
	case 1: printf("Village \n");
		break;
	case 2: printf("Dungeon \n");
		break;
	default: printf("������ ��� \n");
		break;
	case 3: printf("dd");
    }
}
		