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
        cout<<endl<<"Inserted At Head"<<endl<<endl;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    // tmp akhon last node
    tmp->next=newnode;
    cout<<endl<<"Inserted At Tail"<<endl<<endl;
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
void insert_at_any_pos(Node* head,int pos,int v)
{
    Node* newnode=new Node(v);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<<"Inserted At Position : "<<pos<<endl<<endl;
}
void insert_at_head(Node* &head, int v)
{
    Node* newnode=new Node(v);
    newnode->next=head;
    head=newnode;
    cout<<endl<<endl<<"Inserted At head"<<endl<<endl;
}
void delete_from_pos(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    cout<<endl<<endl<<"Node Deleted"<<endl<<endl;
}
int main()
{
    Node* head=NULL;
    cout<<endl<<"Choose A Option -"<<endl<<endl;
    while(true)
    {
        cout<<"Option 1 : Insert at Tail"<<endl;
        cout<<"Option 2 : Print Linked List"<<endl;
        cout<<"Option 3 : Insert At Any Position"<<endl;
        cout<<"Option 4 : Insert At Head"<<endl;
        cout<<"Option 5 : Delete From List"<<endl;
        cout<<"Option 6 : Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please Enter A value : ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,v;
            cout<<"Enter Position : ";
            cin>>pos;
            cout<<"Enter Value : ";
            cin>>v;
            if(pos==0)
            {
                insert_at_head(head,v);
            }
            else
            {
                insert_at_any_pos(head,pos,v);
            }
        }
        else if(op==4)
        {
            int v;
            cout<<"Enter Value"<<endl;
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter Position : ";
            cin>>pos;
            delete_from_pos(head,pos);
        }
        else if(op==6)
        {
            break;
        }
    }
    return 0;
}