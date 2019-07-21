// BinaryTree.h
// oberoi, sean
// ssoberoi

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
#include <vector>

template <typename T>
struct Node
{
    T data;
    Node() {}
    Node* left;
    Node* right;

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
Node<T> *root;

int c = 0;

template <typename T>
class BinaryTree
{
    public:
        // Constructor/Destructor
        BinaryTree();
        ~BinaryTree();

        // Data Operations
        void insert(T key, Node<T> *parent = root<T>);
        void search(T key, Node<T> *parent = root<T>);
        void clear(Node<T> *parent = root<T>);

        // Info
        bool isEmpty(Node<T> *parent = root<T>);

        // Getters
        T getRootData(Node<T> *parent = root<T>);
        int getNumberOfNodes(int *counter = &c, Node<T> *parent = root<T>);

        // Setters
        void setRootData(T key, Node<T> *parent = root<T>);

        // Traversal Methods
        void inorder_traversal(Node<T> *parent = root<T>);
        void preorder_traversal(Node<T> *parent = root<T>);
        void postorder_traversal(Node<T> *parent = root<T>);

};

#include "BinaryTree.cpp"
#endif
