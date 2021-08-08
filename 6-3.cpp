// 1065 한수 (실버4)
#include <iostream>

using namespace std;

bool cal(int n) {
	int gap;
	gap = n % 10 - n / 10 % 10;   // 맨 뒷자리와 그 다음 앞자리 비교

	n /= 10; // 자릿수 줄이기

	while (1) {
		if (n < 10) break; // 앞자리가 없으면 true
		if (gap != (n % 10 - n / 10 % 10)) return false; // 차이가 다르면 false
		n /= 10; // 자릿수 줄이기
	}

	return true;
}

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N; cin >> N;

	int sum = 0;
	
	for (int i = 1;i < N + 1;i++) {
		sum += cal(i);
	}

	cout << sum;

	return 0;
}

// 메모리 2020KB,  시간 0ms