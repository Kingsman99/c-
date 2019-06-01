#include<iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int n,m;
    cout<<"Enter the value of n,m \n";
    cin>>n>>m;
    swap(n,m);
    cout<<"n = "<<n<<endl;
    cout<<"m = "<<m;
    return 0;
}
void swap(int &n,int &m)
{
    int temp;
    temp=n;
    n=m;
    m=temp;
}
