#include<iostream>
using namespace std;
class movie
{
    string name;
    static int time;
    public:
            void set(string name,int time=90);
            void show();
};
int movie::time=90;
void movie::set(string na, int ti)
{
    name=na;
    time=ti;
}
void movie::show()
{
    cout<<name<<" "<<time<<endl;
}
int main()
{
    movie a;
    string name_movie;
    int time_movie;
    cout<<"Enter the name of movie and time in minutes"<<endl;
    cin>>name_movie>>time_movie;
    a.set(name_movie,time_movie);
    a.show();
    a.set(name_movie);
    a.show();
    return 0;
}

