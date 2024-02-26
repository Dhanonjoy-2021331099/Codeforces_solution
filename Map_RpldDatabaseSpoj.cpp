// https://www.spoj.com/problems/RPLD/

#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t; cin >>t;
    for(int i=1; i<=t;i++){
        int n, m;
        cin >> n >> m;
         
        map<pair<int,int>,bool>vis;
        bool done=1;

        while(m--){
            int a,b;
            cin >> a >>b;

            if(vis[{a,b}]) done =0;
            vis[{a,b}] =1;
        }

        if(done ==1) cout <<"Scenario #"<<i<<": " <<"possible"<<endl; 

        else 
        cout <<"Scenario #"<<i<<": " <<"impossible"<<endl; 
    }
}


/*

Input:
2
2 4
1 6102
1 6103
2 6102
2 6103

2 4
1 6102
1 6102
2 6102
2 6103

Output:
Scenario #1: possible
Scenario #2: impossible

*/
