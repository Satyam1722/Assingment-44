#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int>s;
    s.insert(5);
    s.insert(3);
    s.insert(10);
    s.insert(0);

    cout<<"insert an element in the set : ";
    int n;
    cin>>n;

    if(s.find(n)!=s.end())
    cout<<"this element is already present in set "<<endl;
    else
    s.insert(n);

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}