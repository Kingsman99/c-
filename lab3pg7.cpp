#include<iostream>
using namespace std;
struct shirt
{
    public:
            int collarsize;
            int sleevelength;

};
struct pant
{
    public:
            int waistsize;
            string inseam;
};
void display(shirt);
void display(pant);
void display(shirt s)
{
    cout<<"collarsize = "<<s.collarsize<<endl;
    cout<<"sleevelength = "<<s.sleevelength<<endl;
}
void display(pant p)
{
    cout<<"waistsize = "<<p.waistsize<<endl;
    cout<<"inseam = "<<p.inseam<<endl;
}
int main()
{
    shirt s;
    pant p;
    int collar,sleeve,waist;
    string in;
    cout<<"enter the value of collarsize and sleevelength"<<endl;
    cin>>collar>>sleeve;
    cout<<"enter the value of waistsize and inseam"<<endl;
    cin>>waist>>in;
    s.collarsize=collar;
    s.sleevelength=sleeve;
    p.waistsize=waist;
    p.inseam=in;
    display(s);
    display(p);
    return 0;
}

