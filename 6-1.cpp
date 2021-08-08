// 15596 정수 N개의 합 (브론즈2)
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//long long sum(std::vector<int>& a) {
//	long long ans = 0;
//
//	for (int i = 0;i < a.size();i++) {
//		ans += a[i];
//	}
//
//	return ans;
//}
//
//// 메모리 : 13740   시간 : 4ms


//long long sum(vector<int>& a) {
//	long long ans = 0;
//
//	for (auto i:a) {
//		 ans += i;
//	}
//
//	return ans;
//}
//
//// 메모리 : 13740KB   시간 : 8ms

long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0;i < n;i++) {
		ans += a[i];
	}
	return ans;
}

// 메모리 : 12832KB   시간 : 8ms

// auto가 더 느림