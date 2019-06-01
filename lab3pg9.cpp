
#include<iostream>
using namespace std;
class order
{
    int table;
    string name;
    int patrons;
    static float minimum_charge;
    public:
            static void display(void);

};
float order::minimum_charge=4.75;
void order::display(void)
{
    cout<<"Minimum charges = "<<minimum_charge<<endl;
}
int main()
{
    order x;
    x.display();
    return 0;
}
