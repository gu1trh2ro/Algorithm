// dp에 대해서 공부를 더 해보자. 2*N의 직사각형은 결국 2*(N-1)의 직사각형 + 1*2 두개 OR 2*N-2 직사각형 + 2*1이므로
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int dp[1001] = { 0 };

	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= N; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}

	cout << dp[N];

	return 0;
}