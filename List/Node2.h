#include <cstdio>

class Node2
{
public:
    Node2 *prev;
    Node2 *next;
    int    data;

public:
    Node2()
    :data(0), prev(NULL), next(NULL);
    {}
    ~Node2(){}

    Node* getPrev()       {return prev;}
    Node* getNext()       {return next;}
    bool  hasData(int val){data==val;}
    void  setPrev(Node* p){prev=p;}
    void  setNext(Node* n){next=n;}
    void  display()       {printf("<%d>", data);}
    

    void insertNext(Node *n)
    {
        if(n != NULL){
            n->prev = this;
            n->next = next;
            if(next != NULL) next->prev = n;
            next = n;
        }
    }

    Node* remove()
    {
        if(prev != NULL) prev->next = next;
        if(next != NULL) next->prev = prev;
        return this;
    }
};

