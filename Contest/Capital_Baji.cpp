// ! LUV CP Contest Capital Baji question . This code faces ** TLE **

#include <iostream>
using namespace std;

string upper(string line) ;     
int main() {
    cout<<"Enter input string: ";
    while (true) {
        string line;
        cin >> line;
        if (line == " ") {
            break;
        }
        string x = upper(line);
        cout << x << endl;
    }
    return 0;
}
string upper(string line) {
    for (int i = 0; i < line.size(); ++i) {
        line[i] = toupper(line[i]);
    }
    return line;
}
