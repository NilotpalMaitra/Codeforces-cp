#include <iostream>

using namespace std;

int main() {

  long t;
  cin >> t;
  while (t--) {
    long n;
    cin >> n;
    long a(-1), b(-1);
    bool res(true);
    while (n--) {
      long x;
      cin >> x;
      if (x % 2) {
        if (a <= x) {
          a = x;
        } else {
          res = false;
        }
      } else {
        if (b <= x) {
          b = x;
        } else {
          res = false;
        }
      }
    }

    cout << (res ? "Yes" : "No") << endl;
  }

  return 0;
}