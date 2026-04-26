#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    //For Pin Verrification
    int secret_pin = 7985;
    int pin;

    cout << "Enter your 4 digit pin: ";
    cin >> pin;

    sleep(1);

    int balance = 77000;
    
    while(true) {
    
    sleep(4);

    //For Features
    if(pin == secret_pin) {
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Change Pin\n";
        cout << "5. Exit\n";
    }
    else{
        cout << "Wrong Pin Entered" << endl;
        return 0;
    }

    //For Selecting Features
    int choice;
    cout << "Please select an option from above: ";
    cin >> choice;

    //Balance Case
    if(choice == 1) {
        cout << "Your available Balance is " << balance << endl;
    }
    
    //Withdraw Case
    else if(choice == 2) {
         int x;
         cout << "Enter the amount to withdraw: ";
         cin >> x;

         if(x <= balance) {
            cout << "Please wait while your transaction is being processed..." << endl;
            
            sleep(3);
            
            cout << "Take your cash!!" << endl;

            balance = balance - x;
         }
         else{
            cout << "Insufficient balance!!" << endl;
         }
    }

    //Deposit Case
    else if(choice == 3) {
        int y;
        cout << "Enter the amount you want to deposit: ";
        cin >> y;
         
         cout << "Keep the cash in cash box! and wait!" << endl;
         
         sleep(2);
         
         cout << "Your money have been successfully deposited in your account!!" << endl;

         balance = balance + y;
    }

    //Change Pin Case
    else if(choice == 4) {
        int z;
        cout << "Enter new pin: ";
        cin >> z;

        secret_pin = z;

        sleep(2);

        cout << "Pin Changed Successfully" << endl;
    }

    //Exit Case
    else{
        cout << "Thank you for using" << endl;
        break;
    }
}

    return 0;
}
