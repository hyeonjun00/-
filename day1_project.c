#define _CRT_SECURE_NO_WARNINGS  //vs������ scanf()����� �� �ְ�.
//���� ���� ����
//�̸�, ����, ������, Ű, ���˸��� �Է¹޾� ����ϴ� ���α׷� �ۼ�

#include <stdio.h>
int main(void) {
	//�̸� �Է�
	char name[256];
	printf("�̸��Է�: ");
	scanf("%s", &name);

	//���� �Է�
	int age;
	printf("�����Է�: ");
	scanf("%d", &age);

	//������ �Է�
	float weight;
	printf("������ �Է�: ");
	scanf("%f", &weight);

	//Ű �Է� double��� �غ���.
	double height;
	printf("Ű �Է�: ");
	scanf("%lf", &height);

	//���� �� �Է�
	char crime[256];
	printf("���� �Է�: ");
	scanf("%s", crime, sizeof(crime));

	//�⺻���� �Է� �Ϸ�, ���

	printf("\n\n---������ ����---\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������: %.1f\n", weight);
	printf("Ű: %.1lf\n", height);
	printf("���˸� : %s\n", crime);
	return 0;
}
