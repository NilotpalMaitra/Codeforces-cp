#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    long long int h, w, x, y, k;
    cin >> h >> w >> x >> y >> k;
    long long int n = pow(((pow((w - x), 2)) + (pow((h - y), 2))), 0.5);
    if (n < k) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }
  return 0;
}