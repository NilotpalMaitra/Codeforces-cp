#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
      cin >> a[i] >> endl;
    }
    sort(a, a + n);
    cout << a[1] << endl;
  }
  return 0;
}