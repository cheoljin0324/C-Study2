#include<iostream>
#include<algorithm>
using namespace std;

int n1, n2, n3;

int opt1(int n) {
	return 10000 + (n * 1000);
}

int opt2(int n) {
	return 1000 + (n * 100);
}

int opt3(int n) {
	return n * 100;
}

int main() {

	cin >> n1 >> n2 >> n3;

	if (n1 == n2 && n2 == n3) {
		cout<<opt1(n1);
	}
	else if (n1 == n2 || n2 == n3 || n1 == n3) {
		if (n1 == n2) {
			cout << opt2(n1);
		}
		else if (n2 == n3) {
			cout << opt2(n2);
		}
		else {
			cout << opt2(n3);
		}
	}
	else {
		cout<<opt3(max(max(n1,n2),n3));
	}

}