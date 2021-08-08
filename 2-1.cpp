// 1330 두 수 비교하기 (브론즈 4)
#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	if (A > B) printf(">");
	else if (A < B) printf("<");
	else printf("==");

	return 0;
}

//메모리 1112KB 시간 0ms