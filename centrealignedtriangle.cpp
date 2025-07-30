#include <iostream>
using namespace std;
int main (){
    for (int i=6;i>=1;i--){
        for (int j=0;j<=i;j++){
          cout<<" ";}
         for(int k=6;k>=i;k--){
          cout<<" *";}
          cout<<endl;
        }
return 0;
    }