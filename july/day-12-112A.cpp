#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n = s1.length();
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        char ch1 = s1[i];
        char ch2 = s2[i];
        if (s1[i] - 'a' < 0)
        {
            ch1 = s1[i] - 'A' + 'a';
        }
        if (s2[i] - 'a' < 0)
        {
            ch2 = s2[i] - 'A' + 'a';
        }
        if (ch1 < ch2)
        {
            flag = -1;
            break;
        }
        else if (ch1 > ch2)
        {
            flag = 1;
            break;
        }
    }
    cout << flag;
    // A => 65
    // a => 97
    return 0;
}
