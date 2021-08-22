// 2292 벌집 (브론즈2)
// 계차수열로 시작하는 부분을 구해서 풀면되는 문제
// while로 돌리면 시간초과가 나지않을까? 했는데 O(N)이였음

#include<iostream>

using namespace std;

double m = 0.0000001;
int main() {
	

	int N; cin >> N;

	int n = 1;

	if (N == 1) {
		cout << "1";
		return 0;
	}

	while (1) { //N=2   8<N
		if (2 + 3 * n * (n + 1) < N + 1) {
			n++;
		}
		else { 
			break;
		}
	}

	cout << n + 1;
	
	return 0;
}

//2020KB, 0ms


//#include <stdio.h>
//int main()
//{
//	int N, n = 0;
//	scanf("%d", &N);
//	while (n * (n + 1) * 3 < N - 1) n++;
//	printf("%d\n", n + 1);
//}

//이런 코드도 있다..