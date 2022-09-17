// We don't know whether the graph has only 1 component or more than that .
// component means a disconnected graph 
// So to reduce this problem, we traverse from every node and check whether it is 
// visited or not .If it is not visited then we apply BFS algorithm on that and mark it as visited.
// BFS works on a queue , queue works on FIFO.
// We take a node add it into the queue, and visited of i =1.
// While queue is not empty take the next element out of the queue and after that we 
// traverse the adjacent nodes.Add all the adjacent nodes into the queue and repeat the same steps.
