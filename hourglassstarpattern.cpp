#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (half of the hourglass): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
/* output
Enter the number of rows (half of the hourglass): 5
*********
 *******
  *****
   ***
    *
    *
   ***
  *****
 *******
********* 
    */
