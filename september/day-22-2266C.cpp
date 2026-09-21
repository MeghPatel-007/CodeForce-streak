#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (is_sorted(s.begin(), s.end()))
    {
        cout << 0 << "\n";
        return;
    }

    if (s[0] == '1')
    {
        int zero_count = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                zero_count++;
            }
        }
        cout << zero_count << "\n";
    }
    else
    {
        int first_one_idx = -1;
        int total_zeros = count(s.begin(), s.end(), '0');
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                first_one_idx = i;
                break;
            }
        }

        int ones_left = 0;
        int zeros_right = total_zeros;
        for (int i = 0; i < first_one_idx; i++)
        {
            if (s[i] == '1')
            {
                ones_left++;
            }
            else
            {
                zeros_right--;
            }
        }

        int answer = ones_left + zeros_right;
        for (int i = first_one_idx; i < n; i++)
        {
            if (s[i] == '1')
            {
                ones_left++;
            }
            else
            {
                zeros_right--;
            }
            answer = min(answer, ones_left + zeros_right);
        }

        cout << answer << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
