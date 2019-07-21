// Main.cpp
// oberoi, sean
// ssoberoi

#include "BinaryTree.h"

typedef int datatype;

int main()
{
    BinaryTree<datatype>* tree = new BinaryTree<datatype>();

    tree->insert(40);
    tree->insert(20);
    tree->insert(60);
    tree->insert(50);
    tree->insert(30);
    tree->insert(70);
    tree->insert(10);

    std::cout << tree->getRootData() << std::endl;

    return 0;
}