#include <stdio.h>


int main(void) {
	int ��ȸ, ������, ����, ����, Ȯ��;
	printf("������ 100�� �������� ȯ���Ͽ� �Է��ϼ���(�������� ����)");
	scanf("%d %d %d %d %d", &��ȸ, &������, &����, &����, &Ȯ��);
	int score[5] = { ��ȸ, ������, ����, ����, Ȯ�� };
	int sum = 0;
	float average = 0.0f;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}
	average = sum / 5.0f;
	printf("������ %d��, ����� %.1f���Դϴ�.\n", sum, average);
	return 0;
}
