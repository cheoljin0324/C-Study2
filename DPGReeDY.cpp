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
//	//여기서부터 핵심은 뒤에서 부터 확인을 하는 것
//
//	for (int i = n; i >= 0; i--)
//	{
//		//점화식...
//		//넘어갈때
//
//		//안넘어갈때
//		int time = vect[i] + i;
//		if (time <= n)
//		{
//			//메모장으로 넣다
//			//max로 큰 값 비교
//			//이전에 있던 메모
//			memo[i] = max(vecp[i]+memo[time],maxmoney);
//			maxmoney = memo[i];
//		}
//
//		//메모장에 벌 수 있는 돈을 계산
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
				//메모장에다가 적다.
				memo[i] = min(memo[j]+1,memo[i]);
			}
		}
	}

	//가장 큰 값 찾기
	int knight = 0;
	for (int i = 0; i < n; i++) 
	{
		knight = max(knight, memo[i]);
	}

	cout << n - knight;

}


