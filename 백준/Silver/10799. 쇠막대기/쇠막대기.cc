#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S;
	cin >> S;

	stack<char> mys;

	char prev = ' ';

	int sum = 0;

	for (char c : S)
	{
		if (c == '(')				// '(' 나오면 push
		{
			mys.push(c);
		}

		else {					    // ')'나오고 바로 앞에 '(' 나오면 레이저
			if (prev == '(')		// 레이저니까 앞의 (는 팝하고 스택 사이즈만큼 막대 개수 증가
			{
				mys.pop();
				sum += mys.size();
			}
			else {					// ) 나오고 )나오면 막대기의 끝이라는 소리
				mys.pop();					// 그러면 막대기 시작 부분인 (하나 팝하고 사이즈 1증가
				sum += 1;
			}
		}
		prev = c;
	}

	cout << sum;



	return 0;
}