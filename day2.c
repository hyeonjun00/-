#include <stdio.h>

//++������ Ȱ��

int main1(void) {
	int a = 10;
	printf("a�� %d\n", a);
	//a = a + 1;
	a++;
	printf("a�� %d\n", a);
	return 0;
}


//�ݺ����� �������.(for, while, do-while)



//for��
/*  
	for (����; ����; ����) {
			������ ����
 }

 */


int main2(void) {
	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}
	return 0;

} //i�� 1�� �ʱ�ȭ �ؼ� ó�� ����� �ʱ갪 1�� ��� �� ���� ������ ���� �κ��� �����Ͽ� 1�� �����ϴ� ���� 



//while�� 

/*

����;
while (����) {
	//������ ����(���� ����)
}

*/

int main3(void) {
	int i = 1; //while�� �ۿ��� ��������
	while (i <= 10) {
		printf("hello world %d\n", i++);
	//i++           while���� for�� ���� �⺻������ �бⰡ ���ϴ�. ���� i++�κ���  printf()�� �ȿ� �־ �ǰ� printf()�� �ۿ� �־ �������. 
	}
	return 0;
}






// do-while��
/*

����;
do{
	//������ ����
}while(����);


*/

int main4(void) {
	int  i = 1;  //while�� �ۿ��� ��������
	do {
		printf("hello world %d\n", i++);
	} while (i <= 10);  //while���� �ٸ���. do-while�� ���� �ڿ� �����ݷ��� �ٿ��� �Ѵ�. 
	return 0;			//do-while���� �ϴ� ������ �ѹ��� �����ϰ� �� �� ������ Ȯ���Ѵ�. while���� ���ǿ� ���� ������ �ƿ� �������� ������ �ִ�.
}



//������ �߸� �����ؼ� ���ѹݺ����� �����ٸ� Ctrl + C �� �ϸ� ���� ���� ����

int main_prac1(void) {
	for (int i = 0; i < 3; i++) {
		printf("������\n"); // 0,1,2 --->������ 3�� ���
	}
	return 0;
}


int main_prac2(void) {
	int i = 0;
	while (i != 5) {
		printf("���Ҿ�!\n");
		i++;
	}
	return 0;
}

int main_prac3(void) {
	int i = 3;
	do {
		printf("������\n");
		i--;
	} while (i > 3);  //do-while���� ������ �ѹ��� ���� ��Ų��. ������ 1�� ���.
	return 0;
}



//���� �ݺ���(��ø �ݺ���)�� �������. for �� �ȿ� for ���� ��ġ�� �ۼ��ϴ� ��.

int main_double(void) {
	for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("    �� ��° �ݺ��� ; %d\n", j);
		}
	}
	return 0;
}


//���߹ݺ����� �̿��� ������ ����ϱ�

int main5(void) {
	for (int i = 2; i <= 9; i++) {
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("% d x % d = % d\n", i, j, i * j);
		}
	}
	return 0;
}

//�Ƕ�̵� �����(�������� ����)
int main_pira_lef(void){
	for (int i = 0; i < 5; i++) {    //5�� �ݺ�-->5�� ¥�� �Ƕ�̵� ����
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");  //�ι�° ������ ������ ����
	}
	return 0;
}


int main_pira_rgt(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = i; j <= 4; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}




