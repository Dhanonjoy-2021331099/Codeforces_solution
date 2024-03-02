// https://codeforces.com/problemset/problem/118/A
#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return (c=='a' || c=='e' || c=='i'||c=='o'||c=='u'||c=='y');
}

int main(){

    string s,res;
    cin >> s;
    //string res;
    for(auto u : s){
        char c = tolower(u);
        if( !isVowel(c)){
            res+='.';
            res+=c;
        }
    }
    cout << res<<endl;

    return 0;
}