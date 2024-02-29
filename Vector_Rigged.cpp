// https://codeforces.com/contest/1879/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   ll t; cin >> t;
   while(t--){
       ll n; cin >> n;
       
       vector<pair<int,int>> v;
       
       ll a =0, b=0;
       for(ll i=0; i<n;i++){
           ll x,y; cin >> x >> y;
           if(i==0) a = x, b= y;
           
           else v.push_back(make_pair(x,y));
       }
       
       ll ans=0;
       
       for(auto u : v){
           if(u.first>=a && u.second>= b){
               ans = -1;
               break;
           }
       }
       if(ans == -1) cout <<-1<<endl;
       else cout << a <<endl;
       
   }
   
    return 0;
}