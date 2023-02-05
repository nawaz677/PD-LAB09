#include<iostream>
using namespace std;

main()
{
    string fruit[]={"peach","apple","guava","watermelon"};
    int price[]={60,70,40,30};

    string name;
    int qty;
    int bill;

    cout<<"Enter the name of fruit: ";
    cin>>name;
    cout<<"Enter the quantity of fruit: ";
    cin>>qty;

    int idx=0;
    while(fruit[idx] !="0")
    {  

        if(name==fruit[idx])
        {
            bill=qty*price[idx];
            break;
        }
        idx++;

    }
    cout<<"The final bill of the fruit is: "<<bill<<endl;

}