// 1712 ���ͺб��� (�����4)

// ���������� 
#include <iostream>

using namespace std;

int main() {
	double A, B, C; cin >> A >> B >> C;

	long long ans = -A/(B-C) + 1;

	if (B >= C) {
		cout << -1;
		return 0;
	}
	

	cout << ans;

	return 0;
}

// 2020KB, 0ms