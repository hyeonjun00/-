#include <stdio.h>
#include <string.h>

int main(void) {
	char word[1000] = "";
	char mean[1000] = "";
	char input[1000] = "";
	FILE* file = fopen("C:\\Users\\USER\\Desktop\\word.txt", "rb");  //���̳ʸ� �б� ������Ϸ� ����
	if (file == NULL) {
		printf("���� ���� ����\n");  //���� �б� ������ ��ȸ
		return 1;
	}

	for (int i = 0; i < 3; i++) {
		fscanf(file, "%s %s", word, mean);
		printf("'%s'(��)��� ���� ���� ���� �ܾ��?", mean);
		scanf("%s", input);
		if (!strcmp(input, word) ){
			printf("%s, �����Դϴ�.\n\n>", word);
		}
		else {
			printf("Ʋ�Ƚ��ϴ�. ������ %s�Դϴ�.\n\n", word);

		}
	}
	fclose(file);
		return 0;
}