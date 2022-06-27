#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	//INPUT MATRIX
	vector<vector<int>> g = {{0,3,INT_MAX,7}, {8,0,2,INT_MAX}, {5,INT_MAX,0,1}, {2,INT_MAX,INT_MAX,0}};
	
	//SOLUTION MATRIX
	vector<vector<int>> sg = g;
	
	//for each vertex, find shortest path
	for(int k = 0; k < 4; k++) { //for each iteration equals from 0 to number of vertex
		for(int i = 0 ; i < 4; i++) {
			for(int j = 0; j < 4; j++) {
				
				//if either leftside or rightside has infinity, do nothing
				// if(sg[i][j] == INT_MAX) continue;
				
				//considering k as intermediate vertex, 
				if((sg[i][j] > sg[i][k] + sg[k][j]) && (sg[i][k] != INT_MAX) && (sg[k][j] != INT_MAX) ) {
					sg[i][j] = sg[i][k] + sg[k][j];
				}
				
			}
		}
		
	} //k loop
	
	//print sg
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cout << sg[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
