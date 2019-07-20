// BinaryTree.cpp
// oberoi, sean
// ssoberoi

/**
 * @brief tree constructor
 */
template <typename T>
BinaryTree<T>::BinaryTree()
{
    // instantiate the root node
    root<T> = NULL;
}

/**
 * @brief tree destructor
 */
template <typename T>
BinaryTree<T>::~BinaryTree()
{
    clear();
}

/**
 * @brief Clears all nodes from the tree
 *
 * @param parent the node to clear
 */
template <class T>
void BinaryTree<T>::clear(Node<T> *parent)
{
    if (parent)
    {
        Node<T> *tmp_l = parent->left;
        Node<T> *tmp_r = parent->right;

        clear(tmp_l);
        clear(tmp_r);
        delete parent;
    }
}

/**
 * @brief Checks whether the tree is empty or not
 *
 * @param parent the node to check
 */
template <class T>
bool BinaryTree<T>::isEmpty(Node<T> *parent)
{
    if (!parent)
    {
        return true;
    }

    return false;
}

/**
 * @brief Creates a new node and places in the tree
 *
 * @param key the data to add to the tree
 * @param parent the potential leaf node where the data will be stored
 */
template <class T>
void BinaryTree<T>::insert(T key, Node<T> *parent)
{
    Node<T> *temp = new Node<T>(key);

    if (!root<T>)
    {
        // root doesnt exist, lets create one
        root<T> = temp;
        return;
    }

    if (key == parent->data)
    {
        return;
    }
    else if (key < parent->data)
    {
        // data is smaller than root, recurse left side
        if (!parent->left)
        {
            // the left ptr is null, assign it the new data
            parent->left = temp;
        }
        else
        {
            // the data exists, keep traversing the left subtree until we find the leaf
            insert(key, parent->left);
        }
    }
    else if (key > parent->data)
    {
        // data is larger than root, recurse right side
        if (!parent->right)
        {
            // the right ptr is null, assign it the new data
            parent->right = temp;
        }
        else
        {
            // the data exists, keep traversing the right subtree until we find the leaf
            insert(key, parent->right);
        }
    }

    return;
}

/**
 * @brief InOrder listing of data in the tree
 *
 * @param parent the node to traverse from
 */
template <class T>
void BinaryTree<T>::inorder_traversal(Node<T> *parent)
{
    if (parent)
    {
        // first we traverse the left subtree
        inorder_traversal(parent->left);
        // then display the root
        std::cout << parent->data << std::endl;
        // and then traverse the right subtree
        inorder_traversal(parent->right);
    }
}

/**
 * @brief PreOrder listing of data in the tree
 *
 * @param parent the node to traverse from
 */
template <class T>
void BinaryTree<T>::preorder_traversal(Node<T> *parent)
{
    if (parent)
    {
        // first we display the root
        std::cout << parent->data << std::endl;
        // then traverse the left subtree
        preorder_traversal(parent->left);
        // and then traverse the right subtree
        preorder_traversal(parent->right);
    }
}

/**
 * @brief PostOrder listing of data in the tree
 *
 * @param parent the node to traverse from
 */
template <class T>
void BinaryTree<T>::postorder_traversal(Node<T> *parent)
{
    if (parent)
    {
        // first we traverse the left subtree
        postorder_traversal(parent->left);
        // then we traverse the right subtree
        postorder_traversal(parent->right);
        // and then display the root at the end
        std::cout << parent->data << std::endl;
    }
}

/**
 * @brief Locates a node with a set of data
 *
 * @param key the data to find in the tree
 * @param parent the potential leaf node where the data may be located
 */
template <class T>
void BinaryTree<T>::search(T key, Node<T> *parent)
{
    if (!root<T>)
    {
        // root doesnt exist, exit operation
        std::cout << "Root doesn't exist!" << std::endl;
        return;
    }

    if (key < parent->data)
    {
        // the target data is smaller than the root, so we know it must be in the left subtree
        if (!parent->left)
        {
            std::cout << "The value " << key << " was not found in the tree." << std::endl;
            return;
        }
        else
        {
            std::cout << "Moving to left of " << parent->data << std::endl;
            search(key, parent->left);
        }
    }
    else if (key > parent->data)
    {
        // the target data is larger than the root, so we know it must be in the right subtree
        if (!parent->right)
        {
            std::cout << "The value " << key << " was not found in the tree." << std::endl;
            return;
        }
        else
        {
            std::cout << "Moving to right of " << parent->data << std::endl;
            search(key, parent->right);
        }
    }
    else
    {
        std::cout << "The value " << parent->data << " has been found!   " << std::endl;
    }
}