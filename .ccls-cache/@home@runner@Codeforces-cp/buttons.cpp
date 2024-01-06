/*
n = 4
    _ _ _ _

    1*(n-1) + right wrong 2*(n-2) + right right wrong 3*(n-3) ..... n(n-n)

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = n;
  for (int i = 1; i < n; i++)
    sum += (n - i) * i;
  cout << sum;
}