// BinaryTree.cpp
// oberoi, sean
// ssoberoi

/**
 * @brief the root node
 */
template <typename T>
Node<T> *root = NULL;

/**
 * @brief tree Constructor
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
    //
}

/**
 * @brief Creates a new node and places in the tree
 *
 * @param key the data to add to the tree
 */
template <class T>
void BinaryTree<T>::insert(T key, Node<T> *last_root)
{
    Node<T> *local_root = NULL;
    Node<T> *init = new Node<T>(key);

    if (!root<T>)
    {
        // root doesnt exist, lets create one
        root<T> = init;
        return;
    }

    if (!last_root)
    {
        local_root = root<T>;
    }
    else
    {
        local_root = last_root;
    }

    if (key == local_root->data)
    {
        return;
    }
    else if (key < local_root->data)
    {
        // data is larger than root, recurse left side
        local_root = local_root->left;
        insert(key, local_root);
    }
    else if (key > local_root->data)
    {
        // data is larger than root, recurse right side
        local_root = local_root->right;
        insert(key, local_root);
    }

    if (!local_root)
    {
        // the root's child node (left or right) doesnt exist, lets reassign it to the new data
        local_root = init;
        return;
    }

    return;
}

template <class T>
T BinaryTree<T>::displayRoot()
{
    return root<T>->data;
}
