#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    int lth, rth; // th=1 if thread, th=0 if has child


    node(int x)
    {
        data = x;
        lth = 1;
        rth = 1;
    }
};


class TBT
{


public:
    node *root, *dummy;


    TBT()
    {
        root = NULL;
        dummy = new node(-1);
        dummy->rth = 0;
        dummy->lth = 1; // TBT is empty
        dummy->left = dummy;
        dummy->right = dummy;
    }


    void insertnode();
    void insert(node *, node *); // BST
    void preorder(node *);
    void inorder(node *);
    void postorder();
    void pre();
    void in();
};


void TBT ::insertnode()
{
    node *newnode;
    int data;
    cout << "enter the node data ";
    cin >> data;
    newnode = new node(data);


    if (dummy->lth == 1) // empty TBT
    {
        root = newnode;
        root->left = dummy;
        root->right = dummy;
        dummy->left = root;
        dummy->lth = 0;
    }
    else
        insert(root, newnode);
}


void TBT ::insert(node *T, node *newnode)
{
    if (newnode->data < T->data)
    {
        if (T->lth == 1) // insert to left of T
        {


            newnode->lth = T->lth;
            newnode->left = T->left;
            newnode->right = T;
            newnode->rth = 1;
            T->left = newnode;
            T->lth = 0;
        }


        else
        {
            insert(T->left, newnode);
        }
    }
    else
    {
        if (T->rth == 1) // rightmost
        {


            newnode->rth = T->rth;
            newnode->right = T->right;
            newnode->left = T;
            newnode->lth = 1;
            T->right = newnode;
            T->rth = 0;
        }


        else
        {
            insert(T->right, newnode);
        }
    }
}
node *pre_succ(node *p)
{


    if (p->lth == 0)
    {
        return (p->left);
    }
    while (p->rth == 1)
    {
        p = p->right;
    }
    return (p->right);
}


void TBT ::preorder(node *T)
{
    node *head;
    head = T;
    T = T->left;
    while (T != head)
    {
        cout << T->data << " ";
        T = pre_succ(T); // preorder successor
    }
}
void TBT::pre()
{
    preorder(dummy);
}
node *inorder_succ(node *p)
{
    if (p->rth == 1)
    {
        return (p->right);
    }
    p = p->right;
    // right is link
    while (p->lth == 0)
    // find leftmost node of right link
    {
        p = p->left;
    }
    return (p);
}
void TBT::inorder(node *T)
{
    node *head;


    head = T;
    // dummy
    T = T->left;
    // root
    while (T->lth == 0)
    // inorder starts with leftmost node
    {
        T = T->left;
    }
    while (T != head) // dummy
    {
        cout << T->data << " ";
        T = inorder_succ(T); // find inorder successor
    }
}
void TBT::in()
{
    inorder(dummy);
}
int main()
{
    TBT t;
    int x, i, choice;
    do
    {
        cout << "\n*******MENU*******";
        cout << "\n1. Insertnode";
        cout << "\n2. Preorder";
        cout << "\n3. Inorder";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter the no of nodes: ";
            cin >> x;
            for (i = 0; i < x; i++)
                t.insertnode();
            break;
        case 2:
            cout << "\nPreorder is: \n";
            t.pre();
            break;
        case 3:
            cout << "\nInorder is:\n";
            t.in();
            break;
        case 4:
            break;
        default:
            cout << "\nInvalid choice entered.";
            break;
        }
    } while (choice != 4);
    return 0;
}

