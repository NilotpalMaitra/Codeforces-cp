#include <bits/stdc++.h>

using namespace std;

void solve() {
  int long long n;
  string s;
  cin >> n >> s;

  string s1 = s;
  reverse(s.begin(), s.end());
  if (s1 > s) {
    if (n % 2 == 1) {
      cout << s << endl;

    } else {
      cout << (s + s1) << endl;
    }
  } else if (s > s1) {
    if (n % 2 == 0)
      cout << s1 << endl;
    else
      cout << (s1 + s) << endl;
  } else {
    cout << s << endl;
  }
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}