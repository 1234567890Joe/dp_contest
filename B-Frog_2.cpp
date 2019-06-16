#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i,n) {
        cin >> h[i];
    }
    vector<int> dp(n + k + 2,1e9);
    dp[0] = 0;

    rep(i,n){
        for (int j = 1; j<=k;j++){
            dp[i + j] = min(dp[i + j] ,dp[i] + abs(h[i] - h[i + j]));
        }
    }

    cout << dp[n-1];

    return 0;
}
