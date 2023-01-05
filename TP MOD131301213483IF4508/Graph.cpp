#include "graph.h"
adrNode newNode_1301213483(char x){
    adrNode DNode = new node;
    info(DNode) = x;
    next(DNode) = NULL;
    child(DNode) = NULL;
    return DNode;
}

void addNode_1301213483(adrNode &G, adrNode P){
    if(G == NULL){
        G = P;
    }else{
        adrNode DNode = G;
        while(next(DNode) != NULL){
            DNode = next(DNode);
        }
        next(DNode) = P;
    }
}
adrNode findNode_1301213483(adrNode G, char x){
    if(G != NULL){
        adrNode DNode = G;
        while(DNode != NULL){
            if(info(DNode) == x){
                return DNode;
            }
            DNode = next(DNode);
        }
    }
    return NULL;
}
void addChild_1301213483(adrNode &G, char x, char y){
    if(G == NULL){
        cout<<"Graph kosong"<<endl;
    }else{
        adrNode DNode = findNode_1301213483(G, x);
        if(DNode != NULL){
            adrChild DEdge = new nodeChild;
            info(DEdge) = y;
            next(DEdge) = NULL;
            if(child(DNode) == NULL){
                child(DNode) = DEdge;
            }else{
                next(DEdge) = child(DNode);
                child(DNode) = DEdge;
            }
        }
    }
}

bool isConnected_1301213483(adrNode G, char x, char y){
    if(G != NULL){
        adrNode DNode = G;
        while(DNode != NULL){
            if(info(DNode) != x){
                DNode = next(DNode);
            }else{
                adrChild DEdge = child(DNode);
                while(DEdge != NULL){
                    if(info(DEdge) != y){
                        DEdge = next(DEdge);
                    }else{
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
void printGraph_1301213483(adrNode G){
    if(G == NULL){
        cout<<"Graph kosong"<<endl;
    }else{
        adrNode DNode = G;
        while(DNode != NULL){
            cout<<"node "<<info(DNode)<<":";
            if(child(DNode) != NULL){
                adrChild DEdge = child(DNode);
                while(DEdge != NULL){
                    cout<<" - "<<info(DEdge);
                    DEdge = next(DEdge);
                }
                cout<<endl;
            }else{
                cout<<"Edge Kosong"<<endl;
            }
            DNode = next(DNode);
        }
    }
}
