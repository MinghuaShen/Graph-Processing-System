// This code is part of the project "Krill"
// Copyright (c) 2019 Hongzheng Chen

#include "krill.h"
#include "BFS.h"
#include "SSSP.h"
#include "PageRank.h"
#include "CC.h"
#include "KCore.h"
using namespace std;

template <class vertex>
void setKernels(graph<vertex>&G, Kernels& K, commandLine P)
{
	BFS* bfs = new BFS(G.n); // remember to dynamically allocate memory
	SSSP* sssp = new SSSP(G.n);
	BFS* bfs2 = new BFS(G.n,10);
	SSSP* sssp2 = new SSSP(G.n,15);
	Components* cc = new Components(G.n);
	K.appendTask({bfs, sssp, bfs2, sssp2, cc});
}