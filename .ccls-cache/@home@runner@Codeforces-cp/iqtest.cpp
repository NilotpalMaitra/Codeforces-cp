#include <iostream>
using namespace std;

int main() {
  int n, k, even(0), leven(0), lodd(0);
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> k;
    if (k % 2 == 0) {
      even += 1;
      leven += i;
    } else {
      even -= 1;
      lodd = i;
    }
  }
  cout << (even > 0 ? lodd : leven) << endl;
}