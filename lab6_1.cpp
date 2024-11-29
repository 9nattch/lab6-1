#include<iostream>
using namespace std;

int main(){
    int number;
    int even_number = 0;
    int odd_number = 0;

    cout << "Enter an integer: ";
    cin >> number;

    while(number != 0){
        if(number % 2 == 0){
            even_number++; 
        }else{
            odd_number++;
        }
        cout << "Enter an integer: ";
        cin >> number;

    }
    cout << "#Even numbers = "<< even_number <<"\n";
    cout << "#Odd numbers = " << odd_number <<"\n";
    return 0;
}
