#include <bits/stdc++.h>

using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n-1; i++){
      cin >> arr[i];
    }
    int sum = 0;
    for (int i: arr){
      sum += i;
    }
    cout << sum*(-1) << endl;
  }
}
