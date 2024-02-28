// https://www.hackerrank.com/challenges/cpp-sets/problem

#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    int q; cin>> q;
    while(q--){
        int Qtype, x;
    cin >> Qtype >> x;

    if(Qtype==1) s.insert(x);
    else if(Qtype==2) s.erase(x);
    else{
        if(s.count(x)==1) cout << "Yes"<<endl;
        else cout << "No"<<endl;
    }
    }
    return 0;
}