// 1157 �ܾ� ���� (�����1)
#include <iostream>
#include <string>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int cnt[30] = {};

	char in; in = cin.get();

	do {
		if (in >= 'a') cnt[in - 97]++;
		else cnt[in - 65]++;

		in = cin.get();
	} while (in != '\n');

	cin.clear();

	int max = 0, index = 99;
	bool flag = 0;

	for (int i = 0;i < 30;i++) {
		if (cnt[i] >= max) {
			if (cnt[i] != 0 && cnt[i] == max) flag = 1;
			else if (cnt[i] != 0 && cnt[i] > max) flag = 0;
			max = cnt[i];
			index = i;
		}
	}

	in = index + 65;

	if (!flag) cout << in << endl;
	else cout << '?' << endl;
	return 0;
}

// cin.get() ���� \n �ޱ�
// flag ���� �߸� Ȱ���ؼ� ��û Ʋ�ȴ�.

// 2020KB, 20ms