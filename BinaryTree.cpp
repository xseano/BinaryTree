// BinaryTree.cpp
// oberoi, sean
// ssoberoi

#include "BinaryTree.h"

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

/**
 * @brief treee Constructor
 */
template <typename T>
BinaryTree<T>::BinaryTree()
{
    root<T> = NULL;
}

/**
 * @brief tree Destructor
 */
template <typename T>
BinaryTree<T>::~BinaryTree()
{
    clear();
}

/**
 * @brief Creates a new node and places in the tree
 *
 * @param key the data to add to the tree
 */
template <class T>
bool insert(T key)
{
    Node<T> *side = NULL;
    Node<T> *init = new Node<T>(key);

    if (!root<T>)
    {
        // root doesnt exist, lets create one
        root<T> = init;
        return true;
    }

    if (key == root<T>->data)
    {
        return false;
    }
    else if (key < root<T>->data)
    {
        // data is larger than root, recurse left side
        side<T> = root<T>->left;
    }
    else if (key > root<T>->data)
    {
        // data is larger than root, recurse right side
        side<T> = root<T>->right;
    }

    if (!side<T>)
    {
        // the root's child node (left or right) doesnt exist, lets reassign it to the new data
        side<T> = init;
        return true;
    }

    return false;
}
