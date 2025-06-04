#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	long long dp[91][3] = { 0 };		// dp[i][j] i자리 수 중 뒷자리가 j인 이친수의 개수
	
	dp[1][1] = 1;

	//dp[2][i] = 10 1개 

	//dp[3][i] = 101 100 2개 

	//dp[4][i] = 1000 1001 1010 
		
	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j < 2; j++)
		{

			if (j != 1)
			{
				dp[i][j] = dp[i - 1][0] + dp[i - 1][1];
			}
			else {
				dp[i][j] = dp[i - 1][0];
			}
		}
	}

	long long result = 0;

	for (int i = 0; i < 2; i++)
	{
		result += dp[N][i];
	}

	cout << result;

	return 0;
}
