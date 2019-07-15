// BinaryTree.cpp
// oberoi, sean
// ssoberoi

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
void BinaryTree<T>::insert(T key, Node<T> *next_parent)
{
    Node<T> *temp = new Node<T>(key);

    if (!root<T>)
    {
        // root doesnt exist, lets create one
        root<T> = temp;
        return;
    }

    if (!next_parent)
    {
        // next_parent is a default parameter, if no value is supplied we assume root
        next_parent = root<T>;
    }

    if (key == next_parent->data)
    {
        return;
    }
    else if (key < next_parent->data)
    {
        // data is larger than root, recurse left side
        next_parent = next_parent->left;
    }
    else if (key > next_parent->data)
    {
        // data is larger than root, recurse right side
        next_parent = next_parent->right;
    }

    if (!next_parent)
    {
        // the root's child node (left or right) doesnt exist, lets reassign it to the new data
        next_parent = temp;
        return;
    }
    else
    {
        insert(key, next_parent);
    }

    return;
}

template <class T>
void BinaryTree<T>::inorder_traversal(Node<T> *parent)
{
    if (parent != NULL)
    {
        inorder_traversal(parent->left);
        cout << parent->data << endl;
        inorder_traversal(parent->right);
    }
}
