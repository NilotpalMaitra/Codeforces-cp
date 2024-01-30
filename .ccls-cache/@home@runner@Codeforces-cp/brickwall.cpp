#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    int s;

    // Calculate the maximum stability
    // If either n or m is even, the stability is 0
    // If both n and m are odd, the stability is (n * m - 1) / 2
    if (m % 2 == 0) {
      s = (n * (m) / 2);
    } else {
      s = (n * (m - 1) / 2);
    }

    cout << s << endl;
  }

  return 0;
}