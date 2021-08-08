// 1008 A/B (브론즈 5)
#include <stdio.h>

int main() {
	double A, B;
	scanf("%lf %lf", &A, &B);

	printf("%.15lf", A / B);

	return 0;
}

// 나누기에서는 형 주의!
// 메모리 1112KB 시간 0ms