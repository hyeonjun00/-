#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int solve_password(int level); // main() �Լ� ���� �Լ� ����, ������ ���� ����(int)



int main(void) {
	srand(time(NULL)); //���� �ʱ�ȭ
	int cnt = 0;
	
	for (int i = 1; i <= 5; i++) { //5�� �ݺ�
		int x = solve_password(i);    //int x = rand() % 9 + 1;
		int y = solve_password(i);    //int y = rand() % 9 + 1;
		printf("############ %d��° ��й�ȣ ############\n", i);
		printf("%d X %d ? \n", x, y);
		printf("#########################################\n");
		printf("\n��й�ȣ�� �Է��ϼ���.(���Ḧ ���ϸ� -1�Է�) >>");
		//���� ����


		

		int answer = 100;
		scanf("%d", &answer);
		if (answer == -1) {
			printf("���α׷��� �����մϴ�.\n");
			exit(0);  //�ٷ� ����
		}else if (answer == x * y) {
			printf("�����Դϴ�.\n");
			cnt++;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�.\n");
		}
	}
	printf("��й�ȣ %d���� �������ϴ�.\n", cnt);
	return 0;
}

int solve_password(int level) {
	return rand() % (level * 9) + 1;
}