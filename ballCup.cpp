#include<iostream>
using namespace std;

int n=0,m;
int arr[3] = { 0 };

int main() {

	cin >> m;
	if (m > 50) {
		return 0;
	}
	arr[0] = 1;


	for (int i = 0; i < m; i++) {
		int tmp,arr1,arr2;
		cin >> arr1 >> arr2;

		tmp = arr[arr1-1];
		arr[arr1-1] = arr[arr2-1];
		arr[arr2-1] = tmp;
		
		if (arr1 > 3||arr1==0) {
			n = -1;
		}

		else if (arr2 > 3||arr2==0) {
			n = -1;
		}

		if (n != -1) {
			if (arr[arr1 - 1] == 1) {
				n = arr1;
			}
			else if (arr[arr2 - 1] == 1) {
				n = arr2;
			}
		}

	}

	cout << n;


}