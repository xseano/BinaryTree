// BinaryTree.cpp
// oberoi, sean
// ssoberoi

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
 * @brief latest root reference
 */
template <typename T>
Node<T> *last_root = NULL;

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
    //
}

/**
 * @brief Creates a new node and places in the tree
 *
 * @param key the data to add to the tree
 */
template <class T>
void BinaryTree<T>::insert(T key)
{
    Node<T> *local_root = NULL;
    Node<T> *init = new Node<T>(key);

    if (!root<T>)
    {
        // root doesnt exist, lets create one
        root<T> = init;
        return;
    }

    if (last_root<T>)
    {
        local_root = last_root<T>;
    }
    else
    {
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
        insert(key);
    }
    else if (key > local_root->data)
    {
        // data is larger than root, recurse right side
        local_root = local_root->right;
        insert(key);
    }

    if (!local_root)
    {
        // the root's child node (left or right) doesnt exist, lets reassign it to the new data
        local_root = init;
        last_root<T> = NULL;
        return;
    }

    return;
}
