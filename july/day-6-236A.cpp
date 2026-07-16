#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 0;
    vector<int> v(26, 0);
    for (auto &s : str)
    {
        if (v[s - 'a'] == 0)
        {
            v[s - 'a']++;
            cnt++;
        }
    }
    if(cnt%2==0)cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
