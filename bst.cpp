#include<iostream>
using namespace std;
typedef struct node{
int data;
struct node *left,*right;
}root;
class tree{
root *nw;
int key;
public:
void insert(root *,int)
{
if(newnode->data>root-data)
{
if(root->right==NULL)
root->right=newnode;
else
insert(root->right,newnode);
}
else{
if(root->left==NULL)
root->left=newnode;
else
insert(root->left,newnode);
return 0;
}
}
void inorder(*root)
{
if(root!=NULL)
{
inorder(root->left)
cout<<root->data;
inorder(left->right);
}
}
void preorder(*root)
{
if(root!=NULL)
{
cout<<root->data;
preorder(root->left);
preorder(root->right);
}
}
void postorder(* root)
{
if (root!=NULL){
postorder(root->left);
postorder(root->right);
cout<<root->data;
}
}
};
int main()
{
node * newnode,
node * root==NULL;
node * root1;
tree t;
int ch,key;
do{
cout<<"\n1.Insert data\n2.Search data\n3.Inorder transversal\n4.Preorder transversal\n5.Postorder transversal\n6.Level wise\n"
cout<<"enter you choice";
cin>>ch;
switch(ch)
{
case 1:
do{
nw1=new.root();
cout<<"enter the data"; 
cin>>data1;
nw1.data->data1;
nw1.left->NULL;
nw1.right->NULL;
if(root1=NULL)
nw1=root1;
else
t.insert(root1,nw1);
}
while{
return 0;



break;
}
case 2:
cout<<"enter the key";
cin>>key;
t.search(root1,key);
break;
case 3:
t.inorder(root1);
break;
case 4:
t.preorder(root1);
break;
case 5:
t.postorder(root1);
break;
}
while
if(ch==1)
{
cout<<"enter the choice if you want to insert more data";
return 0;
}
}
