//! Given array a of N integers. Given Q queriese and in each query given a number X, print count of that number in array.

// ? Constraints
// ? 1 <= N <= 10^5
// ? 1 <= a[i] <= 10^7
// ? 1 <= Q <= 10^5

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int hsh[N];


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n; i++){
        cin >> a[i];
        hsh[a[i]]++;
    }
    int q;
    cin >> q;
    while(q > 0){
        int x;
        cin >> x;
        cout <<"Ans: "<< hsh[x] << endl;
        q--;
    }
}
//** O(N)+O(q)=O(N)=2*10^5 [1 sec = 10^7 iteration]
//* Hashing ⬇️
//*Hashing arrray => |_0_|_0_|_0_|_1_|_0_|_2_|_0_|_2_|_1_|
//! Index =>           0   1   2   3   4   5   6   7   8
//? Array => 3 5 5 7 7 8