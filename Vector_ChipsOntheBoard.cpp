// https://codeforces.com/contest/1879/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   ll t; cin >> t;
   while(t--){
       ll n; cin >> n;
       vector<ll>v1(n),v2(n);
       ll sum1=0, sum2=0;
       for(ll i=0; i<n;i++ ){
           cin>> v1[i];
           sum1+=v1[i];
       }
       
       for(ll i=0;i<n;i++){
           cin  >> v2[i];
           sum2+=v2[i];
       }
       
       sort(v1.begin(),v1.end());
       sort(v2.begin(), v2.end());
       
       ll ans = min(sum1 + (v2[0] *n), sum2+(v1[0]*n));
       cout << ans <<endl;
       
   }
   
    return 0;
}