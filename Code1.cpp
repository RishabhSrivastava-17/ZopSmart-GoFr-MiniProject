#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod (int)(1e9 + 7)
void mrrishabh17() {
	//Solve...
	string a, b;
	cin >> a >> b;
	int common = 0;
	for (int i = 0; i < min(a.length(), b.length()); i++) {
		if (a[i] == b[i]) {
			common++;
		}
		else {
			break;
		}
	}
	if (common != 0)
		common--;
	cout << a.length() + b.length() - common << endl;
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int testCases = 1;
	cin >> testCases;
	while (testCases--) {
		mrrishabh17();
	}
	return 0;
}
