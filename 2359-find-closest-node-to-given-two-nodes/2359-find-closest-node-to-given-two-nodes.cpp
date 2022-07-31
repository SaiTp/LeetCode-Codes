class Solution {
public:
   vector<vector<int>> graph;
void dfs(int start, int d, vector<int>& visited, vector<int>& dist){
    if(visited[start] != 0) return;
    visited[start] = 1;
    dist[start] = d; //update distance to node

    for(int child: graph[start]){
        dfs(child, d+1, visited, dist);
    }
}

int closestMeetingNode(vector<int>& edges, int node1, int node2) {
    int n = edges.size();
    graph.resize(n);

	//build graph
	for(int i=0; i<n; i++){
        if(edges[i] != -1) graph[i].push_back(edges[i]);
	}

    vector<int> visited1(n,0), visited2(n, 0);
    vector<int> dist1(n, INT_MAX), dist2 (n, INT_MAX);
    dfs(node1, 0, visited1, dist1);
    dfs(node2, 0, visited2, dist2);

    int minNode = -1;
    for(int i=0; i<n; i++){
		//min-max of distance i.e. maximum of any node dist, but minimum of them.
        if((minNode == -1 || max(dist1[i], dist2[i]) < max(dist1[minNode], dist2[minNode])) && visited1[i] && visited2[i])
            minNode = i;
	}
    return minNode;
}
};