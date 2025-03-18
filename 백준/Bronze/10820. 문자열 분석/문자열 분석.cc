#include<iostream>
#include<algorithm>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	
	while (getline(cin,s))
	{
		int big = 0;
		int small = 0;
		int num = 0;
		int null = 0;
		for (char c : s)
		{
			if (c >= 'a' && c <= 'z')
			{
				small++;
			}

			if (c >= 'A' && c <= 'Z')
			{
				big++;
			}
			if (c >= '0' && c <= '9')
			{
				num++;
			}
			if(c == ' ') {	
				null++;
			}
		}
		cout << small << ' ' << big << ' ' << num << ' ' << null << '\n';
	}



	return 0;
}