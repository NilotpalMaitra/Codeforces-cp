#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = (n - 1) / 2; i < n; i++)
    ans += a[i] == a[(n - 1) / 2];

  cout << ans << "\n";
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}