#include <iostream>
#include <string>
using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    string str;
    cin >> str;

    if (str.length() <= 10) {
      cout << str << endl;
    } else {
      int btw = str.length() - 2;
      string btwStr = to_string(btw);

      string ans = str[0] + btwStr + str[str.length()-1];

      cout << ans << endl;
    }
  }
  
  return 0;
}
