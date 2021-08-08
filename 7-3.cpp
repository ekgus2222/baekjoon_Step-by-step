// 10809 알파벳 찾기 (브론즈2)
#include<iostream>
#include<string.h>

using namespace std;

int main() {
	string str; cin >> str;

	int a[26]; memset(a, -1, sizeof(int) * 26);

	for (int i = 0;i < str.size();i++) {
		if (a[str[i] - 97] == -1) a[str[i] - 97] = i;
	}

	for (int i = 0;i < 26;i++) {
		cout << a[i] << " ";
	}

	return 0;
}

// memset(void* ptr, int value, size_t num)
// 2024KB, 0ms