/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;

void solve(){
    char s1[15], s2[15] ;
 
    scanf("%s%s", s1, s2) ;
 
    int n = strlen(s1) ;
    
    int answerPosition = 0 ;
    for(int i=0;i<n;i++)
        answerPosition += (s1[i]=='+'?1:-1) ;
 
    int finalPosition = 0 ;
    int moves = 0 ; //number of '?'
    for(int i=0;i<n;i++)
    {
        if(s2[i]=='?')
            moves++ ;
        else
            finalPosition += (s2[i]=='+'?1:-1) ;
    }
 
    int distance = answerPosition-finalPosition ;
    double answer ;
    if((distance+moves)%2!=0 || moves<abs(distance)) //can't reach the destination no matter how
        answer = 0 ;
    else
    {
        int m = (moves+abs(distance))/2 ; //moves needed toward the distance m is abs(distance)+(moves-abs(distance))/2
        //answer is C(moves,m)/(1<<moves)
        int c = 1 ;
        for(int i=0;i<m;i++)
            c *= moves-i ;
        for(int i=2;i<=m;i++)
            c /= i ;
        answer = (double)c/(1<<moves) ;
    }
 
    printf("%.12f\n", answer) ;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   solve();
  

}
