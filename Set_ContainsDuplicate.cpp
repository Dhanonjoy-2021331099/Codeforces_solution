// https://leetcode.com/problems/contains-duplicate/
#include<bits/stdc++.h>
using namespace std;

const long long MX = 10e5 + 3;

int main(){
    int n; cin >> n;

    vector<int>v(n);
    
    for(int i=0; i<n;i++){
        cin >> v[i];     
    }
    set<int>s;
    for(int i =0; i<v.size();i++){
        s.insert(v[i]);
    }

    int sz= s.size();
    if(n == sz) cout << "false"<<endl;
    else cout << "true"<<endl;

    return 0;
}