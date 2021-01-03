// Adjancecy list Representation of Graphs
#include<stdio.h>
#include<stdlib.h>

struct AdjListNode
{
    int dest;
    struct AdjListNode* next;

};

// A structure to Represent an Adjacency List
struct AdjList
{
    struct AdjListNode *head;

};
//A structure to Represent a Graph . A graph
// is an array of adjacency lists.
//Size od Array will be V(number of Vertices in Grph)
struct Graph
{
    int V;
    struct AdjList* array;

};
// A utility Function to create a new adjancey list node
struct AdjListNode*  newAdjListNode(int dest){
    struct AdjListNode* newNode=(struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest=dest;
    newNode->next=NULL;
    return newNode;



}
// A utility Function that create a graph of V vertices
struct Graph* createGraph(int V)
{
    struct Graph* graph=(struct Graph* )malloc(sizeof(struct Graph));
    graph->V=V;
    // create an Array of adjacency lists . sizeof array will be V
 
    graph->array=(struct AdjList*)malloc(V* sizeof(struct AdjList));
    //Intilize each adjancecy list as empty by
    // making head as NUll;
    int i;
    for ( i = 0; i < V; i++)

    {
        graph->array[i].head=NULL;
        return graph;

        /* code */
    }
    
}
void addEdge(struct Graph* graph,int src , int dest)
{
    //Add an edge from src to des . A new node is 
    //addes to the Adjacency list of src. The node
    //is added at the beginning 

    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next=graph->array[src].head;

    graph->array[src].head=newNode;

// science grap is undirctes , add an edge from dest to src also
newNode=newAdjListNode(src);
newNode->next=graph->array[dest].head;
graph->array[dest].head=newNode;




}
// function to print list adjacency list
void printGraph(struct Graph* graph)
{
    int v;
    for (v= 0; v < graph->V; v++)
    {
        struct AdjListNode* pCrawl=graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head",v);
        while (pCrawl)

        {
            printf("->%d",pCrawl->dest);
            pCrawl = pCrawl->next;

            /* code */
        }
        printf("\n");
        /* code */
    }
}

    
int main()
{
    int V =5;
    struct Graph* graph = createGraph(V);
    addEdge(graph,0,1);
     // addEdge(graph, 0, 1); 
    addEdge(graph, 0, 4); 
    addEdge(graph, 1, 2); 
    addEdge(graph, 1, 3); 
    addEdge(graph, 1, 4); 
    addEdge(graph, 2, 3); 
    addEdge(graph, 3, 4); 
    printGraph(graph);
    return 0;
    
 
}