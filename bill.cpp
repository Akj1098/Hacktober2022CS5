#include<iostream>
using namespace std;
class product
{
    int price,qty;
    public:
    void input()
    {
        cout<<"enter price and quantity:";
        cin>>price>>qty;
    }
    void billing();
};
void product::billing()
{
    cout<<price*qty<<endl;
}
int main()
{
    product obj;
    product *ptr;
    ptr=&obj;
    ptr->input();
    ptr->billing();
}
