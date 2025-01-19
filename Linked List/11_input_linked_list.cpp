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
void insert_at_tail(Node* &head, int v)
{
    Node* newnode=new Node(v);
    if(head==NULL)
    {
        head=newnode;
        // cout<<endl<<"Inserted At Head"<<endl<<endl;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    // tmp akhon last node
    tmp->next=newnode;
    // cout<<endl<<"Inserted At Tail"<<endl<<endl;
}
void print_linked_list(Node* head)
{
    cout<<endl;
    cout<<"Your Linked List : ";
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    int val;
    Node* head=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
    }
    print_linked_list(head);
    return 0;
}
