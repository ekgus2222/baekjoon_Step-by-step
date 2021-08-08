// 10869 사칙연산 (브론즈 5)
#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);

	

	return 0;
}

// %는 정수형에만 가능
// 메모리 1112KB 시간 0ms
