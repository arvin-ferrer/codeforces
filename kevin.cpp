#include <bits/stdc++.h>

using namespace std;

int main(){

  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;

    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++){
      int x;
      cin >> x;
      if (x % 2 == 0){
        even++;
      }
      else{
        odd++;
      }
    }
      if (even > 0){
        cout << odd+1 << endl;
      }
      else
      {
        cout << odd-1 << endl;
      }

  }
}
