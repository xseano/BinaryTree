// Main.cpp
// oberoi, sean
// ssoberoi

#include "BinaryTree.h"

typedef int datatype;

int main()
{
    BinaryTree<int>* tree = new BinaryTree<int>();

    tree->insert(40);
    tree->insert(20);
    tree->insert(60);
    tree->insert(50);
    tree->insert(10);
    tree->insert(70);
    tree->insert(10);
    tree->search(100);

    return 0;
}