/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP,
Ruby, C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS,
JS Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int II() {
  int x;
  cin >> x;
  return x;
}

pair<int, int> MII() {
  int a, b;
  cin >> a >> b;
  return make_pair(a, b);
}

int main() {
  int T = II(); // number of test cases

  while (T--) {
    auto [a, b] = MII(); // reading two integers a and b

    int ans = 0;

    ans += b / 2;

    int z = b / 2;

    int i = z;
    while (i > 0) {
      a -= 7;
      i--;
    }

    a = max(0, a);

    if (b % 2 == 1) {
      a -= 11;
      ans++;
    }

    a = max(0, a);

    ans += a / 15;
    a -= 15 * (a / 15);

    if (a > 0) {
      ans++;
    }

    cout << ans << endl;
  }

  return 0;
}