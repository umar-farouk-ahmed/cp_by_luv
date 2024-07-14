// ! LUV CP Contest Capital Baji question . This code is done by LUV

#include<bits/stdc++.h>
using namespace std;

char upper(char line);

int main(){
    while(true){
        string line;
        cin >> line;
        if(line == " "){
            break;
        }
        else{
            for(int i = 0; i < line.size() ; i++){
                line[i] = upper(line[i]);
            }
        }
        cout << line << endl;
    }
}

char upper(char line){
    char x = 'A' + (line - 'a');
    return x;
}
