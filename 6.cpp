#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int>s;
    s.insert(5);
    s.insert(3);
    s.insert(10);
    s.insert(0);

    set<int>::iterator it;
    it=s.lower_bound(5);
    cout<<"lower bound of 5 is : "<<*it<<endl;
    return 0;
}