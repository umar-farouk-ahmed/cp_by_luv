//! Given array a of N integers .. Given Q queriese and in each query given a number X, print count of that number in array.

// ? Constraints
// ? 1 <= N <= 10^5
// ? 1 <= a[i] <= 10^7
// ? 1 <= Q <= 10^5

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q > 0){
        int x;
        cin >> x;
        int ct = 0;
        for(int i =0; i<n; i++){
            if(a[i]==x){
                ct++;
            }
        }
        cout <<"Ans: "<< ct << endl;
        q--;
    }
}
//** O(N)+O(Q*N)=O(N)+O(N*N)=O(N)+O(N^2)=O(N^2)=10^10 sec 