#include<bits/stdc++.h>
using namespace std;

void search(set<int> &s,int n)
{
    if(s.find(n)==s.end())
    cout<<"element is not found "<<endl;
    else
    cout<<"element is found "<<endl;
}

int main()
{
    set <int>s;
    s.insert(5);
    s.insert(3);
    s.insert(10);
    s.insert(0);

    search(s,11);
    
    return 0;
}