#include <stdio.h>

int convert_time(int minutes);

int main(void) {
	int time = 0;
	printf("�ð��� ������ �Է��ϼ���: ");
	scanf("%d", &time);
	convert_time(time);
	return 0;
}

int convert_time(int minutes) {
	printf("%d�ð� %d��", minutes / 60, minutes % 60);
}

