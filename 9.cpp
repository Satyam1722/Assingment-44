#include<bits/stdc++.h>
using namespace std;



int main()
{
    string str="satyam singh";
    set<char> s(str.begin(),str.end());
    
    for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
    
    return 0;
}