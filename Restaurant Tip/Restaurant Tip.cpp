// This program will take a restaurant bill’s total amount
// and the percentage you want to tip and then calculates and displays
// the total amount you need to pay (bill+tip)

#include <iostream>
using namespace std;

int main()
{
    //bill = total bill including tax
    //tipper = tip amount as a percentage
    //tipamt = tip amount as a dollar amount
    //total = bill + tip

    double bill, tipper, tipamt, total;

    cout << "This program will take a restaurant bill\'"<<"s total amount\n";
    cout << "and the percentage you want to tip and then calculates\n";
    cout << "and displays the total amount you need to pay (bill+tip)\n\n";

    cout << "Enter the bill amount (in dollars): ";
    cin >> bill;
    cout << "Enter the tip percentage: ";
    cin >> tipper;

    tipamt = ((tipper / 100 * bill) * 100 + 0.5) / 100;
    total = bill + tipamt;

    cout << "\nYou need to pay $" << total << ". That is $" << bill << " for the food + $"
        << tipamt << " as tip.\n";
}