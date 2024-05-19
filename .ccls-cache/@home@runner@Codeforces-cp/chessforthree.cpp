#include <bits/stdc++.h>

using namespace std;

void solve() {
  int long long a, b, c;
  cin >> a >> b >> c;
  long long arr[4] = {a + b, b + c, a + c, (a + b + c) / 2};
  sort(arr, arr + 4);
  if ((a + b + c) % 2 != 0)
    cout << -1;
  else
    cout << arr[0];
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
    cout << endl;
  }
}
