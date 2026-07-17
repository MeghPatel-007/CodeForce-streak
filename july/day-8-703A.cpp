#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int m = 0;
    int c = 0;
    while (t--)
    {
        int a_m, a_c;
        cin >> a_m;
        cin >> a_c;
        if (a_m > a_c)
            m++;
        else if (a_m < a_c)
            c++;
    }
    if (m > c)
        cout << "Mishka" << endl;
    else if (m < c)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
    return 0;
}
