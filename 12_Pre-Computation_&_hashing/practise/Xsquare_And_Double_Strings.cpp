//! https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/


#include <bits/stdc++.h>
using namespace std;

const int x = 26;
int a[x];
int main() {
	int t;
	cin >> t;
	while(t > 0){
		string s;
		cin >> s;
        fill(a, a+x, 0);                           //** ⬇️
		for(int i =0; i<s.size(); i++){
			a[s[i]-'a']++;
		}
		int ans = 0;
		for(int i =0; i<s.size(); i++){
			if(a[i]%2==0){
				ans = 1;
				break;
			}
		}
		if(ans == 1){cout << "YES"<<endl;}
		else{cout << "NO" << endl;}
		t--;
	}
}

//* to Reset the frequency array for each test case :
//* fill(begin_iterator, end_iterator, value); 
//* a is the starting pointer of the array.
//* a + x is the pointer to the element just past the end of the array.
//* 0 is the value to which all elements in the range will be set.