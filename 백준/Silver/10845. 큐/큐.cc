#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;

	string s;

	int num;

	while(N--)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> num;
			q.push(num);
		}

		if (s == "pop")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else {
				num = q.front();
				cout << num << '\n';
				q.pop();
			}
		}

		if (s == "size")
		{
			cout << q.size() << '\n';
		}

		if (s == "empty")
		{
			cout << (q.empty() ? 1 : 0) << '\n';
		}

		if (s == "front")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else {
				num = q.front();
				cout << num << '\n';
			}
		}

		if (s == "back")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else {
				num = q.back();
				cout << num << '\n';
			}
		}
	}

	return 0;
}