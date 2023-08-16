//�����͸� ���Ͽ� ������ ������ϴ� ����� �˾ƺ���.
// fputs() fgets() fprintf(), fscanf()


// FILE * �����͸� = fopen(���ϸ�, ���ϸ��);



#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS   //��ũ�θ� �����ϴ� ��ó���� ���ù�. ���Ȱ�� ������� �ʵ��� �����ϴ� ���� ��ũ��

int main1(void) {
	char line[10000];  //���Ͽ��� �о� ���� ���ڿ� ���� �迭 ����
	FILE* file = fopen("C:\\Users\\USER\\Desktop\\test1.txt", "wb"); // '\'�� ǥ���ϱ� ���ؼ��� '\\'�� ���־���Ѵ�, ���ϳ����� �״�� ����(w) ���̳ʸ� ���(b) ���� ����.
	if (file == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	fputs("fputs()�Լ��� ���� �� ���Կ�!\n", file);  //fputs(���ڿ�, ����������)
	fclose(file);  //������ �ս� ������ ���� fopen()���� ������ �����ٸ� fclose�� ������ �ݾƾ� �Ѵ�. fclose(����������);

	FILE* file1 = fopen("C:\\Users\\USER\\Desktop\\test1.txt", "rb");
	if (file1 == NULL) {
		
		printf("���Ͽ��� ����\n");
		return 1;
	}
	while (fgets(line, 10000, file)!= NULL) {  //fgets(������, ���ڿ��ִ�ũ��, ����������)
		printf("%s", line);
	}
	fclose(file);

	return 0;
}




//fputs()�� fgets()�Լ��� ���ڿ� ������ ���Ͽ� �����͸� ���ų� �д´�. �ݸ鿡 fprintf()�� fscanf()�Լ��� ������ �������� ���Ͽ� �����͸� ���ų� �д´�.
// fprintf(����������,"����������", ��);     fscanf(����������, "����������", %������);


int main2(void) {
	char str1[10000];  //��÷��ȣ ���ڿ� ���� �迭 ����
	char str2[10000]; //���ʽ� ��ȣ ���ڿ� ���� �迭 ����
	int num[6] = { 0,0,0,0,0,0 };
	int bonus = 0;
    
	FILE * file = fopen("C:\\Users\\USER\\Desktop\\test2.txt", "wb");
	if (file == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "���ʽ���ȣ", 7);
	fclose(file);
	
	FILE* file1 = fopen("C:\\Users\\USER\\Desktop\\test2.txt", "rb");
	if(file1 == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	fscanf(file1, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	
	fscanf(file1, "%s %d", str2, &bonus);
	printf("%s %d", str2, bonus);

	fclose(file1);

	return 0;
}