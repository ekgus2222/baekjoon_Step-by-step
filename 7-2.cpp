// 11720 ������ �� (�����2)
#include<iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);


	int N; cin >> N;
	char* c = new char[N];

	int sum = 0;

	for (int i = 0;i < N;i++) {
		cin >> c[i];

		sum += c[i] - 48;
	}

	cout << sum;

	return 0;
}

// �޸� 2020KB, �ð� 0ms