#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	while (1)
	{
		int x, y, z;
		cin >> x >> y >> z;

		if (x == y && y == z && x == 0)
			return 0;

		int v[3] = { x,y,z };
		sort(v, v + 3);
	
		if (v[2] >= v[0] + v[1])
		{
			cout << "Invalid"<<'\n';
	
		}

		else if (x == y &&y== z) {
			cout << "Equilateral"<<'\n';
		}

		else if (x == y || x == z || y == z)
		{
			cout << "Isosceles"<<'\n';
			
		}
		else {
			cout << "Scalene"<<'\n';
		}
	}
	
	return 0;
}