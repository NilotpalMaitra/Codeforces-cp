#include <bits/stdc++.h>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
      cin >> i;
    sort(v.begin(), v.end());
    long long ans = 0;
    for (int i = 1; i < n; i++) {
      ans += (v[i] - v[i - 1]);
    }
    cout << ans << "\n";
  }
  return 0;
}