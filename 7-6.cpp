// 1152 �ܾ��� ���� (����� 2)
#include<iostream>

using namespace std;


#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	char str[1000001];
	cin.getline(str, 1000001, '\n');

	int result = 0;
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ')
			result++;
		i++;
	}
	if (str[0] == ' ')
		result -= 1;
	if (str[i - 1] == ' ')
		result -= 1;

	cout << result + 1;
}

//2872KB, 8ms -> getline���� �ѹ��� �޾ƿͼ� �ð� ���̴´�� str �޸� ���µ�


//int main() {
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int cnt = 0;
//	int pre = 0;// 0�̸� �����̽� 1�̸� ����
//	char a;
//
//	while ((a = cin.get()) != '\n') {
//		if (a == ' ') {
//			pre = 0;
//			continue;
//		}
//
//		if (pre == 0) cnt++;
//		pre = 1;
//		
//	}
//
//	cout << cnt;
//
//	return 0;
//}
//
//// 2020KB, 12ms