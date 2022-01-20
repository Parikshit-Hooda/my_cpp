#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	map<int, int> mp;
	mp[1]++;
	mp[2]++;
	mp[1]++;
	for(auto i : mp) {
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}
