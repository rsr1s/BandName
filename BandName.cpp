#include <iostream>
using namespace std;
int main(){
    // initialize the variables as strings
    string city,pet;

    cout<<"Welcome to the Band Name Generator."<<endl;
    //city
    cout<<"What's the name of the city you grew up in?"<<endl;
    cout<<"> ";
    cin>>city;
    //pet name
    cout<<"What's your pet's name?"<<endl;
    cout<<"> ";
    cin>>pet;
    cout<<"Your band name could be "<<city<<pet;
    return 0;
}