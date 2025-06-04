#include <iostream>

using namespace std;

int main(void)
{
	int test;
	cin >> test;
	
	if (89< test && test < 101)
		cout << "A" << endl;
	else if (79 < test && test<90)
		cout << "B" << endl;
	else if (69<test && test <80)
		cout << "C" << endl;
	else if (59 < test && test < 70)
		cout << "D" << endl;
	else 
		cout << "F" << endl;
	return 0;
}