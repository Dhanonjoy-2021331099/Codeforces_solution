// https://www.geeksforgeeks.org/problems/multiset-operations/1

#include<bits/stdc++.h>
using namespace std;

int main() {

    multiset<int>s;
    int n;
    cin >> n;
    for(int i=0; i<n;i++) 
    {
        int x; cin >> x;
        s.insert(x);
    }
    int m;
    cin >> m;
    
    for(auto u : s) cout << u << " ";
    cout <<endl;
    
    if(s.count(m)>=1){
        s.erase(m);
        cout << "erased "<< m <<endl;
        
        for(auto u : s) cout << u <<" ";
        cout <<endl;
    }
    else
    cout << "not found."<<endl;

    return 0;
}