#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // Convert string s to an array a
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      a[i] = (s[i] == '+') ? -1 : 1;
    }

    // Calculate the penalties
    long long current_sum = 0;
    long long total_penalty = 0;

    for (int i = 0; i < n; ++i) {
      current_sum += a[i];
    }

    cout << abs(current_sum) << endl;
  }

  return 0;
}
