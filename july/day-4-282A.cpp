#include <iostream>
#include <string>
using namespace std;

int main()
{
    int X = 0;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "X++")
        {
            X++;
        }
        else if (s == "++X")
        {
            ++X;
        }
        else if (s == "X--")
        {
            X--;
        }
        else if (s == "--X")
        {
            --X;
        }
    }
    cout << X;
    return 0;
}
