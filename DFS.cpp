//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//vector<int> v[9];
//bool visited[9];
//queue<int> q;
//
////dfs함수 정의
//void dfs(int x)
//{
//	//현재 노드를 방문처리
//	visited[x] = true;
//	cout << x << " ";
//	//재귀적으로 방문
//	for (int i = 0; i < v[x].size(); i++)
//	{
//		int nextx = v[x][i];
//		if (!visited[nextx])
//			dfs(nextx);
//	}
//}
//
//void bfs(int start) {
//	q.push(start);
//	visited[start] = true;
//
//	while (!q.empty()) 
//	{
//		int cur = q.front();
//		q.pop();
//		cout << cur << " ";
//		for (int i = 0; i < v[cur].size(); i++)
//		{
//			int next = v[cur][i];
//			if (!visited[next]) {
//				q.push(next);
//				visited[next] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	v[1].push_back(2);
//	v[1].push_back(3);
//	v[1].push_back(8);
//	
//	v[2].push_back(1);
//	v[2].push_back(7);
//
//	v[3].push_back(1);
//	v[3].push_back(4);
//	v[3].push_back(5);
//
//	v[4].push_back(3);
//	v[4].push_back(5);
//
//	v[5].push_back(3);
//	v[5].push_back(4);
//
//	v[6].push_back(7);
//
//	v[7].push_back(2);
//	v[7].push_back(6);
//	v[7].push_back(8);
//
//	v[8].push_back(1);
//	v[8].push_back(7);
//
//	dfs(1);
//}