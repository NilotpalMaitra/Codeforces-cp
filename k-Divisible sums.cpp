#include <iostream>

using namespace std;

int main() {

  long t;
  cin >> t;

  while (t--) {
    long n, k;
    cin >> n >> k;

    if (n <= k) {
      cout << (k + n - 1) / n << endl;
    } else {
      cout << 1 + (n % k > 0) << endl;
    }
  }

  return 0;
}