// ���ڿ�
/*
 ���ڷ� �̷���� �迭
 �������� �޸� ������ ����� ���� ������ ����
 ���ڿ��� ������ ���� 'NULL����(= \0)�� ���Եȴ�. (��, string[ ]ó�� �����Ϸ��� �˾Ƽ� ó���� ��쿡�� �ش��ϸ�, string[5]ó�� ���� �������� ���
 �ڷ����� ũ���� ���´�.
 *NULL������ ũ��: 1����Ʈ
 ���ڿ��� ���鵵 �Բ� �޸� ������ ���ԵǾ� ũ�Ⱑ �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ� ���� ���ڰ� �߰���
 // %s: ���ڿ��� �ѹ��� ����ϴ� ���� ������

 �迭�� ũ�⸦ �����ϰ� �����͸� �ְ� �Ǹ� �����Ϸ��� �ڵ����� �迭�� ũ�⸦ ����Ͽ� ��
 ex) char string[ ] = { 'A','B', 'C', 'D', 'E' };

					   [0] [1]  [2]  [3]  [4]
	char string[5] = { 'A','B', 'C', 'D', 'E' };  // char string[5] = "ABCDE"; �ε� ��Ÿ�� �� ����
	// ���� �ش� ���� string[5] = '\0';�� ǥ�� ��, E�� �ڸ��� NULL���ڰ� ��.


	for (int a = 0; a < 5; a++)
	{
		printf("%c \n", string[a]);
	}

		// char* charPtr = string;

	//printf("charPtr�� ũ��: %d \n", sizeof(charPtr));

	//charPtr[1] = 'z';
	//charPtr[3] = 't';

	//*charPtr = 'o';

	//charPtr = &string[4];
	//*charPtr = 'y';

	//printf("%s ", string);

	// %s: ���ڿ��� �ѹ��� ����ϴ� ���� ������

		char string[ ]= "abcde";

	char *charPoint = "abcde";

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������, ���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������
	// ���ڿ��� ���� ������ �� ����
	charPoint = "AGENT";
*/

// sizeof ������
/*
 �ڷ����� ũ�⸦ ��ȯ�ϴ� ������
 sizeof �����ڴ� ������ ũ�⸦ Byte������ ǥ����

	printf("char �������� ũ��: %lu byte \n", sizeof(char));
	printf("short �������� ũ��: %ld byte \n", sizeof(short));
	printf("int �������� ũ��: %ld byte \n", sizeof(int));
	printf("float �������� ũ��: %ld byte \n", sizeof(float));
	printf("double �������� ũ��: %ld byte \n", sizeof(double));
	printf("long �������� ũ��: %ld byte \n", sizeof(long));
	printf("long long �������� ũ��: %ld byte \n", sizeof(long long));

	printf("char �������� ũ��: %lu byte \n", sizeof(3.14));  // <- ���ͷ� ������ ����� �ְԵǸ� double�� �νĵǾ� 8����Ʈ�� ��������
	printf("char �������� ũ��: %lu byte \n", sizeof(3.14f)); // <- f�� ����� �ڿ� ������ ������ float ������ �ν��� 4����Ʈ�� ���� �� ����
*/