// Doubly Linked List in C++.
#include<iostream>
#include<conio.h>
using namespace std;
class linklist
{
	private:
	struct node
	{
		int data;
		node *pre;
		node *next;
	};
	node *head = NULL;
	node *tail = NULL;
	public:
	void insert(int &n);
	void display();
	void display_rev();
	void sum_count_avg();
	void search();
	void update();
	void del();
};

	void linklist::insert(int &n)
	{
		node *new_node = new node;
		new_node -> data = n;
		new_node -> pre = NULL;
		new_node -> next = NULL;

		if(head == NULL)
		{
			head = new_node;
			tail = new_node;
		}
		else
		{
			tail -> next = new_node;
			new_node -> pre = tail;
			tail = new_node;
		}
		cout<<"\n\n Node is Inserted Successfully...";
	}
	void linklist::display()
	{
		system("cls");
		cout<<"\n\n\t\t\t\tDisplay Record";
		if(head == NULL)
		{
			cout<<"\n\n Linked List is Empty...";
		}
		else
		{
			node *ptr = head;
			while(ptr != NULL)
			{
				cout<<"\n\n Value : "<<ptr -> data;
				ptr = ptr -> next;
			}
		}
	}
	void linklist::display_rev()
	{
		system("cls");
		cout<<"\n\n\t\t\t\tDisplay Reverse Record";
		if(head == NULL)
		{
			cout<<"\n\n Linked List is Empty...";
		}
		else
		{
			node *ptr = tail;
			while(ptr != NULL)
			{
				cout<<"\n\n Value : "<<ptr -> data;
				ptr = ptr -> pre;
			}
		}
	}
	void linklist::sum_count_avg()
	{
		system("cls");
		int count=0,sum=0;
		float avg;
		cout<<"\n\n\t\t\t\tSum, Count, Avg Record";
		if(head == NULL)
		{
			cout<<"\n\n Linked List is Empty...";
		}
		else
		{
			node *ptr = head;
			while(ptr != NULL)
			{
				count++;
				sum = sum + ptr -> data;
				ptr = ptr -> next;
			}
			cout<<"\n\n Total Nodes : "<<count;
			cout<<"\n\n Total Value : "<<sum;
			cout<<"\n\n Avg Value : "<<sum/count;
		}
	}
	void linklist::search()
	{
			system("cls");
			int n,count=0;
			cout<<"\n\n\t\t\t\tSearch Record";
			if(head == NULL)
			{
				cout<<"\n\n Linked List is Empty...";
			}
			else
			{
				cout<<"\n\n Enter Value : ";
				cin>>n;
				node *ptr = head;
				while(ptr != NULL)
				{
					if(n == ptr -> data)
					{
						cout<<"\n\n Value "<<n<<" is Found...";
						count++;
						break;
					}
					ptr = ptr -> next;
				}
				if(count == 0)
				cout<<"\n\n Value "<<n<<" Can't Found...";
		    }
	}
	void linklist::update()
	{
		system("cls");
		int n,count=0;
		cout<<"\n\n\t\t\t\tUpdate Record";
		if(head == NULL)
		{
			cout<<"\n\n Linked List is Empty...";
		}
		else
		{
			cout<<"\n\n Enter Value : ";
			cin>>n;
			node *ptr = head;
			while(ptr != NULL)
			{
				if(n == ptr -> data)
				{
					cout<<"\n\n New Value : ";
					cin>>n;
					ptr -> data = n;
					cout<<"\n\n Record is Updated Successfully...";
					count++;
					break;
				}
				ptr = ptr -> next;
			}
			if(count == 0)
			cout<<"\n\n Value "<<n<<" Can't Found in Linked List...";
		}
	}
	void linklist::del()
	{
		system("cls");
		int n,count=0,run=0;
		cout<<"\n\n\t\t\t\tDelete Record";
		if(head == NULL)
		{
			cout<<"\n\n Linked List is Empty...";
		}
		else
		{
			cout<<"\n\n Enter Value : ";
			cin>>n;
			node *ptr = head;
			while(ptr != NULL)
			{
				count++;
				ptr = ptr -> next;
			}
			if(count == 1)
			{
				ptr = head;
				head = NULL;
				tail = NULL;
				delete  ptr;
				cout<<"\n\n Node Deleted Successfully...";
				run++;
			}
			else if(n == head -> data)
			{
				ptr = head;
				head = head -> next;
				head -> pre = NULL;
				delete ptr;
				cout<<"\n\n Node Deleted Successfully...";
				run++;
			}
			else if(n == tail -> data)
			{
				ptr = tail;
				tail = tail -> pre;
				tail -> next = NULL;
				delete ptr;
				cout<<"\n\n Node Deleted Successfully...";
				run++;
			}
			else
			{
				node *pre_ptr = head;
				ptr = head -> next;
				node *next_ptr = ptr -> next;
				while(ptr != NULL)
				{
					if(n == ptr -> data)
					{
						pre_ptr -> next = next_ptr;
						next_ptr -> pre = pre_ptr;
						delete ptr;
						cout<<"\n\n Node Deleted Successfully...";
						run++;
						break;
					}
					pre_ptr = ptr;
					ptr = next_ptr;
					next_ptr = next_ptr -> next;
				}
			}
			if(run == 0)
			cout<<"\n\n Value Can't Found in Linked List...";
		}
	}
main()
{
	int choice,n;
	linklist l;
	p:
	system("cls");
	cout<<"\n\n\t\t\t\t Control Panel";
	cout<<"\n\n 1. Insert Record";
	cout<<"\n 2. Display Record";
	cout<<"\n 3. Display Reverse Record";
	cout<<"\n 4. Sum, Count, Avg Record";
	cout<<"\n 5. Search Record";
	cout<<"\n 6. Update Record";
	cout<<"\n 7. Delete Record";
	cout<<"\n 8. Exit";
	cout<<"\n\n Enter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			system("cls");
			cout<<"\n\n\t\t\t\t Insert Record";
			cout<<"\n\n Enter Value : ";
			cin>>n;
			l.insert(n);
			break;
		case 2:
			l.display();
			break;
		case 3:
			l.display_rev();
			break;
		case 4:
			l.sum_count_avg();
			break;
		case 5:
			l.search();
			break;
		case 6:
			l.update();
			break;
		case 7:
			l.del();
			break;
		case 8:
			exit(0);
		default:
			cout<<"\n\n Invalid Value...Please Try Again...";
	}
	getch();
	goto p;
}

