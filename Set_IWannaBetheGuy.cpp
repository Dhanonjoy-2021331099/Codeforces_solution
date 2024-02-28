// https://codeforces.com/problemset/problem/469/A

#include<bits/stdc++.h>
using namespace std;

int main(){

     int l; cin >>l;
     set<int>s;
     int n; cin >> n;
     while(n--){
        int x; cin >> x;
        s.insert(x);
     }
     int m; cin >> m;
     while(m--){
        int y; cin >> y;
        s.insert(y);
     }

     int sz = s.size();

     if(sz==l) cout <<"I become the guy.";
     else cout << "Oh, my keyboard!";

    return 0;
}