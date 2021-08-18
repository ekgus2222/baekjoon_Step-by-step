// 5622 다이얼 (브론즈2)

//ABC = 2(3), DEF = 3(4), GHI = 4(5)
#include<iostream>

using namespace std;

int main() {
	int arr[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	char c;
	int time = 0;

	while ((c = cin.get()) != '\n') {
		time += arr[c - 65];
	}

	cout << time;

	return 0;

}

// 2020 KB , 0ms, 314B

//
//int main() {
//	char c;
//	int time = 0;
//	while ((c = cin.get()) != '\n') {
//		switch (c) {
//		case 'A':
//			time += 3;
//			break;
//		case 'B':
//			time += 3;
//			break;
//		case 'C':
//			time += 3;
//			break;
//		case 'D':
//			time += 4;
//			break;
//		case 'E':
//			time += 4;
//			break;
//		case 'F':
//			time += 4;
//			break;
//		case 'G':
//			time += 5;
//			break;
//		case 'H':
//			time += 5;
//			break;
//		case 'I':
//			time += 5;
//			break;
//		case 'J':
//			time += 6;
//			break;
//		case 'K':
//			time += 6;
//			break;
//		case 'L':
//			time += 6;
//			break;
//		case 'M':
//			time += 7;
//			break;
//		case 'N':
//			time += 7;
//			break;
//		case 'O':
//			time += 7;
//			break;
//		case 'P':
//			time += 8;
//			break;
//		case 'Q':
//			time += 8;
//			break;
//		case 'R':
//			time += 8;
//			break;
//		case 'S':
//			time += 8;
//			break;
//		case 'T':
//			time += 9;
//			break;
//		case 'U':
//			time += 9;
//			break;
//		case 'V':
//			time += 9;
//			break;
//		case 'W':
//			time += 10;
//			break;
//		case 'X':
//			time += 10;
//			break;
//		case 'Y':
//			time += 10;
//			break;
//		case 'Z':
//			time += 10;
//			break;
//		}
//
//	}
//
//	cout << time;
//
//	return 0;
//}
//
//// 2020KB, 0ms, 1165B
