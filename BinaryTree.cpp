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
    clear();
}

/**
 * @brief Creates a new node and places in the tree
 *
 * @param key the data to add to the tree
 */
template <class T>
void insert(T key)
{
    Node<T> *local_root = NULL;
    Node<T> *init = new Node<T>(key);

    if (!root<T>)
    {
        // root doesnt exist, lets create one
        root<T> = init;
        return true;
    }

    if (last_root<T>)
    {
        local_root<T> = last_root;
    }
    else
    {
        local_root<T> = root;
    }

    if (key == local_root->data)
    {
        return false;
    }
    else if (key < local_root->data)
    {
        // data is larger than root, recurse left side
        local_root<T> = local_root<T>->left;
        insert(key);
    }
    else if (key > local_root->data)
    {
        // data is larger than root, recurse right side
        local_root<T> = local_root<T>->right;
        insert(key);
    }

    if (!local_root<T>)
    {
        // the root's child node (left or right) doesnt exist, lets reassign it to the new data
        local_root<T> = init;
        return true;
    }

    return false;
}
