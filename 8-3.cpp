// 1193 분수찾기 (브론즈1)
#include<iostream>

using namespace std;

int main() {
	int x; cin >> x; 

	int start = 1;
	int n = 1;

	while (1 + n*(n + 1)/2 <= x) n++; // 1 2 4

	start = 1 + (n - 1) * n / 2;

	int front, back;
	if (n % 2 == 0) {
		front = 0; back = n + 1;

		for (int i = 0;i <= x - start;i++) {
			front++; back--;
		}
	}
	else {
		front = n + 1; back = 0;

		for (int i = 0;i <= x - start;i++) {
			front--; back++;
		}
	}
	

	cout << front << '/' << back;

	return 0;
}

//2020KB, 0ms


// a_n = 1 + sigma(b_n) = 1 + (n-1)*(n-1)
// b_n = n

//1 2 4 7 11