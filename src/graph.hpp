#pragma once

#include <vector>
#include <limits.h>

using namespace std;

class Graph {
  public:
    int n, m;
    vector<vector<pair<int, int>>> adj;
    vector<int> dist, prev;
    Graph(int n, int m) : n(n), m(m), adj(n), dist(n, INT_MAX), prev(n, -1) {}
    void addEdge(int u, int v, int w) {
      adj[u].push_back({v, w});
    }
};
