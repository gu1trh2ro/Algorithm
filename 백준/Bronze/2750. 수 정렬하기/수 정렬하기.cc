#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(void)
{
	int N;
	cin >> N;
	vector<int>v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(),v.end());

	for (int i = 0; i < N; i++)
	{
		cout << v[i] << endl;
	}

	return 0;
}