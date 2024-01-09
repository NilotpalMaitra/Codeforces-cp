#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long x;
    cin >> x;
    long long ans = sqrtl(x - 1);
    cout << ans << endl;
  }

  return 0;
}