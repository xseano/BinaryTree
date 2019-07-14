// BinaryTree.h
// oberoi, sean
// ssoberoi

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class BinaryTree
{
    public:
        BinaryTree();
        ~BinaryTree();

        bool insert(T key); // places data into tree
};

#include "BinaryTree.cpp"

#endif
