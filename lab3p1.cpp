#include<iostream>
using namespace std;
void fun(int n);
int main()
{
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    fun(n);
    return 0;
}
void fun(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<"WELL DONE\n";
    }
}
