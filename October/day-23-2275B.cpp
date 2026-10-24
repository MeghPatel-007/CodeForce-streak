#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> k >> s;
        vector<bool> printed(k + 1, false);
        stack<int> st;
        int c = 0;
        for (int i = 1; i <= k; i++)
        {
            if (s[i - 1] == '1')
                st.push(i);
            else if (s[i - 1] == '2')
            {
                if (st.empty())
                {
                    printed[i] = true;
                    c++;
                }
                else
                {
                    printed[st.top()] = true;
                    c++;
                    st.pop();
                }
            }
            else if (s[i - 1] == '3')
            {
                printed[i] = true;
                c++;
            }
        }
        cout << k - c << endl;
        for (int i = 1; i <= k; i++)
        {
            if (!printed[i])
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
