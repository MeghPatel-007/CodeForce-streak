#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        int mini = INT_MAX;
        for (int i = 0; i < 3; i++)
        {
            int pr;
            cin >> pr;
            mini = min(mini, pr);
        }
        cout << p - mini << endl;
    }
    return 0;
}
