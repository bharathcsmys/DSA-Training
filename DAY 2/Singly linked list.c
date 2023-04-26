#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(){
        next=NULL;
    }
};
void insertatfront(node* &head)
{
    node* n=new node();
    int val;
    cout<<"enter the data"<<endl;
    cin>>val;
    n->data=val;
    if(head==NULL)
    {
        head=n;
        cout<<"the data\t"<<val<<"\thas been inserted"<<endl;
       return;
    }
    else
    {
    n->next=head;
    head=n;
    }
     cout<<"the data"<<val<<"has been inserted"<<endl;
}
void display(node* head)
{
    cout<<endl;
    if(head==NULL)
    {
        cout<<"nothing to display"<<endl;
    }
    else
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
    cout<<"->NULL"<<endl;
   
}
void insertatrear(node* &head)
{
    node* n=new node();
    int val;
    cout<<"enter the data"<<endl;
    cin>>val;
    n->data=val;
    if(head==NULL)
    {
        head=n;
        return;
    }
    else
    {
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
        return;
    }
}
void deletefront(node* &head)
{
    if(head->next==NULL)
    {
        delete(head);
        return;
    }
    else
    {
        node* temp=head;
        head=head->next;
        delete(temp);
    }
}
void deleterear(node* &head)
{
    if(head->next==NULL)
    {
        delete(head);
        return;
    }
    else
    {
        node* temp=head;
        node* cur=NULL;
        while(temp->next!=NULL)
        {
            cur=temp;
            temp=temp->next;
        }
        cur->next=NULL;
        delete(temp);
    }
}
void insertatpos(node* &head)
{
    int pos;
    cout<<"enter the position to insert"<<endl;
    cin>>pos;
    node* n=new node();
    int val;
    cout<<"enter the data"<<endl;
    cin>>val;
    n->data=val;
    if(pos==1)
    {
        node* temp=head;
        n->next=temp;
        head=n;
        return;
    }
    node *curr = head;

for(int i = 1;i <= pos-2 && curr != NULL; i++)
{
         curr = curr -> next;
}

if(curr == NULL)
{
         return;
}
n->next=curr->next;
curr->next=n;
return;
    
}
void deletepos(node* &head)
{
    if(head->next==NULL)
    {
        delete(head);
        return;
    }
    node* temp=head;
    int pos;
    cout<<"enter the location to delete"<<endl;
    cin>>pos;
    node* ptr=NULL;
    for(int i=0;i<pos;i++)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=temp->next;
    delete(temp);
    
}
 node* rotate(node* &head)
   {
       if(head->next==NULL)
       {
           return head;
       }
       else
       {
           node* cur=head;
           node* forw=NULL;
           node* prev=NULL;
           while(cur!=NULL)
           {
               forw=cur->next;
               cur->next=prev;
               prev=cur;
               cur=forw;
           }
           head=prev;
           return head;
           
       }
   }


int main() {
    node* head=NULL;
    display(head);
    insertatfront(head);
   // display(head);
    insertatrear(head);
    display(head);
    //deleterear(head);
    display(head);
    insertatfront(head);
    insertatfront(head);
    //deletefront(head);
    display(head);
    //insertatpos(head);
    //display(head);
    //deletepos(head);
    //display(head);
rotate(head);
display(head);
    return 0;
}
