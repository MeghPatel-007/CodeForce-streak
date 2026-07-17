#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        vector<int> v(26, -1);
        for (int i = 0; i < n; i++)
        {
            int word = s[i] - 'A';
            if (v[word] == -1)
                v[word] = i;
            else
            {
                if (i - v[word] == 1)
                    v[word] = i;
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
