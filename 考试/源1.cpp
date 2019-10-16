#include <iostream>
using namespace std;

int main() 
{
	int a[1000];
	long long dp[1000][1000];
	int n, sum=1000;
	for (int i = 0; i <= sum; i++) 
	{
		dp[0][i] = 0;
	}
	dp[0][0] = 1;
	while (cin >> n >> sum)
	{
		for (int i = 0; i < n; i++) 
		{
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j <= sum; j++) 
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= a[i - 1]) dp[i][j] += dp[i - 1][j - a[i - 1]];
			}
		}
		cout << dp[n][sum] << endl;
	}
	return 0;
}