// 2908 상수 (브론즈1)
#include <iostream>

using namespace std;

int main() {
	string A, B; cin >> A >> B;

	int a, b;

	int temp = A[0]; A[0] = A[2]; A[2] = temp;
	temp = B[0]; B[0] = B[2]; B[2] = temp;

	a = atoi(A.c_str());
	b = atoi(B.c_str());

	if (a > b) cout << a;
	else cout << b;

	return 0;
}

// 2024KB, 0ms