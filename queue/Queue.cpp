#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

class Queue{
private:
    Node *front;
    Node *back;
    int count;
public:
    
    Queue()
    {
        front = back = NULL;
        count = 0;
    }

    void enqueue(int);
    void dequeue();
    void peek();
};


void Queue::enqueue(int in)
{
    if(front == NULL)
    {
        this->front = new node;
        this->front -> data = in;
        this->back = front;
        this->back -> next = NULL;
        count++;
    }
    else
    {
        Node *n = new node;
        n -> data = in;
        n -> next = NULL;
        back -> next = n;
        back = n;
        count++;
    }
}

void Queue::dequeue()
{

    if(count == 0)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        Node *n = front;
        front = front ->next;
        free(n);
        count--;
    }
}

void Queue::peek()
{
    if(count == 0)
        cout<<"Queue is empty"<<endl;
    else
        cout<<front -> data<<endl;
}



int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(5);

    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    return 0;
}
