// 2588 ���� (����� 4)
#include <stdio.h>
//
//int main() {
//	int A, B, C;
//	scanf("%d %d", &A, &B);
//
//	printf("%d\n", A * (B % 10));
//	printf("%d\n", A * (B % 100 - B % 10) / 10);
//	printf("%d\n", A * (B % 1000 - B % 100) / 100);
//	printf("%d\n", A * B);
//
//	return 0;
//}
//
//// �޸� 1112KB �ð� 0ms

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	printf("%d\n%d\n%d\n%d\n", A * (B % 10), A * (B / 10 % 10), A * (B / 100 % 10), A * B);

	return 0;
}


// ������ -> ������
// �޸� 1112KB �ð� 0ms