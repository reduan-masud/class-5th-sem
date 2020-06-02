
#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node{
    int data;
    Node *next;
};


void searchFromList(Node *h, int val)
{


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
    newNode = HEAD;
    printf("The List contains....\n");
    while(newNode)
    {
        //printf("\nLocation of node : %x and location of data : %x  and data is %d next node %x",newNode, &newNode->data, newNode->data, newNode->next);
        printf("%d\n", newNode->data);
        newNode = newNode->next;
    }

    printf("Enter the value want to find\n");
    int f;
    scanf("%d", &f);
     Node *s;
    s = h;
    int a = 0;
    int fo = 0;
    while(s)
    {
        pos++;
        if(s->data == fo)
        {
            fo = 1;
            address = &s->data;
            break;
        }
        s = s->next;

    }

    if(fo)
    {
        printf("Found...\n");
        printf("Position : %d\n", a);
    }
    else
    {
        printf("Not Found..\n");
    }

    return 0;
}
