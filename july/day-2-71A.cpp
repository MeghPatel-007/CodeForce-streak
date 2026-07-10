#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        int len = s[i].length();
        if (len <= 10)
            cout << s[i] << endl;
        else
        {
            string si = s[i];
            cout << si[0] << len - 2 << si[len - 1] << endl;
        }
    }
    return 0;
}
