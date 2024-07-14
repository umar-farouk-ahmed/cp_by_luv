#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    transform(line.begin(),line.end(),line.begin(),::toupper);
    for(char c : line){
        if(c == ' '){
            cout << endl;
        }
        else {
            cout << c ;
        }
    }
}

