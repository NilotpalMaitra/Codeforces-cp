#include <bits/stdc++.h>>
using namespace std;
int main() {
  int t;
  cin >> t;
  while ((t--)) {
    int n, sum = 0, count1, count2;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'B') {
        count1 = i;
        break;
      }
    }
    for (int i = 0; i < n; i++) {
      if (s[i] == 'B') {
        count2 = i;
      }
    }
    cout << count2 - count1 + 1 << "\n";
  }
}