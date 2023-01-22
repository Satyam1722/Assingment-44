#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        v.push_back(i+1);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i+1])
        cout<<v[i]<<" is repeted two times "<<endl;
    }
    
    set<int> s(v.begin(),v.end());
    int count=1;
    for(auto it=s.begin();it!=s.end();it++)
    {
        if(*it==count)
        count++;
        else
        cout<<count<<" is missing "<<endl;
        
    }
}