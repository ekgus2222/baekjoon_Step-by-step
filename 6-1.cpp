// 15596 ���� N���� �� (�����2)
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
//// �޸� : 13740   �ð� : 4ms


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
//// �޸� : 13740KB   �ð� : 8ms

long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0;i < n;i++) {
		ans += a[i];
	}
	return ans;
}

// �޸� : 12832KB   �ð� : 8ms

// auto�� �� ����