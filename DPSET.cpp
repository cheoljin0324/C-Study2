#include <iostream>
using namespace std;
int DP[1000001] = { 0 };

int main()
{
	int N;
	cin >> N;

	//������ 0�� 1�� ���⿡ 2���� N���� ����
	for (int i = 2; i <= N; i++) {
		//�ϴ� ������ -1 ������ �����ϱ⿡ +1 �ʿ�
		DP[i] = 1 + DP[i - 1];
		//���� 1�� ���°� �� ������ DP[i] 3�����°� �� ������ ����
		if (i % 3 == 0) DP[i] = min(DP[i], DP[i] / 3 + 1);
		//���� 1�� ���°� �� ������ DP[i] 2�����°� �� ������ ����
		if (i % 2 == 0) DP[i] = min(DP[i], DP[i] / 2 + 1);
	}
	cout << DP[N];
}