//#include<iostream>
//using namespace std;
//
//int a[11][11];
//
////void dfs(int x , int y) {
////	if (a[y][x] == 2) {
////		a[y][x] = 9;
////		return;
////	}
////	a[y][x] = 9;
////	if (a[y + 1][x] == 0) {
////		dfs(y + 1, x);
////	}
////	if (a[y - 1][x] == 0) {
////		dfs(y + 1, x);
////	}
////	if (a[y][x + 1] == 0) {
////		dfs(y + 1, x);
////	}
////	if (a[y][x - 1] == 0) {
////		dfs(y + 1, x);
////	}
////}
////
////int main() {
////
////
////	for (int i = 0; i < 10; i++) {
////		for (int j = 0; j < 10; j++) {
////			cin >> a[i][j];
////		}
////	}
////
////	dfs(2, 2);
////
////	for (int i = 0; i < 10; i++) {
////		for (int j = 0; j < 10; j++) {
////			cout << a[i][j];
////		}
////		cout << "\n";
////	}
//
////}
//
////x,y
//int x = 2, y = 2;
////오,왼
//int dx[2] = { 0,1 };
////위,아래
//int dy[2] = { 1,0 };
//
//void dfs(int x, int y)
//{
//	if (a[x][y] == 2) {
//		a[x][y] = 9;
//		return;
//	}
//	a[x][y] = 9;
//	//다음으로 갈 방향이 있다면
//	//(오른쪽 and 아래)
//
//	for (int i = 0; i < 2; i++) 
//	{
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//		if (a[nextx][nexty] == 0) {
//			dfs(nextx, nexty);
//			break;
//		}
//		if (a[nextx][nexty] == 1)
//		{
//			continue;
//		}
//		if (a[nextx][nexty] == 2) {
//			a[nextx][nexty] = 9;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			cin >> a[i][j];
//		}
//	}
//
//	dfs(x, y);
//
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//		     cout << a[i][j]<<" ";
//		}
//		cout << "\n";
//	}
//
//}