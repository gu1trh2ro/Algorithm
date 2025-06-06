#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int min_pali(const string &str) {
	int n = str.size();

	vector<vector<bool>> is_palindrome(n, vector<bool>(n, false));
	vector<int>dp(n, 0);

	for (int i = 0; i < n; i++)			
	{
		is_palindrome[i][i] = true;
	}

	for (int i = 0; i < n - 1; i++)
	{
		if (str[i] == str[i + 1])
		{
			is_palindrome[i][i + 1] = true;
		}
		else
		{
			is_palindrome[i][i + 1] = false;
		}
	}

	for (int k = 3; k <= n; k++)
	{
		for (int i = 0; i <= n - k; i++)
		{
			int j = i + k - 1;
			is_palindrome[i][j] = (str[i] == str[j]) && is_palindrome[i + 1][j - 1]; 
		}
	}


	for (int i = 0; i < n; i++)
	{
		if (is_palindrome[0][i]) {
			dp[i] = 0;
		}
		else {
			dp[i] = i;
			for (int j = 0; j < i; j++)
			{
				if (is_palindrome[j + 1][i]) {
					dp[i] = min(dp[i], dp[j] + 1);
				}
			}
		}
	}
	return dp[n - 1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	string s;
	cin >> s;
	int cnt = min_pali(s);
	cout << cnt+1 << '\n';
	
	return 0;
}