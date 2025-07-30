#include<iostream>
#include<string>
using namespace std;

int main() {
    string password, input;
    password = "Sangini"; // Set your password here

    cout << "Enter password: ";
    cin >> input;

    if(input == password) {
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied. Incorrect password." << endl;
    }
    return 0;
}
/* output 
Enter password: passw123
Access denied. Incorrect password.
__
Enter password: Sangini
Access granted. */
