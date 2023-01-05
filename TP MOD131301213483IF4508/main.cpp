#include "graph.h"
int main()
{
    adrNode G;
    G = NULL;
    addNode_1301213483(G, newNode_1301213483('A'));
    addNode_1301213483(G, newNode_1301213483('B'));
    addNode_1301213483(G, newNode_1301213483('C'));
    addNode_1301213483(G, newNode_1301213483('D'));

    addChild_1301213483(G, 'A', 'B');
    addChild_1301213483(G, 'A', 'D');
    addChild_1301213483(G, 'A', 'C');

    addChild_1301213483(G, 'B', 'D');
    addChild_1301213483(G, 'B', 'A');

    addChild_1301213483(G, 'C', 'A');

    addChild_1301213483(G, 'D', 'A');
    addChild_1301213483(G, 'D', 'B');

    cout<<"========================================"<<endl;
    printGraph_1301213483(G);
    cout<<"========================================"<<endl;
    return 0;
}
