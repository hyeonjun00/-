//���� ���� ����
//�̸�, ����, ������, Ű, ���˸��� �Է¹޾� ����ϴ� ���α׷� �ۼ�

#include <stdio.h>
int main(void) {
	//�̸� �Է�
	char name[256];
	printf("�̸��Է�: ");
	scanf_s("%s", &name, sizeof(name));

	//���� �Է�
	int age;
	printf("�����Է�: ");
	scanf_s("%d", &age, sizeof(age));

	//������ �Է�
	float weight;
	printf("������ �Է�: ");
	scanf_s("%f", &weight);

	//Ű �Է� double��� �غ���.
	double height;
	printf("Ű �Է�: ");
	scanf_s("%lf", &height);

	//���� �� �Է�
	char crime[256];
	printf("���� �Է�: ");
	scanf_s("%s", crime, sizeof(crime));

	//�⺻���� �Է� �Ϸ�, ���

	printf("\n\n---������ ����---\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������: %.1f\n", weight);
	printf("Ű: %.1lf\n", height);
	printf("���˸� : %s\n", crime);
	return 0;
}
