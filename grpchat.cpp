#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  // Check if the word contains the letters in "hello" in order
  int index = 0;
  for (char c : s) {
    if (c == "hello"[index]) {
      index++;
      //for (char c : s): This is a range-based for loop that iterates through each character (char c) in the string s. It simplifies the process of iterating through each character of a container (in this case, a string).
    }
    if (index == 5) {
      // All letters in "hello" are found in order
      cout << "YES" << endl;
      return 0;
    }
  }

  // Not all letters in "hello" were found in order
  cout << "NO" << endl;

  return 0;
}
