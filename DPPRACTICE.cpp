#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

//int memo[10000][10000] = { 0 };
//int board[10000][10000] = { 0 };
int n;

//scv ü���� ü�¿� ���� ������ memo�忡�ٰ� ������Ѵ�.

int scv[3];
int memo[61][61][61] ;

int damage[6][3] = {
	9,3,1,
	9,1,3,
	3,1,9,
	3,9,1,
	1,3,9,
	1,9,3
};

int n;
int solve(int a, int b, int c)
{
	if (a == 0 && b == 0 && c == 0)
		return 0;
	// �޸��忡 �̹� ���� ���������� ???
	if (a < 0)
		return solve(0, b, c);
	if (b < 0)
		return solve(a, 0, c);
	if (c < 0)
		return solve(a, b, 0);



	if (memo[a][b][c] != -1)
		return memo[a][b][c];

	//�ؾߵǴ°͵���?
	//�޸��忡 ����ߵǴ°�!

	memo[a][b][c] = 999;
	for (int i = 0; i < 6; i++) {
		int j = 0;
		memo[a][b][c] = min(memo[a][b][c], solve(a - damage[i][j], b - damage[i][j+1], c - damage[i][j+2]) + 1);
	}
	


}

int main() {

	memset(memo, -1, sizeof(memo));
	//input
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> scv[i];
	}

	//output
	cout << solve(scv[0], scv[1], scv[2]);
}

//int main() 
//{
//	memo[0][0] = 1;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			int tmp;
//			cin >> tmp;
//			board[i][j] = tmp;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//
//			if(nexti<n)
//			//����(row)
//			int nexti = board[i][j]+i;
//
//			//����(col)
//			int nextj = board[i][j] + j;;
//
//			if (nexti < n) {
//				memo[nexti][j] += 1;
//			}
//			if (nextj < n) {
//				memo[i][nextj] += 1;
//			}
//		}
//	}
//	
//
//}