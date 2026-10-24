#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int m = n - 4;
        if (m < 2)
        {
            cout << 0 << endl;
            return 0;
        }
        vector<long long> val(m + 1);
        for (int i = 0; i <= m; i++)
        {
            val[i] = v[i] + v[i + 2] - v[i + 4];
        }
        map<long long, long long> freq;
        long long totalpairs = 0;
        for (int i = 0; i <= m; i++)
        {
            int x = i - 1;
            if (x >= 1)
            {
                freq[val[x]]++;
            }
            if (i - 2 >= 1)
                freq[val[i - 2]]--;
            if (i - 4 >= 1)
                freq[val[i - 4]]--;
            totalpairs += freq[val[i]];
            if (i - 2 >= 1)
                freq[val[i - 2]]++;
            if (i - 4 >= 1)
                freq[val[i - 4]]++;
        }
        cout << totalpairs << endl;
    }
    return 0;
}
