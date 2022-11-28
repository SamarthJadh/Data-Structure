#include<iostream>
#include<string>
using namespace std;
struct newstack
{
int data;
int newstack *next;
}

class stack
{
public:
newstack *top;
void creat_stack();
void push();
void pop();
bool isEmpty();
int top_stack();
};
void stack :: create_stack()
{
top=NULL;
}
void stack *newnode;
newnode=new(newnode);
if(newnode==NULL)
cout<<"cannot Allocate the memory!";
newnode->data=item;
newnode->next=top;
top=newnode;
}

bool stack::isEmpty()
{
return(top==NULL);
}
int stack::pop()
{
nodestack *delnode;
if isEmpty())
{
cout<<"stack is empty";
return 1;
}
else
{
delnode=top;
top=delnode->next;
delete(delnode);
}return 0;
}
int main()
{char input[20];
char ch:
int i,f,flag=0;
cout<<"enter the input strin";
cin>>input;
stack s;
s.creatstack();
for(i=0;input[i]!='\0';i++)
{
ch=input[i];
if(ch=='(')
s.push(ch);
else
if(ch==')')
flag=s.pop();
}
if(s.isEmpty()and flag==0)
cout<<"well formedness of paranthesis";
else
cout<<"not well formedness of paranthesis";
return 0;
}

