#include <iostream>

using namespace std;

int main()
{
    int amount;
    int choice;

    // Amount of items
    int NumOfCereal=0, NumOfPizza=0, NumOfFish=0, NumOfTurkey=0, NumOfMash=0;
    // Amount of items sold
    int SoldCereal=0, SoldPizza=0, SoldFish=0, SoldTurkey=0, SoldMash=0;
    // Total price of items
    int TotalCereal=0, TotalPizza=0, TotalFish=0, TotalTurkey=0, TotalMash=0;

    cout<<"\n\t Enter items available";
    cout<<"\n Cereal available: ";
    cin>>NumOfCereal;
    cout<<"\n Pizza available: ";
    cin>>NumOfPizza;
    cout<<"\n Fish available: ";
    cin>>NumOfFish;
    cout<<"\n Turkey available: ";
    cin>>NumOfTurkey;
    cout<<"\n Chicken available: ";
    cin>>NumOfTurkey;
    cout<<"\n Mash available: ";
    cin>>NumOfMash;

    cout<<"\n\t\t\t Please select from the options below";
    cout<<"\n\n 1: Bowl of Cereal";
    cout<<"\n 2: Pizza";
    cout<<"\n 3: Fish";
    cout<<"\n 4: Turkey";
    cout<<"\n 6: Chicken";
    cout<<"\n 7: Mash";
    cout<<"\n 8: Exit";

    cout<<"\n Enter your choice (by selecting the number of your order): ";
    cin>>choice;

    switch(choice) {
        case 1:
            cout<<"\n\n Enter the number of bowls cereal you are ordering: ";

            cin>>amount;
            // If cereal is in stock
            if(NumOfCereal-SoldCereal >= amount) {
                SoldCereal = SoldCereal + amount;
                TotalCereal = TotalCereal + amount*5; // Costs £5 per bowl of cereal
                cout<<"\n\n You have ordered "<<amount<<" bowls of cereal costing "<<TotalCereal;
            }
            else {
                cout<<"\n\n Sorry, only "<<NumOfCereal-SoldCereal<<" bowls of cereal remaining"<<TotalCereal;
            }
        case 2:
            cout<<"\n\n Enter the number of pizza you are ordering: ";

            cin>>amount;
            // If cereal is in stock
            if(NumOfCereal-SoldCereal >= amount) {
                SoldCereal = SoldCereal + amount;
                TotalCereal = TotalCereal + amount*5; // Costs £5 per bowl of cereal
                cout<<"\n\n You have ordered "<<amount<<" bowls of cereal costing "<<TotalCereal;
            }
            else {
                cout<<"\n\n Sorry, only "<<NumOfCereal-SoldCereal<<" bowls of cereal remaining"<<TotalCereal;
            }

    }


}