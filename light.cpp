#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//���� 1) ����
//int offmap[101][101];
//int onmap[101][101];
//
//int n, m;
//int on, off;
//
//int dx[] = {0,0,1,-1};
//int dy[] = {1,-1,0,0};
//
//int dfs(int x, int y, string mode) {
//
//	//����ó��
//	if (x < 0 || x >= n || y < 0 || y >= m)
//		return 0;
//
//	//������ �Ѷ�
//	if (mode == "on") {
//		if (onmap[x][y] == 1)
//			return 0;
//		onmap[x][y] = 1; //���� ������ �Ѷ�
//		//���
//		for (int i = 0; i < 4; i++) {
//			dfs(x + dx[i], y + dy[i], "on");
//		}
//			
//	}
//
//	//������ ����
//	if (mode == "off") {
//		if (offmap[x][y] == 0)
//			return 0;
//		offmap[x][y] = 0; //���� ������ ����
//		//���
//		for (int i = 0; i < 4; i++) {
//			dfs(x + dx[i], y + dy[i], "off");
//		}
//
//	}
//	
//	return 1;
//
//}
//
//int main() {
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> onmap[i][j];
//			offmap[i][j] = onmap[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			on += dfs(i, j, "on");
//			off += dfs(i, j,"off");
//		}
//	}
//
//	cout << on << " " << off;
//
//}

//����2 ���̷���

////�湮üũ
//bool visited[101] = { false };
//
//int n,m,cnt;
//vector<int> v[101];
//queue<int> q;
//
////bfs..
//void bfs(int start) 
//{
//	q.push(start);
//	visited[start] = true;
//
//	while (!q.empty()) {
//		cnt++;
//		int n = q.front();
//		q.pop();
//		for (int i = 0; i < v[n].size(); i++) {
//			//�湮�� �Ǿ����� �ʴٸ�
//			int x = v[n][i];
//			if (!visited[x]) {
//				q.push(x);
//				visited[x] = true;
//			}
//		}
//	}
//	
//}
//
//
//int main() {
//
//	//�Է�
//	cin >> n;
//	cin >> m;
//
//	for (int i = 0; i < m; i++) {
//		int va, vb;
//		cin >> va >> vb;
//		v[va].push_back(vb);
//		v[vb].push_back(va);
//	}
//	bfs(1);
//	//���
//	cout << cnt-1;
//
//
//}

// ����3 ��

//int n,k,l,snakeIndex=1;
//bool isdead = false;
//int field[101][101] = { };
//int snakefoward[] = { -1,1 ,2,-2};
//int headXPos, headYPos;
//int nowSnakefoward;
//
//vector<turn> t;
//
//struct turn {
//public:
//	int x;
//	char c;
//};
//
//int Play() {
//	int time = 0;
//	nowSnakefoward = 1;
//	while (!isdead) {
//		time++;
//		for (int i = 0; i < t.size(); i++) {
//			if (t[i].x == time) {
//				if (t[i].c == 'L') {
//					switch (nowSnakefoward)
//					{
//					case -1:
//						nowSnakefoward = snakefoward[3];
//						break;
//					case 1:
//						nowSnakefoward = snakefoward[2];
//						break;
//					case -2:
//						nowSnakefoward = snakefoward[1];
//						break;
//					case 2:
//						nowSnakefoward = snakefoward[0];
//						break;
//					default:
//						break;
//					}
//				}
//				else if (t[i].c == 'D') {
//					switch (nowSnakefoward)
//					{
//					case -1:
//						nowSnakefoward = snakefoward[2];
//						break;
//					case 1:
//						nowSnakefoward = snakefoward[3];
//						break;
//					case -2:
//						nowSnakefoward = snakefoward[0];
//						break;
//					case 2:
//						nowSnakefoward = snakefoward[1];
//						break;
//					default:
//						break;
//					}
//				}
//				else {
//					continue;
//				}
//
//				
//
//			};
//		}
//		MoveHead();
//
//
//
//	}
//	return time;
//}
//
//void MoveHead() {
//	if (nowSnakefoward % 2 == 0) {
//		field[headYPos + nowSnakefoward][headXPos] = 2;
//		headYPos = headYPos + nowSnakefoward;
//	}
//	else {
//		field[headYPos][headXPos+nowSnakefoward] = 2;
//		headXPos = headXPos + nowSnakefoward;
//	}
//}
//
//int main() {
//
//	cin >> n;
//	cin >> k;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			field[i][j] = 0;
//		}
//	}
//
//
//
//	for (int i = 0; i < k; i++) {
//		int x, y;
//		cin >> x >> y;
//		field[x][y] = 1;
//	}
//
//	cin >> l;
//
//	for (int i = 0; i < l; i++) {
//		int x;
//		char c;
//		cin >> x >> c;
//		turn r;
//		r.x = x;
//		r.c = c;
//
//		t.push_back(r);
//	}
//
//	cout << Play();
//
//
//}

int n, k;
int map[101][101];
using namespace std;
queue<pair<int, int>>q;
vector<pair<int, char>> vecinfo;

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

int solve() {
	int x = 1, y = 1;
	map[x][y] = 2;
	int time = 0;
	q.push({ x,y });
	//����ó��

	int nx = x + dx[�ε���];
	int ny = y + dy[�ε���];

	return time;
}

int main() {

	cin >> n;
	cin >> k;

	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
	}
	

}