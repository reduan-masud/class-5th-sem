#include<stdio.h>

struct list
	  {
	    int info;
	    struct list *next;
	  };

int main()
{
    struct list *p,*q,*t;
    int x;

    // এই p নোড টি হচ্ছে HEAD NODE.
    p=new list; // নোডের জন্য প্রয়োজনীয় যায়গা নিয়ে  p পয়েন্টার এর মদ্ধে রাখা হচ্ছে।
    printf("\n Enter the first value: ");
    scanf("%d",& p->info);  // নোডে কিছু  Data রাখা হলো।

    printf("\n Enter next value: ");
    scanf("%d",& x); // নতুন নোডে data নেওয়ার জন্য x ভেরিএবল এ কিছু Data রাখলাম।

    q=p; // লিঙ্ক লিস্ট এ সবছেয়ে প্রয়োজনীয় পয়েন্টার হচ্ছে হেড। তাই আমরা P কে কনো ভাবে আপডেট করব না।
    // তাই q = p নেওয়া হয়েছে।
    while(x>0)
	{
	   t=new list; // নতুন একটা struct list এর জন্য t এড্রেস নেওয়া হলও।
	   t->info=x; // x এর ভ্যালু t এর info রাখলাম।
	   q->next=t; //এখন Head Node এর Next এ নতুন নোডের এড্রেস রাখলাম।
	   q=q->next; // এখন q কে  next নোডে নিয়ে গেলাম।
	   printf("\n Enter next value: ");
	   scanf("%d",& x);
	}
    q->next=NULL;

    q=p; // t=p;

    printf("\n The list contains........\n\n");
    while(q)
	{
	  printf(" %d ",q->info);
	  q=q->next;
	}

}

