//https://codeforces.com/contest/903/problem/C

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mx = 5e3 + 123;
int arr[mx];
 
int main(){
    map<int,int>mp;
    int n; cin >> n;
    for(int i=0; i<n;i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int ans=0;
    for(int i=0; i<n; i++)
         ans = max(ans, mp[arr[i]]);
    cout << ans <<endl;
return 0;
}