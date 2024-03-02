// https://codeforces.com/contest/381/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>v(n);
    int sereja=0,dima=0,f1=1;
    for(int i=0; i<n;i++)
    {
        cin >> v[i];
    }
   while(! v.empty()){
    if(f1==1){
        if(v[0] > v.back()){
            sereja+=v[0];
            v.erase(v.begin());
        }
        else{
            sereja+=v.back();
            v.pop_back();
        }
        f1=2;
    }
    else{
        if(v[0] > v.back()){
            dima+=v[0];
            v.erase(v.begin());
        }
        else{
            dima+=v.back();
            v.pop_back();
        }
        f1=1;
    }
    
   }
   cout<< sereja << " "<<dima<<endl;  
    
}