#include <stdio.h>

struct book {
	int id;
	char* title;
	int available;
};



int main(void){
	int input;
	struct book books[4] = {  //books ����ü ����
		{1,"C �Թ���", 1},
		{2, "���̽� �⺻��", 1},
		{3, "�ڹ� �⺻��", 1},
		{4, "���̽� �߱���", 1}
	};
	
	while (1) {
		
		struct book * bookPtr;
		bookPtr = &books;
		char * available = "���� ����";
		char * unavailable = "���� ��";
		printf("��ü ���� ����Դϴ�.\n");
		printf("===================================\n");
		for (int i = 0; i < 4; i++){
			printf("%d. %-16s", bookPtr[i].id, bookPtr[i].title);
			if (bookPtr[i].available) {  //1 == True
				printf("[%s]\n", available);
			}
			else{
				printf("[%s]\n", unavailable);
			}
		}
		printf("=================================\n");
		printf("����/�ݳ��� å ��ȣ�� �Է��ϼ���(�����Ϸ��� -1�Է�) :");
		scanf("%d", &input);
		if (input == -1) {
			printf("���α׷��� �����մϴ�.\n\n");
			exit(0);
		}
		if (input < 1 || input > 4) {
			printf("�߸��� �Է��Դϴ�.\n\n");
			continue;
		}
		input -= 1; //�ε����� 0����
		if (books[input].available == 0) {
			printf("'%s' �ݳ��� �Ϸ�Ǿ����ϴ�.\n\n", books[input].title);
			books[input].available = 1;
		}
		else {
			printf("'%s' ������ �Ϸ�Ǿ����ϴ�.\n\n", books[input].title);
			books[input].available = 0;
		}

	
	}

	return 0;
}
