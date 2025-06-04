#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		int N;
		cin >> N;

		vector<vector<int>> sticker(2,vector<int>(N));

		for (int i = 0; i <=1;i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> sticker[i][j];
			}
		}

		int dp[100001][2] = { 0 };				// i번째 줄에서 0이면 위쪽을 선택했을 때 최댓값,1이면아래쪽

		dp[0][0] = sticker[0][0];
		dp[0][1] = sticker[1][0];

		if (N > 1)
		{
			dp[1][0] = sticker[0][1] + dp[0][1];
			dp[1][1] = sticker[1][1] + dp[0][0];
		}

		for (int i = 2; i < N; i++)
		{
			dp[i][0] = max(dp[i - 1][1], dp[i - 2][1]) + sticker[0][i];
			dp[i][1] = max(dp[i - 1][0], dp[i - 2][0]) + sticker[1][i];
		}
		
		cout << max(dp[N - 1][0], dp[N - 1][1]) << '\n';

	}
	


	return 0;
}