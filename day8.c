//����ü�� ���ؼ� �˾ƺ���!

#include <stdio.h>

int main1(void) {
	char* name = "���� ����";
	int year = 2023;
	int price = 50;
	char* company = "���� ȸ��";

	char* name2 = "�ʵ� ����";
	int year2 = 2022;
	int price2 = 40;
	char* company2 = "�ʵ� ȸ��";
	return 0;
}

/*
���� ������ ���� ������ �����ϴµ� ���Ӹ��� ������ ���ε��� ����Ǿ� �ִ�.���� �ڷ����� ������ ���� ���� �迭�� ���������, ��ó�� ������ �ڷ����� �پ��Ҷ�
������ �ϳ��� �����ϱ� ���� ����ü(structure)�� ����Ѵ�. ����ü�� ��������ó�� main() �Լ� ���� ����
*/

/*
struct GameInfo {  //����ü ���� 
	char* name;
	int year;
	int price;
	char* company;
};


int main2(void) {
	struct GameInfo gameInfo1; //����ü ���� ����
	//����ü ��� ����
	gameInfo1.name = "���� ����";
	gameInfo1.year = 2022;
	gameInfo1.price = 40;
	gameInfo1.company = "���� ȸ��";
	//����ü ��� ��� 
	printf("-- ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", gameInfo1.name);
	printf("�߸� ���� : %d\n", gameInfo1.year);
	printf("���� ���� : %d\n", gameInfo1.price);
	printf("���� ȸ�� : %s\n", gameInfo1.company);
	
	
	//�ι�° ���� ����
	struct GameInfo gameInfo2 = { "�ʵ� ����", 2022, 100, "�ʵ� ȸ��" }; //����ü�� �迭ó�� �߰�ȣ�� ����� ���� �Ѳ����� �ʱ�ȭ�� �� �ִ�/
	printf("-- �ι�° ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", gameInfo2.name);
	printf("�߸� ���� : %d\n", gameInfo2.year);
	printf("���� ���� : %d\n", gameInfo2.price);
	printf("���� ȸ�� : %s\n", gameInfo2.company);
	return 0;


}
*/

//����ü �迭 �����
//����ü�� �迭�� ���� ����ü ���� 2���� �����ؼ� ������ �� �ִ�.


/*
struct GameInfo gameArray[2] = {
	{"���� ����", 2022, 50, "���� ȸ��"},
	{"�ʵ� ����", 2022, 100, "�ʵ� ȸ��"}
};

*/


//����ü �����͸� �����غ���
//����ü �����ʹ� ����ü ������ �ּҸ� ����Ű�� ������ �ǹ��Ѵ�.

// struct ����ü�� * ������;



struct GameInfom {  //����ü ���� 
	char* name;
	int year;
	int price;
	char* company;
};

int main6(void) {
	struct GameInfom  gameInfo3 = { "���� ����", 2021, 60, "���� ȸ��" };
	struct GameInfom* gamePtr;   //����ü ������ ����
	gamePtr = &gameInfo3;
	printf("�����̸� : %s\n", (*gamePtr).name);  //�Ұ�ȣ ����ϴ°� ����
	printf("��ÿ��� : %d\n", gamePtr->year);	//������� ���� ������(ȭ��ǥ)�� ����� ����
	return 0;
}



//����ü �ȿ� ����ü ����ϱ�

struct GameInfo {  //����ü ���� 
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame; //GameInfo�� 5��° ����̸鼭 ������ ����. gameInfo1������ friendGame ����� ���� ����
};


int main3(void) {
	struct GameInfo gameInfo1; //����ü ���� ����
	//����ü ��� ����
	gameInfo1.name = "���� ����";
	gameInfo1.year = 2022;
	gameInfo1.price = 40;
	gameInfo1.company = "���� ȸ��";
	struct GameInfo gameInfo2 = { "�ʵ�����", 2022,100,"�ʵ�ȸ��" };
	gameInfo1.friendGame = &gameInfo2;
	printf("----�ٸ�ȸ�� ���� ��� ����----\n");
	printf("�����̸� : %s\n", gameInfo1.friendGame->name);  // gameInfo1.friendGame �� ����Ű�°��� gameInfo2�� �ּ��̹Ƿ� aneInfo2�� ������ ������ ����� �� �ִ�.
	printf("���Ӱ��� : %d\n", gameInfo1.friendGame->price);
	return 0;
}



//typedef�� ����ü �����ϱ�
// typedef ==> ���̽� random as rd

/*
int i = 1;
typedef int ����;
���� ���� = 3;
*/



struct sellingProduct {
	char* name;
	int* price;
	struct sellingProduct* anotherSelling;

};

int main7(void) {
	typedef struct sellingProduct �ǸŹ�ǰ;
	�ǸŹ�ǰ selling1;
	selling1.name = "���";
	selling1.price = 1000;
	printf("�ǸŹ�ǰ�̸� : %s\n", selling1.name);
	return 0;

}


/*
<����ü ���� ����>


typedef struct {
	�ڷ���1 ������1;
	�ڷ���2 ������2;
		.
		.
		.

}����ü��;
*/

//����ü �����ʹ� (*����ü������).��� or ����ü������ -> ���   �ΰ��� �������� ���� ���ٰ���.