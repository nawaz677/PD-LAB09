#include<iostream>
using namespace std;

main()
{
    string word;
    cout<<"Enter any word: ";
    getline(cin,word);

    int counter=word.length();

    if(counter%2==0)
    {
        cout<<"True"<<endl;
    }

    else
    {
        cout<<"False"<<endl;
    }

}