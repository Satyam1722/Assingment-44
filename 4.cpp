#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int>s;
    if(s.empty())
    s.insert(5);
    else
    cout<<"set is not empty "<<endl;

    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}