// TV 크기 (브론즈4)
#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int D, H, W; cin >> D >> H >> W;

	int real_H, real_W;

	double dou = D / sqrt(H * H + W * W);



	cout << (int)(H * dou) << ' ' << (int)(W * dou);

	return 0;
}

//2032KB, 0ms