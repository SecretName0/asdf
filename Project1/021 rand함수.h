
// rand()
/*
 0 ~ 32767���� ���� ���� ��ȯ�ϴ� �Լ�

 #include <stdio.h>
#include <time.h> // 1970�� 1�� 1�Ϻ��� ����Ǵ� �ð��� ������. �ð��� �� ������
int main(void)
{
	srand(time(NULL));
	for (int a = 0; a < 10; a++)
	{
		// rand()�Լ��� ���α׷��� ������ �� ������ ���� ��µǱ� ������ ���α׷��� ������ ������ѵ� ��� ���� ���� ��µ�
		// �ҿ����� ������

		int b = rand() % 9 + 1;
		printf("b��: %d \n", b);
	}
}
*/

// up-down����
/*
 ��ǻ�ʹ� 1~50 ������ ���� ���� ���� ��

 #include <stdio.h>
#include <time.h> // 1970�� 1�� 1�Ϻ��� ����Ǵ� �ð��� ������. �ð��� �� ������
int main(void)
{
	int answer; // ������ ���� ����
	int life = 5; // ����� ��

	srand(time(NULL));
	int CollectAnswer = rand() % 49 + 1;

	while (1)
	{
		scanf_s("%d", &answer);

		if (life == 0)
		{
			printf("Game Over");
		}

		if (CollectAnswer == answer)
		{
			printf("���� \n");
			break;
		}
		else if (CollectAnswer > answer)
		{
			printf("up \n");
			life--;
			printf("���� ����� ��: %d \n", life);
		}
		else if (CollectAnswer < answer)
		{
			printf("down \n");
			life--;
			printf("���� ����� ��: %d \n", life);
		}
	}
	printf("Congraturation! \n");
}
*/