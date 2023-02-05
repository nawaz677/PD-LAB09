#include<iostream>
using namespace std;

main()
{
    string movies[5]={"The Godfather","The Revenant","Casino Royale","The Hobbit","Red Notice"};
    int ticket_price=500;
    string movie_name;
    float discount=0;

    cout<<"Enter the name of movie: ";
    getline(cin,movie_name);

        if(movie_name==movies[1] || movie_name==movies[3])
        {
            discount=ticket_price-(0.05*ticket_price); 
            cout<<"The final ticket price of the movie is: "<<discount<<endl;    
        }
        

        else if(movie_name==movies[0] || movie_name==movies[2] || movie_name==movies[4])
        {
            discount=ticket_price-(0.1*ticket_price);  
            cout<<"The final ticket price of the movie is: "<<discount<<endl;
        }
}