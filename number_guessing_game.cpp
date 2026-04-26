#include <iostream>
using namespace std;

int main() {
    int secret = 79;
    int n;

    for(int attempt = 1; attempt <= 10; attempt++) {

        cout << "Enter your guess: ";  //For Guess Input
        cin >> n;

        if(n >= 60 && n < secret) {   //Low Case
            cout << "Low" << endl;
        }
        else if(n >= 0 && n < 60) {  //Too Low Case
            cout << "Too Low" << endl;
        }
        else if(n == secret) {      //Correct case
            cout << "Correct" << endl;   
            cout << "Attempts = " << attempt << endl;
            break;
        }
        else if(n > secret && n <=100) {     //High Case
            cout << "High" << endl;
        }
        else if(n > 100) {        //Too High Case
            cout << "Too High" << endl;
        }
        else{
            cout << "Invalid Input" << endl;
        }
    }

    return 0;
}
