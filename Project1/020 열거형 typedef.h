// ������
/*
 �ݵ�� �ϳ��� ���� ������ �� ������ ����ü

 #include <stdio.h>
enum state
{
	idle,  // ��� ����
	attack,  // ���� ����
	defense,  // ��� ����
	death  // ��� ����
	// �������� ���� ���Ƿ� �����ϰ� �Ǹ� �� �ڿ� �ִ� �������� ������ ���� ���� ��ȭ�ϰ� �ȴ�.
};
int main(void)
{
	enum state state;
	// ĳ������ ���¸� �������� �� ����
	// enum�� ��� ���� ���� ���� �Ǹ�, �ʱ� ���� ���� ���������� ������ 0�� ���´�.
	// enum�� ����̱� ������ ���� �ٲ� �� ����.

	state = idle;

	switch (state)
	{
		case idle: printf("��� ����");
			break;

		case attack:printf("���� ����");
			break;

		case defense:printf("��� ����");
			break;

		case death:printf("��� ����");
			break;
	}

	return 0;
}
*/

// typedef
/*
 �̹� ���Ǵ� �ڷ����� �ڽ��� ���Ǵ�� ������ ���ִ� Ű����

 typedef int ZXC; // int == ZXC

 typedef struct Player
{
	int x;
	int y;
	const char* shape;
}Lucia;
*/

// �Ҽ� �Ǻ���
/*
 �Ҽ�: 1���� ū �ڿ��� �� 1�� �ڽŸ��� ����� ������ ��
 #include <stdio.h>
int main(void)
{
	int a,b; // a = ���� �Է��ϴ� ��
	int c = 0;

	printf("�Է��� ��: ");
	scanf_s("%d", &a);

	for (b = 2; b < a; b++)
	{
		if (a % b == 0)
			c = 1;
			break;
	}

	if (c == 0)
	printf("�Ҽ�");
	else
	printf("�Ҽ��� �ƴ�");

	return 0;
}
*/
