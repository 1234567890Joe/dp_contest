#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main(){
    int N,W;
    cin >> N >> W;
    vector<long long int> w(N+2),v(N+2);
    rep(i,N) {
        cin >> w[i] >> v[i];
    }
    vector<vector<long long int>> dp(N+2, vector<long long int>(W+2,0));
    rep(i,N+1){
        rep(j,W+1){
            dp[i][j] = 0;
        }
    }

    rep(i,N+1){
        rep(j,W+2){
            if (j >= w[i]) {dp[i+1][j] = max(dp[i][j-w[i]] + v[i], dp[i][j]);}
            else {dp[i+1][j] = dp[i][j];}
        }
    }

    cout << dp[N][W];

    return 0;
}
