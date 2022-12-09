#include<iostream>
using namespace std;

int main(){
    int number = 1, E = 0, O = 0;
    while(number != 0){
    cout << "Enter an integer: ";
    cin >> number;
    if(number%2 != 0){
    O = O+1;
    }else{
    E = E+1;
    }
}
    cout << "#Even numbers = " << E << "\n";
    cout << "#Odd numbers = " << O;
    return 0;
}
