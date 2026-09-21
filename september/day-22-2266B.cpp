#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long piles, alice, bob;
        cin >> alice >> bob >> piles;
        cout << max(abs(alice - bob), abs(alice - bob + piles)) << endl;
    }
    return 0;
}
