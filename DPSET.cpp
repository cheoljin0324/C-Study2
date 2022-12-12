#include <iostream>
using namespace std;
int DP[1000001] = { 0 };

int main()
{
	int N;
	cin >> N;

	//어차피 0과 1은 같기에 2부터 N까지 연산
	for (int i = 2; i <= N; i++) {
		//일단 무조건 -1 연산은 존재하기에 +1 필요
		DP[i] = 1 + DP[i - 1];
		//만약 1을 뺴는게 더 작으면 DP[i] 3나누는게 더 작으면 후자
		if (i % 3 == 0) DP[i] = min(DP[i], DP[i] / 3 + 1);
		//만약 1을 뺴는게 더 작으면 DP[i] 2나누는게 더 작으면 후자
		if (i % 2 == 0) DP[i] = min(DP[i], DP[i] / 2 + 1);
	}
	cout << DP[N];
}