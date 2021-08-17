// 2588 곱셈 (브론즈 4)
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
//// 메모리 1112KB 시간 0ms

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	printf("%d\n%d\n%d\n%d\n", A * (B % 10), A * (B / 10 % 10), A * (B / 100 % 10), A * B);

	return 0;
}


// 나누기 -> 나머지
// 메모리 1112KB 시간 0ms
