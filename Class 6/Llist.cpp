#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node{
    int data;
    Node *next;
};

int main()
{

    Node *HEAD, *newNode, *temp;

    HEAD = new node;
    printf("Enter Head Node\n");
    scanf("%d", &HEAD->data);

    int x;
    printf("Enter Next Data\n");
    scanf("%d", &x);
    newNode = HEAD;

    while(x > 0)
    {
        temp = new node; //declare a temporary instance of node;
        temp->data = x; // set the data of the instance to x;
        newNode->next = temp;  // set the new node next  to temp address
        newNode = newNode->next;
        printf("Enter Next Value : \n");
        scanf("%d",&x);
    }

    newNode->next = NULL;
    newNode = HEAD;
    printf("The List contains....");
    while(newNode)
    {
        printf("\nLocation of node : %x and location of data : %x  and data is %d next node %x",newNode, &newNode->data, newNode->data, newNode->next);
        newNode = newNode->next;
    }


    return 0;
}
