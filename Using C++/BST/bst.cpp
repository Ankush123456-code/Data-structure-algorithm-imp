#include <bits/stdc++.h>
using namespace std;

//  Node creation
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// insertion
node *bst_insertion(node *root, int data)
{
    if (root == NULL)
    {
        node *newnode = new node(data);
        return newnode;
    }
    if (root->data > data)
    {
        root->left = bst_insertion(root->left, data);
    }
    else
    {
        root->right = bst_insertion(root->right, data);
    }
    return root;
}
void insertdata(node *&root)
{
    int d;
    while (d != -1)
    {
        cin >> d;
        if (d != -1)
        {
            root = bst_insertion(root, d);
        }
    }
}

// searching value in bst
bool serching(node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == data)
    {
        return true;
    }
    if (root->data > data)
    {
        return serching(root->left, data);
    }
    else
    {
        return serching(root->right, data);
    }
}
// finding minval
node *minival(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
// finding max val
node *maxival(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

// deletion of the particular node using bst
node *deletion(node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data > data)
    {
        root->left = deletion(root->left, data);
    }
    else if (root->data < data)
    {
        root->right = deletion(root->right, data);
    }
    else
    {
        //  case 1 root->left==NULL and root->right== NULL
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // case 2 root->right==null
        else if (root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }

        // case 3 root->left==null
        else if (root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        // case 4 root->left!=NULL and root->right!= NULL
        else if (root->left != NULL and root->right != NULL)
        {
            auto mini = minival(root->right)->data;
            root->data = mini;
            root->right = deletion(root->right, mini);
            return root;
        }
    }
    return root;
}
void level_order(node *root)
{
    queue<node *> pq;
    pq.push(root);
    cout << "insert data" << endl;
    while (!pq.empty())
    {
        /* code */
        int size = pq.size();
        for (int i = 0; i < size; i++)
        {
            auto temp = pq.front();
            pq.pop();
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                pq.push(temp->left);
            }
            if (temp->right != NULL)
            {
                pq.push(temp->right);
            }
        }
        cout << endl;
    }
}
int main()
{
    node *root = NULL;
    insertdata(root);

    level_order(root);
    cout << "serching" << endl;
    int data;
    cin >> data;
    if (serching(root, data))
    {
        cout << "data found" << endl;
    }
    else
    {
        cout << "data not found" << endl;
    }
    root = deletion(root, 6);
    cout << "after deleltion" << endl;
    level_order(root);
    return 0;
}