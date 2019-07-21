// Main.cpp
// oberoi, sean
// ssoberoi

#include "BinaryTree.h"

typedef int datatype;

int main()
{
    BinaryTree<datatype>* tree = new BinaryTree<datatype>();

    tree->add(40);
    tree->add(20);
    tree->add(60);
    tree->add(50);
    tree->add(30);
    tree->add(70);
    tree->add(10);

    tree->setRootData(100);
    std::cout << tree->getRootData() << std::endl;

    return 0;
}