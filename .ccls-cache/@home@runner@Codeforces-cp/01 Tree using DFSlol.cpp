#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool isValidDFSOrder(const vector<int> &a) {
  int n = a.size();

  // Sort the array in ascending order
  vector<int> sorted_a = a;
  sort(sorted_a.begin(), sorted_a.end());

  // Check if the sorted array is a consecutive range [0, 1, 2, ..., n-1]
  for (int i = 0; i < n; ++i) {
    if (sorted_a[i] != i) {
      return false;
    }
  }

  // Check if the difference between consecutive depths is 0 or 1
  for (int i = 1; i < n; ++i) {
    if (abs(a[i] - a[i - 1]) > 1) {
      return false;
    }
  }

  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    // Read the array a
    vector<int> a(n);
    for (int i = 0; i <= n; ++i) {
      cin >> a[i];
    }

    // Check if the array is a valid DFS order for a complete binary tree
    if (isValidDFSOrder(a)) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
