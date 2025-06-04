#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	stack<int> S;

	while (N--)
	{
		string s;
		cin >> s;

		if (s == "push")
		{
			int num;
			cin >> num;
			S.push(num);
		}

		else if (s == "top")
		{
			if (!S.empty())
			{
				cout << S.top() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		
		else if (s == "size")
		{
			cout << S.size() << '\n';
		}

		else if (s == "empty")
		{
			if (S.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << '\n';
			}
		}

		else if (s == "pop")
		{
			if (!S.empty())
			{
				int num = S.top();
				S.pop();
				cout << num << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}
	return 0;
}