// !Problem : Jiya likes a sequence if all its elements when multiplied yields a number , whose // least significant digit is either 2, 3 or 5.
// ?Given the number of  test case t.The first line of each test case is a number n.Next line // contains n integers - A1,A2,......An.For each given test case tell whether the given sequence // will be liked by Jiya.
// todo INPUT FORMAT-First line constains t number of test cases.
// ! Every test case has first line as the number of intergers the sequence contains, followed by // sequence in the next line.
// todo OUTPUT FORMAT - Print "YES" or "NO",whether Jiya likes the sequence or not. 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t > 0){
        int n;
        cin >> n;
        long long int num =1 ;
        for(int  i = 0 ; i < n ; i++){
            int x;
            cin >> x;
            num = num * x;
        }
        long long int digit = num % 10;
        if(digit == 2 || digit == 3 || digit == 5){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
        t--;
    }
}