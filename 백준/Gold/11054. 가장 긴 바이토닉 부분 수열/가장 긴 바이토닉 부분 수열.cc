#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int arr[1001] = { 0 };
	int plus[1001] = { 0 };			// i번째 원소를 끝으로 하는 증가 부분 수열의 길이
	int minus[1001] = { 0 };		// i번째 원소를 시작으로 하는 감소 부분 수열의 길이

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		plus[i] = 1;
		minus[i] = 1;
	}

	int max_len = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				plus[i] = max(plus[i], plus[j] + 1);
			}
		}
	}

	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = N - 1; j > i; j--)
		{
			if (arr[i] > arr[j])
			{
				minus[i] = max(minus[i], minus[j] + 1);
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		max_len = max(max_len, plus[i] + minus[i] - 1);
	}

	cout << max_len;
	return 0;
}
