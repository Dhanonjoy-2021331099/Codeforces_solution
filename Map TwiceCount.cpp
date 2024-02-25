
// https://www.geeksforgeeks.org/problems/twice-counter4236/1

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t; cin >> t ;
   while(t--){
       int n; cin >> n;
       map<string,int> cnt;
       for(int i=0; i<n;i++){
           string s; cin >> s;
           cnt[s]++;
       }
       int ans = 0;
       
       for(auto u : cnt) {
           if(u.second ==2) ans ++;
       }
       cout << ans <<endl;
       /*
       for(auto u : cnt) {
           if(u.second == 2) cout << u.first << endl;
       }
       */
   }
    
    return 0;
}



/*
Input:
N = 3
list = {Geeks, For, Geeks}
Output: 1
Explanation: 'Geeks' is the only word that 
appears twice. 

Input:
N = 8
list = {Tom, Jerry, Thomas, Tom, Jerry, 
Courage, Tom, Courage}
Output: 2
Explanation: 'Jerry' and 'Courage' are the 
only words that appears twice. 

*/
