#include<stdio.h>

int main() {
	int id;
	int birth;
	char name[20];

	printf("ÇĞ¹ø, »ı³â, ÀÌ¸§À» ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf_s("%d %d %c", &id, &birth, &name);

	printf("ÇĞ¹ø: %d\n", id);
	printf("»ı³â: %d\n", birth);
	printf("ÀÌ¸§: %c\n", name);

	switch (birth % 12)
	{
	case 0: printf("¿ø¼şÀÌ¶ì\n"); break;
	case 1: printf("´ß¶ì\n"); break;
	case 2: printf("°³¶ì\n"); break;
	case 3: printf("µÅÁö¶ì\n"); break;
	case 4: printf("Áã¶ì\n"); break;
	case 5: printf("¼Ò¶ì\n"); break;
	case 6: printf("È£¶ûÀÌ¶ì\n"); break;
	case 7: printf("Åä³¢¶ì\n"); break;
	case 8: printf("¿ë¶ì\n"); break;
	case 9: printf("¹ì¶ì\n"); break;
	case 10: printf("¸»¶ì\n"); break;
	case 11: printf("¾ç¶ì\n"); break;
	}

	return 0;
}