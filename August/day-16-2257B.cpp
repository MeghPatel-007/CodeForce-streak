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
        int m;
        cin >> n;
        cin >> m;
        vector<int> bea(n);
        vector<int> ver(m);
        for (int i = 0; i < n; i++)
        {
            cin >> bea[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> ver[i];
        }
        int i = 0;
        int j = 0;
        int turn = 1;
        int i = 0;
        int j = 0;

        while (i < n && j < m)
        {
            bea[i]--;
            ver[j]--;

            if (i + 1 < n && bea[i] < bea[i + 1])
                i++;

            if (j + 1 < m && ver[j] < ver[j + 1])
                j++;
        }
        if (bea[n - 1] >= ver[m - 1])
        {
            cout << 1;
        }
        else
        {
            cout << 2;
        }
    }
    return 0;
}
