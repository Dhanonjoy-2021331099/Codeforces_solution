// https://www.hackerearth.com/problem/algorithm/the-palindrome-2/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
    string s;
    cin >> s;
    string tmp=s;
    reverse(tmp.begin(),tmp.end());
    if(tmp==s) cout << "Yes"<<endl;
    else cout << "No"<<endl;

    }
}