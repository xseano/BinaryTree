// BinaryTree.h
// oberoi, sean
// ssoberoi

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
struct Node
{
    /**
     * @brief the data or key
     */
    T data;

    /**
     * @brief the child pointer to the left
     */
    Node* left;

    /**
     * @brief the child pointer to the right
     */
    Node* right;

    /**
     * @brief nodee constructor
     */
    Node() {}

    /**
     * @brief Node Initializer List
     *
     * @param d the initial data
     * @param l the initial left child
     * @param r the initial right child
     */
    Node(T d, Node<T> *l = 0, Node<T> *r = 0) : data(d), left(l), right(r) {}
};

template <typename T>
class BinaryTree
{
    public:
        BinaryTree();
        ~BinaryTree();

        void insert(T key, Node<T> *last_root = NULL); // places data into tree
        T displayRoot();
};

#include "BinaryTree.cpp"

#endif
