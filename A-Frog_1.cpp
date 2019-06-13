#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main(int argc, char* argv[]) {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  vector<int> dp(n - 1);
  dp[n - 2] = abs(h[n - 1] - h[n - 2]);

  for (int i = n - 3; i >= 0; i--) {
    dp[i] =
        min(abs(h[i + 1] - h[i]) + dp[i + 1], abs(h[i + 2] - h[i]) + dp[i + 2]);
  }
  cout << dp[0] << endl;
}
