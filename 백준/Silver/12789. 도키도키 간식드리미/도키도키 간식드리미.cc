#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    
    stack<int> S;
    int temp = 1;

    while (N--)
    {
        int num;
        cin >> num;

        if (num == temp) {
            temp++;
            while (!S.empty() && S.top() == temp) {  
                S.pop();
                temp++;
            }
        }
        else {
            S.push(num);
        }
    }

    cout << (S.empty() ? "Nice" : "Sad");

    return 0;
}
