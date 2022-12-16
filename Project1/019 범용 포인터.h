// ���� ������
/*
 �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� ������

 #include <stdio.h>
// char, int, value
void Generic(char* name, void* value)
{
	if (name == "char")
		printf("%c \n", *(char*)value);
	else if (name == "int")
		printf("%d \n", *(int*)value);
	else if(name == "double")
		printf("%f \n", *(double*)value);
}

int main(void)
{
	char alphabet = 'a'; // 1byte
	int integer = 10; // 4byte
	double pi = 3.14; // 8byte

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� ����

	void* ptr = &alphabet; // ���� ptr�� alphabet�� �ּҸ� ������
	printf("ptr�� ����Ű�� ��: %c \n", *(char*)ptr);
	printf("ptr�� ���� �ּڰ�: %p \n", ptr);

	ptr = &integer;
	printf("ptr�� ����Ű�� ��: %d \n", *(int*)ptr);
	printf("ptr�� ���� �ּڰ�: %p \n", ptr);

	ptr = &pi;
	printf("ptr�� ����Ű�� ��: %f \n", *(double*)ptr);
	printf("ptr�� ���� �ּڰ�: %p \n", ptr);

	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű�� ������ �ڷ������� �� ��ȯ�� ���־�� �Ѵ�

	Generic("char", &alphabet); // ���� 'a'
	Generic("int", &integer); // ���� 10
	Generic("double", &pi); // �Ǽ� 3.14

	return 0;
}
*/

// �ִ� �ּڰ�
/*
#include <stdio.h>
#include <limits.h> // �ڷ����� �ִ񰪰� �ּڰ��� ������ִ� ��� ����
int main(void)
{
	int max;
	int min = INT_MAX;
	int a[] = { 6,10,1,2,8 };
	int b;

	max = a[0];
	for (b = 1; b < 5; b++)
	{
		if (max < a[b])
			max = a[b];
	}

	min = a[0];
	for (b = 1; b < 5; b++)
	{
		if (min > a[b])
			min = a[b];
	}
	printf("�ִ�: %d \n", max);
	printf("�ּڰ�: %d \n", min);

	return 0;
}
*/
