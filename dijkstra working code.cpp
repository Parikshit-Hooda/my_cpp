#include <bits/stdc++.h>
using namespace std;

// A utility function to print the constructed distance array
void printSolution(vector<int> dist, int graphsize)
{
	cout <<"Vertex \t Distance from Source" << endl;
	for (int i = 0; i < graphsize; i++)
		cout << i << " \t\t"<<dist[i]<< endl;
}

int mindist(vector<int> distance, vector<bool> visited) {
	//find where visited is false and distance is minimum
	int dsize = distance.size();
	int minidx, mindistance = INT_MAX;
	for(int i = 0 ; i < dsize; i++) {
		if((mindistance > distance[i]) && visited[i] == false) {
			minidx = i, mindistance = distance[i];
		}
	}
	
	return minidx;
}


void dijkstra(vector<vector<int>> &g, int src) {
	int gsize = g.size();
	//starting from src, mark distance to every other vertex
	vector<int> distance(g.size(), INT_MAX);
	distance[src] = 0;
	vector<bool> visited(g.size(), false); //visited array
	//ITERATIVELY PICK VERTEX, THEN FIND MIN DISTANCE, THEN UPDATE
	visited[src] = true; //good
	for(int i = 0 ; i < g.size() - 1; i++) {
		//find u
		int u = mindist(distance, visited); // minimum distance vertex
		visited[u] = true;
		//find shortest edge that can be formed using this vertex
		for(int j = 0 ; j < gsize; j++) {
			//if edge exists, update distance
			if( g[u][j] && visited[j] != true && distance[u] != INT_MAX && (distance[u] + g[u][j] < distance[j])) {
				distance[j] = distance[u] + g[u][j]; //update min distance possible in g 
				} 
		} // j loop
	} // i loop
	printSolution(distance, g.size());

} // fn end

int main() {
	vector<vector<int>> g = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
                        //0 represents no edge
    dijkstra(g, 0);
    
    for(int i = 0; i < g.size(); i++) {
    	for(int j = 0 ; j < g.size(); j++) {
    		cout << g[i][j] << " ";
    	}
    	
    	cout << endl;
    }
	
	return 0;
}
