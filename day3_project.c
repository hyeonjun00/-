//1~100 ������ ���� �����ϰ� 5���� ��ȸ�� ���� ���߱� ������Ʈ
#define _CRT_SECURE_NO_WARNINGS

#include <time.h> // ��� ���� �߰�
#include <stdlib.h> // ��� ���� �߰�
#include <stdio.h>
#include <boollib.h>
int main(void)
{
	srand(time(NULL)); // ���� �ʱ�ȭ
	int num = rand() % 100 + 1; // ���� �����ϱ�(1~100 ���� ��ȯ)
	printf("���� : %d\n", num); // ���� ���
	int answer = 0; // �Է��� ���ڸ� ������ ����
	int chance = 5; // �亯 ��ȸ

	while (true) // chance > 0
	{
		printf("���� ��ȸ %d��\n", cnt--); // ��ȸ ����
		printf("���ڸ� ���� ������.(1~100) : ");
		scanf("%d", &answer); // ���� �Է¹ޱ�

		if (answer > num) // ���亸�� �Է��� ���ڰ� Ŭ ��
		{
			printf("DOWN ��\n\n");
		}
		else if (answer < num) // ���亸�� �Է��� ���ڰ� ���� ��
		{
			printf("UP ��\n\n");
		}
		else if (answer == num) // ����� �Է��� ���ڰ� ���� �� 
		{
			printf("�����Դϴ�!\n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾��.\n\n");
		}

		if (cnt == 0) // 5�� �ȿ� ������ ������ ������ ��
		{
			printf("��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�.\n");
			// printf("���� : %d\n", num);
			break;
		}
	}

	return 0;
}
