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
        printf("%d\n", it->data);
        it = it->next;
    }
}

void pushBack(Node *head, Node *lastNode, int value)
{
    Node *newNode = new node;
    lastNode->next = newNode;
    newNode->next = NULL;
}

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
        temp = new node;
        temp->data = x;
        newNode->next = temp;
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


   // printf("Enter the value want to find\n");
   // int f;
   // scanf("%d", &f);
   // searchFromList(HEAD, f);

    return 0;
}
