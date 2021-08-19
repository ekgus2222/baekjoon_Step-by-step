// 2941 크로아티아 알파벳 (실버 5)
#include <iostream>

using namespace std;

int main() {
	string str; cin >> str;

	int cnt = 0;

	for (int i = 0;i < str.size();i++) {
		switch (str[i]) {
		case '=':
			if (i - 2 >= 0 && str[i - 2] == 'd') {
				if (str[i - 1] == 'z') cnt--;
			}
			break;
		
		case '-':
			break;

		case 'j':
			if ((i - 1 >= 0 && (str[i - 1] == 'l' || str[i - 1] == 'n'))) continue;
			cnt++;
			break;

		default:
			cnt++;
			break;
		}
	}

	cout << cnt;

	return 0;
}

// 2024KB, 0ms