#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int arr[100001] = { 0 };
	int dp[100001] = { 0 };			// i번째 숫자로 끝났을때 부분합의 최댓값

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		dp[i] = arr[i];
	}

	int sum = dp[0];

	// 10 -4 3 1 5 6 -35 12 21 -1
	for (int i = 1; i < N; i++)
	{
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);

		sum = max(sum, dp[i]);
	}

	cout << sum;
	return 0;
}