#include <iostream>
#include <algorithm>
#include <deque>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	deque<int> dq;

	string s;

	int num;

	while (N--)
	{
		cin >> s;
		if (s == "push_front")
		{
			cin >> num;
			dq.push_front(num);
		}
		if (s == "push_back")
		{
			cin >> num;
			dq.push_back(num);
		}

		if (s == "pop_front")
		{
			if (dq.empty())
			{
				cout << -1 << '\n';
			}
			else {
				num = dq.front();
				cout << num << '\n';
				dq.pop_front();
			}
		}

		if (s == "pop_back")
		{
			if (dq.empty())
			{
				cout << -1 << '\n';
			}
			else {
				num = dq.back();
				cout << num << '\n';
				dq.pop_back();
			}
		}

		if (s == "size")
		{
			cout << dq.size() << '\n';
		}

		if (s == "empty")
		{
			cout << (dq.empty() ? 1 : 0) << '\n';
		}

		if (s == "front")
		{
			if (dq.empty())
			{
				cout << -1 << '\n';
			}
			else {
				num = dq.front();
				cout << num << '\n';
			}
		}

		if (s == "back")
		{
			if (dq.empty())
			{
				cout << -1 << '\n';
			}
			else {
				num = dq.back();
				cout << num << '\n';
			}
		}
	}

	return 0;
}