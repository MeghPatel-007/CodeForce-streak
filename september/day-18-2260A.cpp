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
        int firstIdx = 0;
        int lastIdx = 0;
        int zeroCnt = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
            {
                zeroCnt++;
            }
        }
        if (zeroCnt <= 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int swap = 0;
            if (v[0] != 0)
                swap++;
            if (v[n - 1] != 0)
                swap++;
            cout << swap << endl;
        }
    }
    return 0;
}
