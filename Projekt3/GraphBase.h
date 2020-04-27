#pragma 
#include <vector>
#include <algorithm>
#include <climits>

class GraphBase
{
public:
	int _numberOfVertices;
	virtual void addEdge(int u, int v, int weight) = 0;
	virtual void deleteEdge(int u, int v) = 0;
	virtual std::vector<int> neighbours(int u) = 0;
	virtual int weight(int u, int v) = 0;
};

