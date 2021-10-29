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

	for (i = 0; i < 6; i++) {	//중복 숫자 입력시 다시 입력하게끔 만들어야함
		printf("번호 입력: ");
		scanf("%d", lotto_nums + i);
		/*if (lotto_nums[i] == lotto_nums[i + 1]) {
			printf("같은 번호 있음!!");
			i == i - 1;
		}
		else {
			i == i + 1;
		}*/
	}
}
void print_nums(int* lotto_nums) {
	int i;
	printf("로또 번호:");
	for (i = 0; i < 6; i++) {
		printf(" %d ", lotto_nums[i]);
	}
}