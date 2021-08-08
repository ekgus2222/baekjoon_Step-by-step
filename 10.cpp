// 10430 나머지 (브론즈 5)
#include <stdio.h>

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	printf("%d\n", (A + B ) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A*B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}

// 메모리 1112KB 시간 0ms