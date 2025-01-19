#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void level_order_print(Node* root)
{
    if(root==NULL)
    {
        cout<<"Tree Nei"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        //1. Ber kore ana
        Node* f=q.front();
        q.pop();

        //2. Jabotyo kaaj kora
        cout<<f->val<<" ";

        //3. Tar children gulo ke rakha
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        //1. ber kore ano
        Node* p=q.front();
        q.pop();

        //2. Jabotyo kj koro
        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);

        p->left=myleft;
        p->right=myright;

        //3. Children guloo ke rakho
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int max_height(Node* root)
{
    if(root==NULL) return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}
int main()
{
    Node* root=input_tree();
    level_order_print(root);
    cout<<endl;
    cout<<max_height(root)<<endl;
    return 0;
}
