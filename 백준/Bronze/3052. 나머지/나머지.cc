#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(void) {

	vector<int>v;

	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		v.push_back(num % 42);
	}
	set<int> s(v.begin(), v.end());
	cout << s.size();

	return 0;	
}