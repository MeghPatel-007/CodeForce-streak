#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n + 1);
        vector<int> idx;
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            if (p[i] != i)
            {
                idx.push_back(i);
            }
        }
        int m = idx.size();
        bool ok = true;
        for (int k = 0; k < m; k++)
        {
            int i = idx[k];
            int j = idx[m - 1 - k];
            if (p[i] != j)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
