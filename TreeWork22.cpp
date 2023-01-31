#include <windows.h>
#pragma hdrstop
#include "pt4.h"
using namespace std;

int k;

void Go(PNode Tree, int lvl = 0)
{
	if (!Tree) return;
	if (lvl == k)
	{
		pt << Tree->Data;
		return;
	}
	Go(Tree->Left, lvl+1);
	Go(Tree->Right, lvl+1);
}

void Solve()
{
    Task("TreeWork22");

	PNode p;
	pt >> k;
	pt >> p;
	Go(p);

}
