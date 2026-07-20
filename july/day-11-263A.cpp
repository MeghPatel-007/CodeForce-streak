#include<iostream>
using namespace std;
int main() {
    int ans = 0;
    for(int i=0;i<5;i++){
        int n;
        for(int j=0;j<5;j++){
            cin >> n;
            if(n==1){
                ans = abs(2-i)+abs(2-j);
                break;
            }
        }
        if(n==1)break;
    }
    cout << ans;
    return 0;
}
