#include <stdio.h>

//�迭�� �ʿ��� ����

int main1(void) {
	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;
	printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	printf("����ö 2ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	printf("����ö 3ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway_3);
	return 0;
}

//���� ����ö�� 100ȣ������ �ִٸ� ������ 100�� �����ؾ� �ϴ� ��Ȳ�� �����. �̷� �� �ʿ��� �� �迭(array)�̴�.
//�迭�� ������ �ڷ����� �� �������� �����ϴ� ���ӵ� ������ ���Ѵ�.

//�� ������ subway �迭 ---> int subway_array[3];



//�迭 �����ϱ� 

int main2(void) {
	int subway_array[3];  //�迭�� ũ�⿡�� ����� ��� �����ϴ�. ���� X
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;
	for (int i = 0; i < 3; i++) {
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	}
	
	return 0;
}



//�տ����� �迭�� �����ϰ� �ε����� �̿��� ��Ҹ��� ������ ���� ����. �̹����� �迭�� ����� �ʱ�ȭ�� ���ÿ�.

int main3(void) {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  //�迭 �ʱ�ȭ
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
// �迭�� ���� �Ҷ��� �迭 ũ�⸦ �� �־�� ������ �迭�� �����ϸ鼭 �ʱ�ȭ �� ���� �迭 ũ�⸦ ���� �ʾƵ� �ȴ�
// int arr[] = {1, 2};



int main4(void) {
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr_f[i]);

	}
	return 0;
}
//���� �������� ���� 4,5��° ��Ҵ� 0.00���



//�迭�� ���ڿ� �����ϱ�

int main5(void) {
	
	char str[] = "coding";
	//char str[7] = "coding";  // ������ ���� �˸��� null ���ڸ� ���Խ��Ѿ� �ؼ� �迭 ũ�⸦ ���ڼ� + 1�� �ؾ��Ѵ�.
	printf("% s\n", str);
	printf("%d\n", sizeof(str));  // 7��� 
	return 0;
}

int main6(void) {
	char str[] = "coding";
	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}return 0;
}


int main7(void) {
	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	return 0;
}   // 9���---> ���ĺ��� ���ڴ� �� ���ڿ� 1����Ʈ�� ����������, �ѱ��� �� ���ڿ� 2����Ʈ�� ������ �ʿ���.



//�ƽ�Ű�ڵ�� ���� �����ڸ� %c�� �ϸ� ���� a�� �״�� ��µǰ� %d�� �ϸ� ���� a�� �ƽ�Ű�ڵ� ���� 10������ ���.

int main8(void) {
	// �ƽ�Ű�ڵ� �� 0~127�� �ش��ϴ� ���� Ȯ��
	for (int i = 0; i < 128; i++) {
		printf("�ƽ�Ű�ڵ� �� %d : %c\n", i, i);
	}return 0;
}