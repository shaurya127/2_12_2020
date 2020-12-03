#include <bits/stdc++.h>
using namespace std;
int main() {
   
   string s; cin>>s;
   string temp="";
   int n=s.length();
   int c1=0,c2=0,c3=0;
   for(int i=0;i<n;i++){
           if(s[i]=='1'){
                   c1++;
           }
           else if(s[i]=='2'){
                   c2++;
           }
           else if(s[i]=='3'){
                   c3++;
           }
   }
   for(int i=0;i<c1;i++){
           temp=temp+'1'+'+';
   }
   for(int i=0;i<c2;i++){
           temp=temp+'2'+'+';
   }
   for(int i=0;i<c3;i++){
           temp=temp+'3'+'+';
   }
   temp.erase(temp.begin() + n);
   cout<<temp;
    return 0;
}
