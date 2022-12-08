#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int n, cnt;
string map[25];
vector<int> v;
queue<pair<int, int>> q;
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

int visited[25][25];

//«ŸΩ…2
void bfs(int x, int y) 
{
	q.push({ x,y });
	visited[x][y] = 1;
	cnt++;
	while (!q.empty())
	{
		int a = q.front().first;
		int b = q.front().second;
		q.pop();


		//4πÊ«‚¿∏∑Œ µ∑¥Ÿ
		for (int i = 0; i < 4; i++) {
			int na = a + dx[i];
			int nb = b + dy[i];
			if (na >= 0 && na < n && nb >= 0 && nb < n) {
				if (visited[na][nb] == 0 && map[na][nb] == '1')
				{
					visited[na][nb] = 1;
					cnt += 1;
					q.push({ na,nb });
				}
			}
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}

	//«ŸΩ…1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1&& visited[i][j]==0) {
				cnt = 0;
				bfs(i, j);
				v.push_back(cnt);
			}
		}
	}

	//√‚∑¬∫Œ∫–.
	cout << v.size()<<"\n";
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}
