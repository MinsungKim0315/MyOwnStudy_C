#include<stdio.h>

int main() {
	int id;
	int birth;
	char name[20];

	printf("�й�, ����, �̸��� �Է��Ͻÿ�: ");
	scanf_s("%d %d %c", &id, &birth, &name);

	printf("�й�: %d\n", id);
	printf("����: %d\n", birth);
	printf("�̸�: %c\n", name);

	switch (birth % 12)
	{
	case 0: printf("�����̶�\n"); break;
	case 1: printf("�߶�\n"); break;
	case 2: printf("����\n"); break;
	case 3: printf("������\n"); break;
	case 4: printf("���\n"); break;
	case 5: printf("�Ҷ�\n"); break;
	case 6: printf("ȣ���̶�\n"); break;
	case 7: printf("�䳢��\n"); break;
	case 8: printf("���\n"); break;
	case 9: printf("���\n"); break;
	case 10: printf("����\n"); break;
	case 11: printf("���\n"); break;
	}

	return 0;
}