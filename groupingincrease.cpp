#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i <= n; ++i) {
      cin >> a[i];
    }

    // Calculate the minimum penalty
    int penalty = 0;
    int minRight = n;

    for (int i = n - 1; i > 0; --i) {
      if (a[i] > i + 1) {
        // If a[i] is greater than its position, adjust minRight
        minRight = i;
      } else {
        // Otherwise, add the penalty for the current position
        penalty = max(0, minRight - i - 1);
      }
    }

    cout << penalty << endl;
  }

  return 0;
}