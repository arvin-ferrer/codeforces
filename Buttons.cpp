#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) cout << "First\n";
    else if(b > a) cout << "Second\n";
    else if(a == b){
      if (c % 2 == 0) cout << "Second\n";
      else cout << "First\n";
    }
  }
}
