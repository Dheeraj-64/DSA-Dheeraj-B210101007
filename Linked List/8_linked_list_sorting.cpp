#include<bits/stdc++.h>
using namespace std;
 
class Node
{
    public:
      int val;
      Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void tail_insert(Node* &head,Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
}
int main()
{
    
 
    return 0;
}