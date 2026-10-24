#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x0,y0,r;
        cin >> x0;
        cin >> y0;
        cin >> r;
        cout << x0 << " " << y0+r << endl;
    }
    return 0;
}
