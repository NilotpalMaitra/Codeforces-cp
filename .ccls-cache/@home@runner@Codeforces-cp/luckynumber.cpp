#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t-- > 0) {
    long long int n;
    cin >> n;

    if (n % 2 == 1) {
      cout << "1" << endl;
    } else {
      int c = 0;
      while (n % 2 == 0) {
        c++;
        n /= 2;
      }
      cout << ((c % 2 == 0) ? "1" : "0") << endl;
    }
  }
}