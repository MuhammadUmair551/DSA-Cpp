#include<iostream>
#include<vector>
using namespace std;

class Edge{
public:
	int src;
	int dest;
	int weight;
	
	Edge (int s, int d, int w) : src(s), dest(d), weight(w){}
};

void createGraph(vector<Edge> graph[], int V){
	for(int i=0; i < V; i++){
		graph[i] = vector<Edge>();
	}
	
	graph[0].push_back(Edge(0,2,2));
	
	graph[1].push_back(Edge(1,2,10));
	graph[1].push_back(Edge(1,3,0));
	
	graph[2].push_back(Edge(2,0,2));
	graph[2].push_back(Edge(2,1,10));
	graph[2].push_back(Edge(2,3,-1));
	
	graph[3].push_back(Edge(3,1,0));
	graph[3].push_back(Edge(3,2,-1));
}

int main(){
	int V = 4;
	vector<Edge>* graph = new vector<Edge>[V];
	createGraph(graph,V);
	
	//print 2's neighbours
	
	for(int i = 0; i<graph[2].size(); i++){
		Edge e = graph[2][i];
		cout << e.dest << "," << e.weight << " " <<endl;
	}
	
	
	return 0;
}