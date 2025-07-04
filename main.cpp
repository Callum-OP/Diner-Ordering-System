#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string any;

    int amount = 0;
    int choice;

    int NumOfCereal = 21, SoldCereal = 0, TotalCereal = 0;
    int NumOfPizza = 16, SoldPizza = 0, TotalPizza = 0;
    int NumOfFish = 13, SoldFish = 0, TotalFish = 0;
    int NumOfTurkey = 9, SoldTurkey = 0, TotalTurkey = 0;
    int NumOfChicken = 9, SoldChicken = 0, TotalChicken = 0;
    int NumOfMash = 9, SoldMash = 0, TotalMash = 0;

    ofstream myfile;

    while (true) {
        cout<<"\n\t\t\t Please select from the options below";
        cout<<"\n\n 1: Bowl of Cereal";
        cout<<"\n 2: Pizza";
        cout<<"\n 3: Fish";
        cout<<"\n 4: Turkey";
        cout<<"\n 5: Chicken";
        cout<<"\n 6: Mash";
        cout<<"\n 7: Review Order Details";
        cout<<"\n 8: Create Order Receipt";
        cout<<"\n 9: Exit";

        cout<<"\n Enter your choice (by selecting the number of your order): ";
        cin>>choice;
        
        switch(choice) {
            case 1:
                cout<<"\n\n Enter the number of bowls cereal you are ordering: ";
                cin>>amount;

                // If cereal is in stock
                if (NumOfCereal - SoldCereal >= amount) {
                    SoldCereal = SoldCereal + amount;
                    TotalCereal = TotalCereal + amount*5; // Costs £5 per bowl of cereal
                    cout<<"\n\n You have ordered "<<amount<<" bowls of cereal, costing £"<<TotalCereal;
                }
                else {
                    cout<<"\n\n Sorry, only "<<NumOfCereal - SoldCereal<<" bowls of cereal remaining";
                }
                cout<<"\n\n Press c key to continue ";
                cin>>any;
                break;
            case 2:
                cout<<"\n\n Enter the number of pizzas you are ordering: ";
                cin>>amount;

                // If pizza is in stock
                if (NumOfPizza - SoldPizza >= amount) {
                    SoldPizza = SoldPizza + amount;
                    TotalPizza = TotalPizza + amount*18; // Costs £18 per pizza
                    cout<<"\n\n You have ordered "<<amount<<" pizzas, costing £"<<TotalPizza;
                }
                else {
                    cout<<"\n\n Sorry, only "<<NumOfPizza - SoldPizza<<" pizzas remaining";
                }
                cout<<"\n\n Press c key to continue ";
                cin>>any;
                break;
            case 3:
                cout<<"\n\n Enter the number of fish you are ordering: ";
                cin>>amount;

                // If fish is in stock
                if (NumOfFish - SoldFish >= amount) {
                    SoldFish = SoldFish + amount;
                    TotalFish = TotalFish + amount*15; // Costs £15 per fish
                    cout<<"\n\n You have ordered "<<amount<<" fish, costing £"<<TotalFish;
                }
                else {
                    cout<<"\n\n Sorry, only "<<NumOfFish - SoldFish<<" fish remaining";
                }
                cout<<"\n\n Press c key to continue ";
                cin>>any;
                break;
            case 4:
                cout<<"\n\n Enter the number of turkey you are ordering: ";
                cin>>amount;

                // If turkey is in stock
                if (NumOfTurkey - SoldTurkey >= amount) {
                    SoldTurkey = SoldTurkey + amount;
                    TotalTurkey = TotalTurkey + amount*18; // Costs £18 per turkey
                    cout<<"\n\n You have ordered "<<amount<<" turkey, costing £"<<TotalTurkey;
                }
                else {
                    cout<<"\n\n Sorry, only "<<NumOfTurkey - SoldTurkey<<" turkey remaining";
                }
                cout<<"\n\n Press c key to continue ";
                cin>>any;
                break;
            case 5:
                cout<<"\n\n Enter the number of chicken you are ordering: ";
                cin>>amount;

                // If chicken is in stock
                if (NumOfChicken - SoldChicken >= amount) {
                    SoldChicken= SoldChicken + amount;
                    TotalChicken = TotalChicken + amount*18; // Costs £18 per chicken
                    cout<<"\n\n You have ordered "<<amount<<" chicken, costing £"<<TotalChicken;
                }
                else {
                    cout<<"\n\n Sorry, only "<<NumOfChicken - SoldChicken<<" chicken remaining";
                }
                cout<<"\n\n Press c key to continue ";
                cin>>any;
                break;
            case 6:
                cout<<"\n\n Enter the number of mash you are ordering: ";
                cin>>amount;

                // If mash is in stock
                if (NumOfMash - SoldMash >= amount) {
                    SoldMash = SoldMash + amount;
                    TotalMash = TotalMash + amount*18; // Costs £6 per mash
                    cout<<"\n\n You have ordered "<<amount<<" mash, costing £"<<TotalMash;
                }
                else {
                    cout<<"\n\n Sorry, only "<<NumOfMash - SoldMash<<" mash remaining";
                }
                cout<<"\n\n Press c key to continue ";
                cin>>any;
                break;
            case 7:
                if (TotalCereal != 0) {
                    cout<<"\n You have ordered "<<SoldCereal<<" bowls of cereal, costing £"<<TotalCereal;
                }
                if (TotalPizza != 0) {
                    cout<<"\n You have ordered "<<SoldPizza<<" pizzas, costing £"<<TotalPizza;
                }
                if (TotalFish != 0) {
                    cout<<"\n You have ordered "<<SoldFish<<" fish, costing £"<<TotalFish;
                }
                if (TotalTurkey != 0) {
                    cout<<"\n You have ordered "<<SoldTurkey<<" turkey, costing £"<<TotalTurkey;
                }
                if (TotalChicken != 0) {
                    cout<<"\n You have ordered "<<SoldChicken<<" chicken, costing £"<<TotalChicken;
                }
                if (TotalMash != 0) {
                    cout<<"\n You have ordered "<<SoldMash<<" mash, costing £"<<TotalMash;
                }
                if (TotalCereal + TotalPizza + TotalFish + TotalTurkey + TotalChicken + TotalMash != 0) {
                    cout<<"\n\n Total cost: £"<<TotalCereal + TotalPizza + TotalFish + TotalTurkey + TotalChicken + TotalMash;
                } else {
                     cout<<"\n\n You haven't ordered anything yet";
                }
                cout<<"\n\n Press c key to continue ";
                cin>>any;
                break;
            case 8:
                myfile.open ("Receipt.txt");
                if (TotalCereal != 0) {
                    myfile<<"\n "<<SoldCereal<<" bowls of cereal, £"<<TotalCereal;
                }
                if (TotalPizza != 0) {
                    myfile<<"\n "<<SoldPizza<<" pizzas: £"<<TotalPizza;
                }
                if (TotalFish != 0) {
                    myfile<<"\n "<<SoldFish<<" fish: £"<<TotalFish;
                }
                if (TotalTurkey != 0) {
                    myfile<<"\n "<<SoldTurkey<<" turkey: £"<<TotalTurkey;
                }
                if (TotalChicken != 0) {
                    myfile<<"\n "<<SoldChicken<<" chicken: £"<<TotalChicken;
                }
                if (TotalMash != 0) {
                    myfile<<"\n "<<SoldMash<<" mash: £"<<TotalMash;
                }
                if (TotalCereal + TotalPizza + TotalFish + TotalTurkey + TotalChicken + TotalMash != 0) {
                    myfile<<"\n\n Total cost: £"<<TotalCereal + TotalPizza + TotalFish + TotalTurkey + TotalChicken + TotalMash;
                } else {
                     cout<<"\n\n You haven't ordered anything yet";
                }
                myfile.close();
                cout<<"\n\n Press c key to continue ";
                cin>>any;
                break;
            case 9:
                exit(0);
                return 0;
            default:
                cout << "\nInvalid choice. Please try again.";
                break;
        }
    }
}