#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    int y=0;
    cin >> a >> b;
    while(a<=b){
        a*=3;
        b*=2;
        y++;
    }
    cout << y;
    return 0;
}
