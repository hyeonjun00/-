// int arr[5]; : 5���� ���ӵ� �޸� ������ �ϳ� �ִ� 1���� �迭
// int arr3[2][5]; :5���� ���ӵ� �޸� ������ ���� 1���� �迭�� �ΰ�, �迭�� �� ��Ҵ� 5x2 = 10���̴�.(�ڿ��� ���� �д´�.) 2���� �迭
// int arr4[3][3][4] :4���� ���ӵ� �޸� ������ ���� 1���� �迭�� 3��, �̷� 2���� �迭�� �ٽ� ���� . 3���� �迭
// �ڷ��� �迭��[����ũ��][����ũ��]

/*
������ �迭 �ʱ�ȭ�ϱ�

int arr2[2][5] = {
	{1,2,3,4,5},
	{5,6,7,8,9}
};


int arr4[3][3][3] = {
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	},
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	},	
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	}
};


*/

// int arr[][2] = {{1, 2}, {3, 4}, {5, 6}};   // �ڵ忡 ���õ� ����ũ��� ����� ������ ���� ù���� ���ȣ�� �ش��ϴ� ����ũ�Ⱑ �ڵ����� ��������
// int arr[][2] = {1,2,3,4,5,6}; �� �ڵ�� ����.
// ������ �迭�� ��ҿ� �����Ϸ��� �迭��[���ε���][���ε���]


#include <stdio.h>

int main1(void) {
	int arr3[4][2] = {
		{1, 2},
		{3, 4},
		{5, 6},
		{7, 8}
	};
	arr3[3][0] = 9;  // �迭�� ��� ����
	for (int i=0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("2���� �迭 [%d] [%d]�� ��: %d\n", i, j, arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}