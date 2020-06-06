#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node
{
    int data;
    Node *next;
};

void searchFromList(Node *h, int val)
{
    Node *s;
    s = h;
    int pos = 0;
    bool found = 0;
    int *address;
    while(s)
    {
        pos++;
        if(s->data == val)
        {
            found = 1;
            address = &s->data;
            break;
        }
        s = s->next;

    }

    if(found)
    {
        printf("Found...\n");
        printf("Position : %d\n", pos);
        printf("address : %x", address);
	printf("\n");

    }
    else
    {
        printf("Not Found..\n");
    }

}

void insertNode(Node *head, int position, int value)
{
    Node *newNode = new node;
    newNode->data = value;
    Node *cNode = head;
    Node *temp;
    int pos = 1;
    if(position == 1)
    {
        temp = cNode -> next;
        cNode ->next = newNode;
        newNode->next = temp;
        swap(head->data, newNode->data);
    }
    else
    {
        while(cNode)
        {

            if(pos == position)
            {
                temp = cNode->next;
                cNode->next = newNode;
                newNode->next = temp;
                break;

            }
            pos++;
            cNode = cNode->next;

        }
    }

}

void showList(Node *head)
{
    
	printf("Printing List ... ... ..\n");
    Node *it = head;
    while(it)
    {
        printf("%d\n", it->data);
        it = it->next;
    }
}

int main()
{

    Node *HEAD, *newNode, *temp;


    HEAD = new node; // HEAD এর মধ্যে নতুন একটি এড্রেস এলোকেট করা হলো
    printf("Enter Head Node\n");
    scanf("%d", &HEAD->data); // HEAD এর date তে কিছু ভ্যালু রাখা হলো

    int x;
    printf("Enter Next Data\n");
    scanf("%d", &x); // নতুন নোডে ভ্যালু রাখার জন্য x এ একটি ভ্যালু রাখা হলো।


    newNode = HEAD; //যেহেতু লিঙ্ক লিস্ট এ সব কাজ HEAD নোড থেকে শুরু করতে হবে তাই অন্য একটি নোডে HEAD কে রাখলাম।

    while(x > 0)
    {
        temp = new node; // নতুন একটি ভ্যালু রাখার জন্য নতুক করে আবার প্রয়োজনীয় এড্রেস এলোকেট করে নিলাম।
        temp->data = x; // নতুন নোডে আগের থেকে নেওয়া x এর ভ্যালু টা রেখে দিলাম।
        newNode->next = temp;  // set the new node next  to temp address
        newNode = newNode->next;


        printf("Enter Next Value : \n");
        scanf("%d",&x);
    }

    newNode->next = NULL;


    showList(HEAD);
    printf("Enter the position want to insert\n");
    int in, val;
    scanf("%d", &in);
    printf("Enter the value want to insert\n");
    scanf("%d", &val);
    insertNode(HEAD, in, val);

    showList(HEAD);


    printf("Enter the value want to find\n");
    int f;
    scanf("%d", &f);
    searchFromList(HEAD, f);

    return 0;
}
