#include <iostream>
using namespace std;
class shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "enter the id of your item no  " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "enter the price of item " << endl;
    cin >> item_price[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << item_id[i] << " is " << item_price[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}