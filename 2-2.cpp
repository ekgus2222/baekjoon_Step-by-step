// 9498 ���� ���� (����� 4)
#include <stdio.h>

int main() {
	int i;
	scanf("%d", &i);

	if (i >= 90) printf("A");
	else if (i >= 80 && i <= 89) printf("B");
	else if (i >= 70 && i <= 79) printf("C");
	else if (i >= 60 && i <= 69) printf("D");
	else printf("F");

	return 0;
	
}

//�޸� 1112KB �ð� 0ms