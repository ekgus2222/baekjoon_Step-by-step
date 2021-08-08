// 1065 �Ѽ� (�ǹ�4)
#include <iostream>

using namespace std;

bool cal(int n) {
	int gap;
	gap = n % 10 - n / 10 % 10;   // �� ���ڸ��� �� ���� ���ڸ� ��

	n /= 10; // �ڸ��� ���̱�

	while (1) {
		if (n < 10) break; // ���ڸ��� ������ true
		if (gap != (n % 10 - n / 10 % 10)) return false; // ���̰� �ٸ��� false
		n /= 10; // �ڸ��� ���̱�
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

// �޸� 2020KB,  �ð� 0ms