#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    unordered_map<char,int>mp;
    for(auto x:s){
            mp[x]++;
    }
    int x=mp.size();
    if(x%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
            cout<<"IGNORE HIM!";
    }
//     cout<<mp.size();
    return 0;
}
