#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of employee is " << id << " and this the employe number " << count << endl;
    }
    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};

int employee ::count;
int main()
{
    employee harry, ram, sham;
    // harry.id=1;  canot use this because private
    // harry.count
    harry.setdata();
    harry.getdata();
    employee::getcount();

    ram.setdata();
    ram.getdata();
    employee :: getcount();
    sham.setdata();
    sham.getdata();
    employee :: getcount();
    return 0;
}