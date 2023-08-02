#include <iostream>

using namespace std;

class shop
{
    private :
    int itemid[20];
    int itemprice[20];
    int counter;

    public :
    void initcounter(void){ counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout<<"enter the item id of the object"<<counter + 1<<endl;
    cin>>itemid[counter];
    cout<<"enter the price of your item "<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for(int i=0; i<counter; i++)
    {
        cout<<"the price of your item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}