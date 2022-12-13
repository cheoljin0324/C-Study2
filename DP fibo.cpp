#include<iostream>
using namespace std;

//1.¹Ýº¹Àû DP
int memo[100];
int n;
int t;

int fibo(int num)
{
	if (num==0) {
		return memo[0];
	}
	else if (n == 1) {
		return memo[1];
	}
	if (memo[num] != 0) {
		return memo[num];
	}
	return memo[num] = fibo(num - 2) + fibo(num - 1);
}

int main() 
{
	memo[0] = 0;
	memo[1] = 1;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n == 0) {
			cout << "1 0\n";
		}
		else if (n == 1) {
			cout << "0 1\n";
		}
		else {
			fibo(n);
			cout << memo[n - 1] << " " << memo[n] << "\n";
		}
	}
}