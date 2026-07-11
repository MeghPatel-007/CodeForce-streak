#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>>contest(n,vector<int>(3));
    int solve = 0;
    for(int i=0;i<n;i++){
        int knows = 0;
        for(int j=0;j<3;j++){
            cin >> contest[i][j];
            knows += contest[i][j];
        }
        if(knows > 1)solve++;
    }
    cout << solve;
    return 0;
}
