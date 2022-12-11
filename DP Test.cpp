#include<iostream>
using namespace std;

int d[100];

int dp(int x) {
	if (x == 1) return 1;
	if (x == 2) return 1;
	if (d[x] != 0) return d[x]; //만약 이미 구해본 값이면 단순 반환
	return d[x] = dp(x - 1)+dp(x-2);
}


int main() {
	cout << dp(30);
}


