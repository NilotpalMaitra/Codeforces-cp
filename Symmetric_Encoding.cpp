#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

int II() {
  int x;
  cin >> x;
  return x;
}

string I() {
  string s;
  cin >> s;
  return s;
}

int main() {
  int T = II(); // number of test cases

  while (T--) {
    int n = II();   // length of the string
    string s = I(); // the string itself

    // Create a set from the characters of the string to get unique characters
    set<char> unique_chars(s.begin(), s.end());

    // Convert the set to a vector and sort it
    vector<char> r(unique_chars.begin(), unique_chars.end());
    sort(r.begin(), r.end());

    // Create a reversed copy of the sorted vector
    vector<char> r1(r);
    reverse(r1.begin(), r1.end());

    // Map each character to its corresponding reversed character
    map<char, char> cnt;
    for (size_t i = 0; i < r.size(); ++i) {
      cnt[r[i]] = r1[i];
    }

    // Construct the answer string
    string ans;
    for (char c : s) {
      ans += cnt[c];
    }

    // Print the answer for the current test case
    cout << ans << endl;
  }

  return 0;
}
