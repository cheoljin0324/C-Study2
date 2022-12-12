#include<iostream>
#include<algorithm>
using namespace std;

int x, y, h, w,r;

int main() {

	cin >> x >> y >> w >> h;
	if (w >= 1 && w <= 1000 && h >= 1 && h <= 1000&&x>=1&&x<=w-1&&y>=1&&y<=h-1) {
		r = min(min(x, w - x), min(y, h - y));
		cout << r;
	}

}