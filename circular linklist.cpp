#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
struct node* root;
 node* new_node(int data)
{
    node* temp=new node();
    temp->data=data;
    temp->next=NULL;

    return temp;
}
void convertCircular()
{
    node* last;
    last=root;
    while(last->next)
    last =last->next;

    last->next=root;
}
void printlist()
{
    node* temp=root;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    } while (temp!=root);
    
}

void insert_at_begin(int data)
{
    if(!root)
    {
        node* temp=new node();
        temp->data=data;
        temp->next=temp;
        root=temp;
        return;
    }
    else
    {
        node* temp=new node();
        temp->data=data;
        temp->next=root;
        node* last=root;
        while(last->next!=root)
        last= last->next;

        last->next=temp;
        root=temp;
    }
}
void insert_at_end(int data)
{
if(!root){
    insert_at_begin(data);
    return;
}
else
{
    node* temp=new node();
        temp->data=data;
        temp->next=root;
        node* last=root;
        while(last->next!=root)
        last= last->next;

        last->next=temp;
       
}
}
int main()
{
    root=new_node(1);
    root->next=new_node(2);
    root->next=new_node(3);
    root->next=new_node(4);
    convertCircular();

    insert_at_begin(5);
    insert_at_begin(6);
    insert_at_end(7);
    insert_at_end(8);
    printlist();
    return 0;
}