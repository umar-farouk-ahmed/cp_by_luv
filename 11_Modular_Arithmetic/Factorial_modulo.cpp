// ! Given a number N .Print its factorials . 
// ? Constraints: 1<=N<=100; 
// ! Print answer module M , where M = 47  

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number to find the factorial : ";
    cin >> n;
    int factorial = 1;
    int m = 47;
    for(int i = 2; i<= n ; i++){
        factorial = (factorial * i) % m;;
    }
    cout << factorial ;
}
