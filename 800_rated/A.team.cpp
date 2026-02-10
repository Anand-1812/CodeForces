#include <iostream>
using namespace std;

int main () {
  int T;
  cin >> T;
  
  int count = 0;
  while (T--) {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    int countOne = 0;
    for (int i = 0;i < 3;i++) {
      if (arr[i] == 1) countOne++;
    }

    if (countOne >= 2) count++;
  }

  cout << count << endl;
}
