// https://www.geeksforgeeks.org/problems/c-stl-set-6-set/1
// https://www.geeksforgeeks.org/problems/c-stl-set-6-set/1
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin >> t;
    while(t--){
        int q; cin >> q;
        set<int>s;
        while(q--){
            char c;
            cin >> c;
            if(c=='a'){
                int x; cin >> x;
                s.insert(x);
                
            }

            if(c=='b'){
                for(auto u : s) cout << u << " ";
               
                
            }

            if(c=='c'){
                int x; cin >> x;
                s.erase(x);
            }

            if(c=='d'){
                int x; cin >> x;
                if(s.count(x)==1) cout << "1 " ;
                else cout << "-1 ";
            }
            if(c=='e') cout << s.size() <<" ";
        }
        cout <<endl;
    }

    return 0;
}