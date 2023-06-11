#include<iostream>

using namespace std;

int main() {
	int n, m;
	int mi = 1;
	int ma;

	cin >> n >> m;
	cin >> ma;
	ma -= ((ma % m) == 0);
	ma /= m;
	int a;
	for (int i = 1; i < n; i++) {
		cin >> a;
		a -= ((a % m) == 0);
		a /= m;
		if (ma <= a) {
			ma = a;
			mi = i + 1;
		}
	}

	cout << mi;
}
