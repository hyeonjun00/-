//�迭�� Ư�� ��� ���� �ٲٴ� ���α׷��� ����� ����(������ ���)
#include <stdio.h>
#include <math.h>

void square(int* ptr) {
	if (*ptr % 2 == 0) {
		*ptr = pow(*ptr, 2);
	}
}
	
	
int main(void) {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		square(&arr[i]); //�迭 �� ����� �޸� �ּ� ����
	}
	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
		if (i < 9) {
			printf(",");
		}
	}
}