#include<iostream>
using namespace std;

int n = 0, m;
int arr[3] = { 0 };

int main() 
{
	cin >> m;

	arr[0] = 1;
	for (int i = 0; i < m; i++) {
		int tmp, arr1, arr2;
		cin >> arr1 >> arr2;

		tmp = arr[arr1 - 1];
		arr[arr1 - 1] = arr[arr2 - 1];
		arr[arr2 - 1] = tmp;
	}
	//	if (arr[arr1 - 1] == 1) {
	//		n = arr1;
	//	}
	//	else if (arr[arr2 - 1] == 1) {
	//		n = arr2;
	//	}
	//}

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == 1) cout << i;
	}

}