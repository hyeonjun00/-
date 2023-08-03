//if-else�� break��, continue��, switch-case���� �����ؼ� ���� ������ ������Ʈ�� ������


#include <stdio.h>

//if-else��

/*
if (����){
	//������ �����Ҷ� ������ ����
}else{
	//������ �������� ���� �� ������ ����
}
*/

int main1(void) {
	int age = 15;
	if (age >= 20) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("û�ҳ��Դϴ�,\n");
	}
	return 0;
}

int main2(void) {
	int age = 56;
	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�\n");
	}else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�.\n");
	}else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�.\n");
	}else {
		printf("�����Դϴ�.\n");
	}
	return 0;
}

//�����ڸ� Ȱ���غ���

int main3(void) {
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	if (a == b && c == d) {
		printf("���� ���� �����ϴ�.");
	}
	else {
		printf("���� ���� �ٸ��ϴ�.");
	}
	return 0;
}


int main4(void) {
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 3;
	if (a == b || c == d) {
		printf("a �� b �Ǵ� c �� d�� ���� �����ϴ�.");
	}
	else {
		printf("���� �ٸ��ϴ�.");
	}
	return 0;

}


//break���� ���ؼ� �����غ���.

int main5(void) {
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л����� ���� ��ǥ�Ұ�.\n");
			break;
		}
		printf("%d�� �л����� ��ǥ �غ��ϼ���.\n", i);

	}return 0;
}

int main6(void) {
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
				continue;
			}
			printf("%d�� �л��� ��ǥ�غ��ϼ���\n", i);
		}
	}return 0;
}


//���� �����ϱ�. <time.h>, <stdlib.h> �� ������ �ʿ��ϴ�.

#include <time.h>
#include <stdlib.h>

//srand(time(NULL));		������ ���� ���� �׻� �ʱ�ȭ�� ���Ѿ� �Ѵ�. �׷��� ������ ������ ���뵵 ������ �ʴ´�.(��� ���� ���� ���´�)
// rand() % 3;   -- > 0~2 ������ ������ ���� ����
// rand() % 3+1  -- > 1~3 ������ ������ ���� ����



//0���� 9������ ���ڸ� 10�� �̱�

int main7(void) {
	printf("���� �ʱ�ȭ ����...\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}
	srand(time(NULL)); //���� �ʱ�ȭ
	printf("\n\n���� �ʱ�ȭ...\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}
	return 0;
}


//switch���� �����غ���. 

/*

switch (����){
	case ��1:
		// ������ ����
		break;
	case ��2:
		// ������ ����
		break;
	...
	default:
		//� ���� �ش����� ���� �� ������ ����
		
*/


//switch���� �̿��� ���������� ����
int main10(void) {
	srand(time(NULL)); //���� �ʱ�ȭ
	int i = rand() % 3; //0~2��ȯ
	switch (i) {                 //case�� �������δ� �ϳ��� ���� �ۼ� �����ϰ� ������ �� �� ����.
		case 0:
			printf("����\n");
			break;
		case 1:
			printf("����\n");
			break;
		case 2:
			printf("��\n");
			break;
		default:
			printf("�����\n");
		}
		return 0;
	}




// switch ���� �̿��� �ռ� ���� ���� �����ϱ�
//case 8�϶� ������ ������ ����, break���� ��� ���� case 9���� �̵��ϰ� �ᱹ  break���� �ִ� case 13�� �����Ͽ� ������ ����ϰ� ����.

int main11(void) {
	int age = 15;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
		printf("�ʵ��л��Դϴ�\n");
		break;
	case 14:
	case 15:
	case 16:
		printf("���л��Դϴ�\n");
		break;
	default:
		printf("û�ҳ��� �ƴմϴ�.\n");
	}
	return 0;
}








