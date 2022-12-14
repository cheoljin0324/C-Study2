#include<iostream>
#include<vector>
using namespace std;

float n,m,y;
vector<int> v1;
vector<int> v2;

int optA() {

	int result=0;

	for (int i = 0; i < v1.size(); i++) {
		result += v1[i];
	}

	return result * 10;
}

int optB() {
	int result=0;
	
	for (int i = 0; i < v1.size(); i++) {
		result += v2[i];
	}

	return result * 15;
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v1.push_back(tmp/30+1);
		v2.push_back(tmp /60 + 1);
	}

	int Y = optA();
	int M = optB();

	if (Y == M) {
		cout << "Y" << " " << "M" << " " << optA();
	}
	else {
		if (Y > M) {
			cout << "M" << " " << optB();
		}
		if (Y < M) {
			cout << "Y" << " " << optA();
		}
	}

}