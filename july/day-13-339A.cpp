#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> str;
    for (char ch : s)
    {
        if (ch != '+')
        {
            str.push_back(ch - '0');
        }
    }
    sort(str.begin(), str.end());
    for (int i = 0; i < str.size() - 1; i++)
    {
        cout << str[i] << "+";
    }
    cout << str[str.size() - 1] << endl;
    return 0;
}
