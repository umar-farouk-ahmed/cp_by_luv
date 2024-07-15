#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int hsh[N];

int main(){
    int n;
    cout << "Enter the size of the array: "<<endl;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        hsh[a[i]]++;
    }
    int t;
    cout<<"Enter test cases : "<<endl;
    cin >> t;
    while(t>0){
        int x;
        cout << "Enter a number  to see frequency: "<<endl;
        cin >> x;
        cout <<"Ans: "<< hsh[x] <<endl;
        t--;
    }
}