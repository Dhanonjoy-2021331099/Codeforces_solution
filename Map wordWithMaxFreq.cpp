
// https://www.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while(t--){
        string s;
        char c; cin >> c;
        getline(cin,s);
        s = c + s;
        
        string tmp;
        vector<string>v;
        for(auto u : s){
            if(isspace(u)){
                v.push_back(tmp);
                tmp.clear();
            }
            else tmp+=u;
        }
        v.push_back(tmp);
        
        
        map<string,int>cnt;
        int max_freq = 0;
        for(auto u : v){
            cnt[u]++;
            max_freq = max(max_freq, cnt[u]);
        }
        
        string ans;
        for(auto u : v){
            if(cnt[u] == max_freq){
                ans = u;
                break;
            }
        }
        cout << ans << " " <<max_freq<<endl;
        
    }
    return 0;
}




/*
    Input : S = "the devil in the sky"
Output : the 2
Explanation:
The frequency of the is 2, so we return "the" and
its frequency "2" i.e., "the 2" 


Input : S = "this is not right"
Output : this 1
Explanation:
Every word has the frequency of "1", so we return 
"this 1" as this occurs first in the sentence. 

*/
