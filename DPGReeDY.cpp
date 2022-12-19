#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//int memo[16];
//vector<int> vect;
//vector<int> vecp;
//
//int n,maxmoney;
//
//int main() {
//
//	//===input===
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//
//		int n, p;
//		cin >> n >> p;
//
//		vect.push_back(n);
//		vecp.push_back(p);
//
//	}
//	//���⼭���� �ٽ��� �ڿ��� ���� Ȯ���� �ϴ� ��
//
//	for (int i = n; i >= 0; i--)
//	{
//		//��ȭ��...
//		//�Ѿ��
//
//		//�ȳѾ��
//		int time = vect[i] + i;
//		if (time <= n)
//		{
//			//�޸������� �ִ�
//			//max�� ū �� ��
//			//������ �ִ� �޸�
//			memo[i] = max(vecp[i]+memo[time],maxmoney);
//			maxmoney = memo[i];
//		}
//
//		//�޸��忡 �� �� �ִ� ���� ���
//		else 
//		{
//			memo[i] = maxmoney;
//		}
//	}
//
//	//===output===
//	cout << maxmoney;
//}

//int n,outcnt;
//int memo;
//vector<int> v1;
//
//int main()
//{
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		v1.push_back(a);
//	}
//	for (int i = 0; i <= 0; i++) {
//		if (memo > v1.front()) {
//			memo++;
//			v1.pop_back();
//		}
//		else {
//			v1.pop_back();
//		}
//	}
//	
//	cout << outcnt;
//}

int n,outcnt;
int memo[2001] = { 0 };
vector<int> v1;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
	}
	
	for (int i = 0; i < n; i++)
		memo[i] = 1;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (v1[j] > v1[i]) {
				//�޸��忡�ٰ� ����.
				memo[i] = min(memo[j]+1,memo[i]);
			}
		}
	}

	//���� ū �� ã��
	int knight = 0;
	for (int i = 0; i < n; i++) 
	{
		knight = max(knight, memo[i]);
	}

	cout << n - knight;

}


