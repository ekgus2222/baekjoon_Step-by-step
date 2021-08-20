// 1316 그룹 단어 체커 (실버 5)
#include <iostream>

using namespace std;

int main() {
	int N; cin >> N;
	string str;
	int ans = 0;

	for (int i = 0;i < N;i++) {
		cin >> str;
		bool abc[26] = {};
		bool cnt = true;
		abc[str[0] - 97] = true;

		for (int j = 1;j < str.size();j++) {
			if (!abc[str[j] - 97]) {
				abc[str[j] - 97] = true;
				continue;
			}

			if (str[j - 1] != str[j]) {
				cnt = false;
				break;
			}


			
		}
		if (cnt) ans++;
	}

	cout << ans;
}

// 2024KB, 0ms