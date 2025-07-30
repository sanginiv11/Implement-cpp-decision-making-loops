#include <iostream>
using namespace std;
int main (){
    int a=1;
    for (int i=0;i<=3;i++){
        for (int j=0;j<=i;j++){
          cout<<a++<<" ";}
          cout<<endl;
        }
        return 0;
    }
/* output
1 
2 3 
4 5 6 
7 8 9 10 */
