#include<iostream>
#include<stack>
#include<vector>

using namespace std;

//stack<int> s1;
//int n, k;
//int cnt = 0;
//
//int main() {
//
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		int tmp;
//		cin >> tmp;
//		s1.push(tmp);
//	}
//
//	for (int i = 0; i < n; i++) {
//		while (s1.top() <= k) {
//			k = k - s1.top();
//			cnt++;
//		}
//		s1.pop();
//	}
//
//	cout << cnt;
//
//}

#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int arr[31] = { 0 };

    for (int i : lost) arr[i]++;
    for (int i : reserve) arr[i]--;

    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) {
           if (i != 0) {
                if (arr[i - 1] == 1) {
                    arr[i - 1] -= 1;
                    arr[i] += 1;
                }
                else if (arr[i + 1] == 1) {
                    arr[i + 1] -= 1;
                    arr[i] += 1;
                }
           }
           
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            answer++;
        }
    }


    return answer;
}