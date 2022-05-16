#include<iostream>
using namespace std;
int main()
{
long long int test,hi,q,p;
cin>>test;
while(test--)
{
    cin>>hi>>q;
    p=((24-hi)*60)-q;
    cout<<p<<endl;
}
}