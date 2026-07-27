#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int steps = 0;
    int i = 5;
    while (n)
    {
        while (n < i)
            i--;
        steps += n / i;
        n %= i;
    }
    cout << steps;
    return 0;
}
