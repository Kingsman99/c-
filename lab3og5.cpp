#include<iostream>
using namespace std;
class rectangle
{
   int length, breadth;
   public:
            int perimeter(int l, int b)
            {
                int peri=2*(l+b);
                return peri;
            }

            int area(int l, int b)
            {
                int ar=l*b;
                return ar;
            }

            void set(int l, int b)
            {
                length =l;
                breadth =b;
            }

            void display()
            {
                cout<<length<<endl;
                cout<<breadth<<endl;
            }
};
int main()
{
    rectangle a;
    int n,m;
    cout<<"enter the value of n,m"<<endl;
    cin>>n>>m;
    a.set(n,m);
    a.display();
    int per=a.perimeter(n,m);
    cout<<"Perimeter = "<<per<<endl;
    int are=a.area(n,m);
    cout<<"area = "<<are<<endl;
    return 0;
}

