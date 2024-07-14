// !Given T test cases and in each test case a number N. Print its factorial for each test case % M where M = 10^9+7
// ? Constraints : 1<= T <= 10^5  || 1<= N <= 10^5  

// todo ⬇️

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5;
long long factorial[N];
int main(){
    factorial[0] = factorial[1] = 1;
    for(int i =2; i <=N ; i++){
        factorial[i] = (i*factorial[i-1])%M;
    }
    int t;
    cin >> t;
    while(t > 0){ 
        int n;
        cin >> n;
        cout << factorial[n] << endl; 
        t--;
    }
}

// ! In 1 sec 10^7 operations/Iterations can happen . 
// ? For the OLD code : O(T*N) = 10^10 ; means loop under loop
// ? For the NEW code :O(N)+O(T) = 10^5 + 10^5 = 2*10^5 ; 

//todo => practise : https://www.geeksforgeeks.org/precomputation-techniques-for-competitive-programming/ &Episode 12 description problems 

// *** If we declare size of array locally(under main anywhere) there is a limit of 10^5 in cp .  If we do not follow it we will get segmentation fault . But if we declare it globally (outside main) and use const size .Const because By marking a global variable as const, you ensure that its value cannot be modified after initialization. Global variables are accessible from anywhere in the program, which increases the risk of unintended modifications . Declaring a global variable as const clearly communicates to other developers (and your future self) that this variable is intended to be immutable. This improves code readability and helps maintain consistency in how data is used and managed.But globally limit 10^7