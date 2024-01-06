#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    // Determine the winner based on the XOR of a and b
    if ((a ^ b) % 2 == 0) {
      // If XOR is even, Alice wins
      cout << "Bob" << endl;
    } else {
      // If XOR is odd, Bob wins
      cout << "Alice" << endl;
    }
  }

  return 0;
}
