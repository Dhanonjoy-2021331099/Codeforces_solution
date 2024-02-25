
// https://www.geeksforgeeks.org/problems/find-the-frequency/1

#include <bits/stdc++.h>
using namespace std;


int main() {
    map<long long,int> cnt;
    int n; cin >> n;
    vector<long long>v(n);
    for(int i=0; i<n;i++){
        cin >> v[i];
    }
    
    for(auto u : v) cnt[u]++;
    int x; cin >> x;
    cout << cnt[x] <<endl;
    
    return 0;
}

/*
Input:
N = 5
Arr = {1, 1, 1, 1, 1}
X = 1
Output: 
5
Explanation: Frequency of 1 is 5.

Input:
N = 6
Arr = {1, 2, 3, 3, 2, 1}
X = 2
Output: 
2
Explanation: Frequency of 2 is 2.


*/

