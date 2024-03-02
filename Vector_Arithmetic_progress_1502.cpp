// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];

    sort(v.begin(),v.end());
    int ans=0;
    int x= v[1] - v[0];
    for(int i=2; i<n;i++){
        if(v[i]-v[i-1] != x){
              ans=1;    
        }
        else
        ans = 0;
    }
    if(ans ==1) cout << "false"<<endl;
    else cout << "true"<<endl;
    
    return 0;
}