// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];

    int x= max_element(v.begin(),v.end())-v.begin();

    cout << x <<endl;

}