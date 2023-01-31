#include "pt4.h"
using namespace std;

int n = 0;

PNode Search(PNode Tree, int what)
{
    if (!Tree) return NULL; 
    n++;
    if (what == Tree->Data) return Tree; 
    if (what < Tree->Data)
    {
        return Search(Tree->Left, what);
    }
    else
    {
        return Search(Tree->Right, what);
    }
}

void Solve()
{
    Task("TreeWork15");
    int key;
    PNode p;

    pt >> p >> key;
    p = Search(p, key);
    pt << p << n;
}
