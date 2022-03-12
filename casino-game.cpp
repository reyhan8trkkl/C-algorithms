#include <iostream>
#include <string>
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;
void drawLine(int n, char symbol);

int main()
{
    string playerName;
    int amount; 
    int bettingAmount;
    int guess;
    int dice; 
    char choice;
    srand(time(0)); 
//    drawLine(60,'_');
//    cout << "\nCASINO GAME\n";
//    drawLine(60,'_');
    cout << "\nEnter Your Name : ";
    getline(cin, playerName);
    cout << "\nEnter Deposit amount to play game : $";
    cin >> amount;
    do
    {
        system("cls");

        cout << "\nYour current balance is $ " << amount << "\n";
        do
        {
            cout <<playerName<<", enter money to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "Your betting amount is more than your current balancen"
                       <<"nRe-enter datan ";
        }while(bettingAmount > amount);

        do
        {
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "Please check the number!! should be between 1 to 10"
                    <<"Re-enter data ";
        }while(guess <= 0 || guess > 10);
        dice = rand()%10 + 1;
        if(dice == guess)
        {
            cout << "\nGood Luck!! You won Rs." << bettingAmount * 10;
            amount = amount + bettingAmount * 10;
        }
        else
        {
            cout << "\nBad Luck this time !! You lost $ "<< bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have $ " << amount << "\n";
        if(amount == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n";
    drawLine(70,'=');
    cout << "\nThanks for playing game. Your balance amount is $ " << amount << "\n";
    drawLine(70,'=');
    return 0;
}
void drawLine(int n, char symbol)
{
    for(int i=0; i<n; i++)
        cout << symbol;
    cout << "\n" ;
}

