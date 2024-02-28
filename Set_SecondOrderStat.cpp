// https://codeforces.com/problemset/problem/22/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    set<int>s;
    while(n--){
        int x; cin >> x;
        s.insert(x);
    }
    if(s.size()>1){
       auto it = next(s.begin(),1);
       cout << *it <<endl;
    }
    else cout << "NO"<<endl;

    return 0;
}