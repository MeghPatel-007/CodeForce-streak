#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> RGB(n + 1, ' ');
    for (int i = 0; i < n; i++)
    {
        cin >> RGB[i];
    }
    char color = ' ';
    int remove = 0;
    int cnt = 1;
    for (int i = 0; i <= n; i++)
    {
        if (color != RGB[i])
        {
            color = RGB[i];
            cnt--;
            remove += cnt;
            cnt = 0;
        }
        cnt++;
    }
    cout << remove;
    return 0;
}
