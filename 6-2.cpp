// 4673 셀프 넘버 (실버 5)
#include<iostream>

using namespace std;

bool a[10001] = {};

void cal(int c, bool go) {

	int sum = c;

	while (1) {
		if (c == 0) break;
		sum += c % 10;
		c /= 10;
	}

	if (sum < 10001)a[sum] = true;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	for (int i = 1;i < 10001;i++) {
		cal(i, 1);

		if (!a[i]) cout << i << '\n';
	}

	return 0;
}

// 재귀 없앴더니 시간 줄어듦
// 메모리 2032KB, 시간 0ms


//void cal(int c, bool go){
//	if (c > 10000) return; 
//
//	if (go && !a[c]) {
//		cout << c << '\n';
//	}
//
//	a[c] = true;
//
//	cal(c + c % 10 + c / 10 % 10 + c / 100 % 10 + c / 1000 % 10 + c / 10000 % 10, 0);
//	
//}
//
//int main() {
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	for (int i = 1;i < 10001;i++) {
//		cal(i, 1);
//	}
//
//	return 0;
//}
//// 메모리 2032KB, 시간 24ms

