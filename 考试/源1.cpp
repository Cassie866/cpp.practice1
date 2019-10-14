#include <iostream>
using namespace std;
typedef long long LL;

int a[1234];
LL dp[1234][1234];
int n, sum;

void init() {
	for (int i = 0; i <= sum; i++) {
		dp[0][i] = 0;
	}
	dp[0][0] = 1;
}

int main() {
	ios::sync_with_stdio(false);
	while (cin >> n >> sum) {
		init();
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j <= sum; j++) {
				dp[i][j] = dp[i - 1][j];
				if (j >= a[i - 1]) dp[i][j] += dp[i - 1][j - a[i - 1]];
			}
		}
		cout << dp[n][sum] << endl;
	}
	return 0;
}