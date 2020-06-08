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
        cout<<"Address : "<<address<<endl;
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

    int count = 0;
    while(cNode)
    {
        count++;
        cNode = cNode->next;
    }

    if(position > count+1)
    {
        cout<<"No position can not be skip"<<endl;
        exit(0);
    }

    cNode = head;

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
            pos++;
            if(cNode->next == NULL)
            {
                cNode->next = newNode;
                newNode->next = NULL;
                break;
            }
            else if(pos == position)
            {
                temp = cNode->next;
                cNode->next = newNode;
                newNode->next = temp;
                break;

            }

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
        printf("%d ", it->data);
        it = it->next;
    }
    printf("\n");
}

void insertInSortedList(Node *head, int value)
{
    Node *newNode = new node;
    Node *cNode = head;
    Node *temp;
    newNode->data = value;
    while(cNode)
    {

        if(cNode->data > value)
        {
            newNode->next = cNode->next;
            cNode->next = newNode;
            swap(cNode->data, newNode->data);
            break;
        }
        else if(cNode->next == NULL)
        {
            newNode->next = cNode->next;
            cNode->next = newNode;
            break;
        }
        cNode = cNode->next;
    }

}

void deleteNode(Node *head, int position)
{
    Node *newNode = new node;

}

int main()
{

    Node *HEAD, *newNode, *temp;

    int n;
    HEAD = new node;

    printf("Enter the umber of node you want to insert : ");
    scanf("%d", &n);
    scanf("%d", &HEAD->data);
    int x;



    newNode = HEAD;
    int pos = 1;
    while(pos < n)
    {
        scanf("%d", &x);
        temp = new node;
        temp->data = x;
        newNode->next = temp;
        newNode = newNode->next;

        //scanf("%d",&x);
        pos++;
    }

    newNode->next = NULL;

    showList(HEAD);

    while(1){
    printf("Enter the value want to insert\n");
    int in, val;
    //scanf("%d", &in);
    //if(n <= 0) break;
    scanf("%d", &val);
    if(val == -100) break;
    //insertNode(HEAD, in, val);
    insertInSortedList(HEAD, val);
    showList(HEAD);

    }



   // printf("Enter the value want to find\n");
   // int f;
   // scanf("%d", &f);
   // searchFromList(HEAD, f);

    return 0;
}
