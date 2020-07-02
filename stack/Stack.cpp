#include <bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

class Stack{
private:
    Node *Head;
    Node *Tail;
    int count;

public:
    Stack()
    {
        this->Head = NULL;
        this->Tail = NULL;
        this->count = 0;

    }

    void push(int);
    void pop();
    void top();
};

void Stack::push(int d)
{
    if(this->Head == NULL)
    {
        Head = new node;
        Head -> data = d;
        Tail = Head;
        Tail -> next = NULL;
        this->count++;
    }
    else
    {
        Node *n = new node;
        n -> data = d;
        Tail -> next = n;
        Tail =  n;
        Tail -> next = NULL;
        this->count++;
    }
}


void Stack::top()
{
    if(this->count == 0)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<this->Tail -> data<<endl;
    }
}

void Stack::pop()
{
    if(this->count == 0)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else if(this->count == 1)
    {
        Head = NULL;
        Tail = NULL;
        this->count--;
    }
    else
    {
        Node *n = Head;
        while(n -> next != Tail)
        {
            n = n -> next;
        }
        Tail = n;
        free(n -> next);
        this->count--;

    }


}
int main()
{


    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.top();
    s.pop();
    s.top();
    s.pop();
    s.top();
    s.pop();
    s.top();
    s.pop();
    
    return 0;
}
