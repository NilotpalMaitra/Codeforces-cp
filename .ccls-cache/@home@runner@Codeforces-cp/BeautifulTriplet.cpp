#include <iostream>
#include <map>
#include <vector>
using namespace std;

typedef vector<int> vi;

int II() {
  int x;
  cin >> x;
  return x;
}

void read(vi &v) {
  for (int i = 0; i < v.size(); ++i) {
    cin >> v[i];
  }
}

int main() {
  int T = II(); // number of test cases

  while (T--) {
    int n;
    cin >> n;
    vi v(n);
    read(v);

    map<pair<int, int>, int> ab;
    map<pair<int, int>, int> bc;
    map<pair<int, int>, int> ac;
    map<vector<int>, int> ab3;
    map<vector<int>, int> bc3;
    map<vector<int>, int> ac3;
    int ans = 0;

    for (int i = 0; i < n - 2; i++) {
      int a = v[i];
      int b = v[i + 1];
      int c = v[i + 2];

      ab[{a, b}]++;
      bc[{b, c}]++;
      ac[{a, c}]++;

      vector<int> triple = {a, b, c};
      ab3[triple]++;
      bc3[triple]++;
      ac3[triple]++;

      ans = ans + ab[{a, b}] - ab3[triple];
      ans = ans + bc[{b, c}] - bc3[triple];
      ans = ans + ac[{a, c}] - ac3[triple];
    }

    cout << ans << endl;
  }
  return 0;
}
