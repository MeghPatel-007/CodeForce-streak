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
        int sec = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#')
                sec++;
            else{
            ans = max(ans,(sec+1)/2);
            sec = 0;
            }
        }
        ans = max(ans,(sec+1)/2);
        cout << ans << endl;
    }
    return 0;
}
