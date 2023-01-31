#include "pt4.h"
using namespace std;

PNode Pmax;
int Datamax;

void tree(PNode P)
{

    if (P->Left != NULL) tree(P->Left);

    if (P->Data > Datamax)
    {
        Datamax = P->Data;
        Pmax = P;
    }

    if (P->Right != NULL) tree(P->Right);
}
void Solve()
{
    Task("TreeWork6");
    pt >> Pmax;
    Datamax = Pmax->Data;

    tree(Pmax);
    pt << Datamax;
}
