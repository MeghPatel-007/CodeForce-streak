#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m;
        unordered_set<char> s;
        bool flag = true;
        cin >> n;
        cin >> m;
        while (n--)
        {
            string name;
            cin >> name;
            s.insert(name[0] - 'a' + 'A');
        }
        while (m--)
        {
            string Abbrevation;
            cin >> Abbrevation;
            for (auto &ab : Abbrevation)
            {
                if (s.find(ab) == s.end())
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;

        }
    }
    return 0;
}
