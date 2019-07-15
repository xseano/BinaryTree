// Main.cpp
// oberoi, sean
// ssoberoi

#include "BinaryTree.h"

typedef int datatype;

int main()
{
    BinaryTree<int>* tree = new BinaryTree<int>();
    
    tree->insert(30);
    cout << tree->displayRoot() << endl;
    
    tree->insert(20);
    cout << tree->displayRoot() << endl;

    /*
    tree->insert(40);
    tree->insert(70);
    tree->insert(60);
    tree->insert(80);
    */

    return 0;
}