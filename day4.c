//�Լ��� ����ؼ� ��Ģ�����ϱ�

#include <stdio.h>

/*

//�Լ� ���� 
void p(int num);

int main(void){  (�߷�)  }

//�Լ� ���� 
void p(int_num){
	printf("num�� %d�Դϴ�.\n", num);
}


*/

// ���α׷����� �Լ��� ����Ϸ��� �����Ϸ��� '�̷� �Լ��� �� �ž�'��� �˷���� �Ѵ�.---> �Լ� ����, main()�Լ� ���� �ۼ�
// �Լ� ������ �ϰ� ���� �Լ��� � ���� ���� �����ؾ� �Ѵ�.---> �Լ� ����, main()�Լ� �Ʒ��ʿ� �ۼ�.

void cal(int num);

int main1(void) {
	int num = 2;
	cal(num);

	num = num + 3;
	cal(num);

	num = num * 3;
	cal(num);
	return 0;
}
void cal(int num) {
	printf("num�� %d�Դϴ�.\n", num);
}


// �Լ��� ����ؼ� �ڵ� �ߺ��� �����ϰ� ȿ�������� ���α׷����� �����ϴ�.
// �Լ��� printf(), scanf()��� ǥ�� ���̺귯�� �Լ�(���� �Լ�)�� ����� ���� �Լ��� �Ҵ�.
//void�� ��ȯ�� double float int char �� ������


/*	 int box(int num) {
		return num + 4;
	}
	int�� ��ȯ,�� box�� �Լ���, int num�� �Ű����� num + 4�� ��ȯ��!
*/


int function_with_return(); // �Լ� ���� 

int main2(void) {
	int ret = function_with_return();//��ȯ���� �ִ� �Լ� ȣ��
	printf("%d", ret);
	return 0;
}

int function_with_return(){   //�Լ� ����
	printf("��ȯ���� �ִ� �Լ��Դϴ�");
	return 10;
}




void function_with_params(int num1, int num2, int num3); //�Լ�����

int main3(void) {
	function_with_params(1, 2, 3);
	return 0;
}
void function_with_params(int num1, int num2, int num3){
	printf("���ް��� �ִ� �Լ��̰�, ���ް��� %d, %d, %d�Դϴ�.\n", num1, num2, num3);
	}





int apple(int total, int ate);  //�Լ�����

int main5(void) {
	int ret = apple(5, 2);  //�Լ�ȣ��
	printf("��� 5���� 2���� ������ %d�� �����ϴ�\n", ret);
	printf("��� %d�� %d���� ������ %d���� �����ϴ�.\n", 10, 4, apple(10, 4));
	return 0;
}


int apple(int total, int ate) {
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}



