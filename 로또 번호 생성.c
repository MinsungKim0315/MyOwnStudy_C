#include<stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);
int main() {

	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}
void input_nums(int* lotto_nums) {
	int i;

	for (i = 0; i < 6; i++) {	//�ߺ� ���� �Է½� �ٽ� �Է��ϰԲ� ��������
		printf("��ȣ �Է�: ");
		scanf("%d", lotto_nums + i);
		/*if (lotto_nums[i] == lotto_nums[i + 1]) {
			printf("���� ��ȣ ����!!");
			i == i - 1;
		}
		else {
			i == i + 1;
		}*/
	}
}
void print_nums(int* lotto_nums) {
	int i;
	printf("�ζ� ��ȣ:");
	for (i = 0; i < 6; i++) {
		printf(" %d ", lotto_nums[i]);
	}
}