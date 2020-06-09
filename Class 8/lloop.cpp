#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node{
	int data;
	Node *next;
};

class LinkedList{

private:

	Node *head;
	Node *tail;
	int count_node = 0;
	bool is_sorted = true;
public:

	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	void search_value(int d)
	{
		if(head == NULL && tail == NULL)
		{
			cout<<"warrning: there is nothing to search.."<<endl;
			return;
		}

		Node *c = head;
		bool f = false;
		int position = 0;
		while(c)
		{
			position++;
			if(c->data == d)
			{
				f = true;
				break;
			}
			c = c->next;
		}

		if(f)
			cout<<"Value found at position "<<position<<". "<<endl;
		else
			cout<<"Not found.."<<endl;
	}

	void add_node(int d)
	{

		if(count_node == 0)
		{
			Node *n = new node;
			this->head = n;
			this->head->data = d;
			this->tail = head;
			this->head->next = NULL;
		}
		else
		{
			if(is_sorted && d < tail->data)
				this->is_sorted = false;

			Node *n = new node;
			n->data = d;
			this->tail->next = n;
			this->tail = n;
			n->next = NULL;

		}
		this->count_node++;


	}

	void add_node(int pos, int val)
	{
		if(pos > count_node+1 || pos <= 0)
		{
			cout<<"warrning: node can not be insert at this position."<<endl;
			return;
		}
		Node *n = new node;
		n->data = val;
		Node *c = head;
		int pCount = 0;
		if(pos == count_node+1)
		{
			if(is_sorted && val < tail->data)
				is_sorted = false;
			n->next = NULL;
			tail->next = n;
			tail = n;
		}
		else if(pos == count_node)
		{
			if(is_sorted && val > tail->data)
				is_sorted = false;
			n->next = NULL;
			tail->next = n;
			swap(n->data, tail->data);
			tail = n;
		}
		else
		{
			while(c)
			{
				pCount++;
				if(pCount == pos)
				{
					if(is_sorted && val > c->data)
						is_sorted = false;
					n->next = c->next;
					c->next = n;
					swap(c->data, n->data);
					break;
				}
				c = c->next;

			}
		}
		this->count_node++;
		cout<<"Inserted.."<<endl;
	}

	void update_node_by_value(int u, int v)
	{
		Node *c = head;
		while(c)
		{
			if(c->data == u)
				c->data = v;
			c = c->next;
		}
		cout<<"Update complete.."<<endl;

	}

	void update_node_by_position(int p, int v)
	{

		Node *c = head;
		int pos = 0;
		while(c)
		{
			pos++;

			if(pos == p)
			{
				c->data = v;
			}
			c = c->next;
		}

		cout<<"Update complete.."<<endl;

	}

	void delete_node_by_position(int p)
	{
		Node *c = head;
		if(p == 1)
		{
			head = head->next;
		}
		else
		{
			int pos = 0;
			while(c)
			{
				pos++;
				if(c->next->next == NULL)
				{
					tail = c;
					c->next = NULL;
					break;
				}
				else if(pos+1 == p)
				{
					c->next = c->next->next;
					break;

				}
				c = c->next;

			}

		}
		count_node--;
	}

	void add_node_sorted(int val)
	{
    if(count_node == 0)
    {
      this->add_node(val);
      return;
    }

		if(!is_sorted)
		{
			cout<<"warrnint: the list must be in sorted order"<<endl;
			return;
		}

		Node *m = new node;
		m->data = val;

		Node *c = head;

		while(c)
		{
			if(m->data < c->data)
			{
				m->next = c->next;
				c->next = m;
				swap(c->data, m->data);
				this->count_node++;
				break;
			}
			else if(c->next == NULL)
            {
                c->next = m;
                m->next = NULL;
                tail = m;
                break;
            }
			c = c->next;
		}


	}

	void pop_node()
	{
		Node *c = head;
		while(c)
		{
			if(c->next->next == NULL)
			{
				tail = c;
				c->next = NULL;
				this->count_node--;
				return;
			}
			c = c->next;
		}
	}

	void show_list()
	{

		if(head == NULL && tail == NULL)
		{
			cout<<"warrning: No Node Created."<<endl;
			return;
		}
		Node *c = head;
		while(c)
		{
			cout<<c->data<<" ";
			c = c->next;
		}
		cout<<endl;
	}

	void show_node_num()
	{
		cout<<"Num of node: "<<this->count_node<<endl;
	}


	void get_head_node_addr();
	void get_tail_node_addr();
	void show_list_addr();
	void show_top();
};

void LinkedList::get_head_node_addr()
{
    cout<<this->head<<endl;
}

void LinkedList::get_tail_node_addr()
{
    cout<<this->tail<<endl;
}

void LinkedList::show_list_addr()
{
        if(head == NULL && tail == NULL)
		{
			cout<<"warrning: No Node Created."<<endl;
			return;
		}
		Node *c = head;
		while(c)
		{
			cout<<c<<" ";
			c = c->next;
		}
		cout<<endl;
}

void LinkedList::show_top()
{
    cout<<tail->data<<endl;
}
int main()
{
	LinkedList l;
	int n; cin>>n;
	while(n--)
	{
		int t; cin>>t;
		l.add_node(t);
	}
    l.show_top();
    l.pop_node();
    l.show_top();
    l.pop_node();


	return 0;
}
