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
void BinaryTree<T>::insert(T key, Node<T> *local_root)
{
    Node<T> *temp = new Node<T>(key);

    if (!root<T>)
    {
        // root doesnt exist, lets create one
        root<T> = temp;
        return;
    }

    if (!local_root)
    {
        // local_root is a default parameter, if no value is supplied we assume root
        local_root = root<T>;
    }

    if (key == local_root->data)
    {
        return;
    }
    else if (key < local_root->data)
    {
        // data is larger than root, recurse left side
        local_root = local_root->left;
    }
    else if (key > local_root->data)
    {
        // data is larger than root, recurse right side
        local_root = local_root->right;
    }

    if (!local_root)
    {
        // the root's child node (left or right) doesnt exist, lets reassign it to the new data
        local_root = temp;
        return;
    }
    else
    {
        insert(key, local_root);
    }

    return;
}

template <class T>
T BinaryTree<T>::displayRoot()
{
    return root<T>->data;
}
