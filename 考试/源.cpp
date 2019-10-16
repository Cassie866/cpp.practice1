#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		a[i] = x;
	}
	int k = 0;
	cin >> k;
	sort(a,a+n);
	int len = unique(a, a + n) - a;
	if (k < len)cout << a[k - 1];
	return 0;
}



