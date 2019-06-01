
#include<iostream>
using namespace std;
class movie
{
    string title;
    int year;
    string name;
    public: void settitle(string);
            void setyear(int);
            void setname(string);
            void display();
};
void movie::settitle(string n)
{
    title=n;
}
void movie::setyear(int m)
{
    year=m;
}
void movie::setname(string l)
{
    name=l;
}
void movie::display()
{
    cout<<"title = "<<title<<endl;
    cout<<"year = "<<year<<endl;
    cout<<"name = "<<name<<endl;
}
int main()
{
    movie myfavouritemovie;
    string n,l;
    int m;
    cout<<"enter the title year and name respectively"<<endl;
    cin>>n>>m>>l;
    myfavouritemovie.settitle(n);
    myfavouritemovie.setyear(m);
    myfavouritemovie.setname(l);
    myfavouritemovie.display();
    return 0;
}
