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
int count_nodes(Node* root)
{
    // recursion : Base Case
    if(root==NULL) return 0;
    int l=count_nodes(root->left);
    int r=count_nodes(root->right);
    return l+r+1;
}
int main()
{
    Node* root=input_tree();
    cout<<count_nodes(root)<<endl;
    return 0;
}
