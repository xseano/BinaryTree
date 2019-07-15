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

/**
 * @brief the root node
 */
template <typename T>
Node<T> *root = NULL;

template <typename T>
class BinaryTree
{
    public:
        // Constructor/Destructor
        BinaryTree();
        ~BinaryTree();

        // Data Handlers
        void insert(T key, Node<T> *next_parent = root<T>);

        // Traversal Methods
        void inorder_traversal(Node<T> *parent = root<T>);
        void preorder_traversal(Node<T> *parent = root<T>);
};

#include "BinaryTree.cpp"

#endif
