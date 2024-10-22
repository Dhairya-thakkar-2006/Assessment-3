#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int choice, sandwichChoice, quantity;
    float totalBill = 0;

    cout << "Tops Tech Fast Food----\n";
    cout << "Please Enter Your Name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    cout << "What would you like to order?\n";
    cout << "-Menu-\n";
    cout << "1) Pizzas\n";
    cout << "2) Burgers\n";
    cout << "3) Sandwich\n";
    cout << "4) Rolls\n";
    cout << "5) Biryani\n";
    cout << "Please Enter your Choice: ";
    cin >> choice;

    if (choice == 3) { // If user selects Sandwich
        cout << "1) Club Sandwich Rs.240\n";
        cout << "2) Veg. Crispy Sandwich Rs.160\n";
        cout << "3) Extream Veg Sandwich Rs.100\n";
        cout << "Please Enter which Sandwich you would like to have?: ";
        cin >> sandwichChoice;

        cout << "Please Enter Quantity: ";
        cin >> quantity;

        // Calculate total based on selection
        switch (sandwichChoice) {
            case 1:
                totalBill += 240 * quantity;
                break;
            case 2:
                totalBill += 160 * quantity;
                break;
            case 3:
                totalBill += 100 * quantity;
                break;
            default:
                cout << "Invalid Sandwich Choice\n";
                return 0; // Exit if invalid choice
        }

        cout << "--------Your Order-......\n";
        if (sandwichChoice == 1) {
            cout << quantity << " Club Sandwich\n";
        } else if (sandwichChoice == 2) {
            cout << quantity << " Veg. Crispy Sandwich\n";
        } else if (sandwichChoice == 3) {
            cout << quantity << " Extream Veg Sandwich\n";
        }

        cout << "Your Total Bill is Rs." << totalBill << endl;
        cout << "Your Order Will be delivered in 40 Minutes\n";
        cout << "Thank you For Ordering From Tops Tech Fast Food\n";

        char orderMore;
        cout << "Would you like to order anything else? (Y / N): ";
        cin >> orderMore;

        if (orderMore == 'Y' || orderMore == 'y') {
            cout << "Sorry, currently we do not support additional orders.\n";
        } else {
            cout << "Thank you for your order!\n";
        }
    } else {
        cout << "Currently, we only support Sandwich orders.\n";
    }

    return 0;
}

