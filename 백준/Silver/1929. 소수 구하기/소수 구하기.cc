#include <iostream>

using namespace std;

bool is_prime(long long int n) {
	if (n < 2) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;			// 2와 3의 배수 다 거르고

	// 6k ± 1 형태로 검사 (더 빠른 방법)			//  6k+-1
	for (long long i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = N; i <= M; i++)
	{
		if (is_prime(i))
		{
			cout << i << '\n';
		}
	}

	return 0;
}