#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];    
        }
        cout << gcd(v[0],v[n-1]) << endl;
    }
    return 0;
}
