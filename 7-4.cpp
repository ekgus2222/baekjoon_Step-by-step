// 2675 문자열 반복 (브론즈2)
#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int T; cin >> T;

	for (int testcase = 0; testcase < T;testcase++) {
		int R; cin >> R;

		string str; cin >> str;

		for (int i = 0;i < str.size();i++) {
			for (int j = 0;j < R;j++) {
				cout << str[i];
			}	
		}
		cout << '\n';
	}
	

	return 0;
}

// 2024KB, 0ms