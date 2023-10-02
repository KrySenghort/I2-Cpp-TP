#include<iostream>
#include<conio.h>
using namespace std;
class tree{
	private:
	struct node{
		int data;
		node *left;
		node *right;
	};
	public:
	node *root = NULL;
	void insert(int &n);
	void search();
	void preorder(node *ptr);
	void inorder(node *ptr);
	void postorder(node *ptr);
	void del();
};
	void tree::insert(int &n){
		node *new_node = new node;
		new_node -> data = n;
		new_node -> left = NULL;
		new_node -> right = NULL;
		if(root == NULL){
			root = new_node;
			cout<<"\n\n "<<n<<" Value Inserted Successfully...";
		}
		else{
			node *ptr = root;
			node *pre = NULL;
			while(ptr != NULL){
				if(n > ptr -> data){
					pre = ptr;
					ptr = ptr -> right;
					if(ptr == NULL){
						pre -> right = new_node;
						cout<<"\n\n "<<n<<" Value Inserted Successfully...";
					}
				}
				else if(n < ptr -> data){
					pre = ptr;
					ptr = ptr -> left;
					if(ptr == NULL){
						pre -> left = new_node;
						cout<<"\n\n "<<n<<" Value Inserted Successfully...";
					}
				}
				else{
					cout<<"\n\n "<<n<<" Value is Duplicated...";
					delete new_node;
					break;
				}
			}
		}
	}
	void tree::search(){
		system("cls");
		int n,found=0;
		cout<<"\n\n\t\t\t\t Search Record";
		if(root == NULL)
		cout<<"\n\n Tree is Empty...";
		else{
			cout<<"\n\n Enter Value : ";
			cin>>n;
			node *ptr = root;
			while(ptr != NULL){
				if(n == ptr -> data){
					cout<<"\n\n "<<n<<" Value is Found...";
					found++;
					break;
				}
				else if(n > ptr -> data){
					ptr = ptr -> right;
				}
				else{
					ptr = ptr -> left;
				}
			}
			if(found == 0)
			cout<<"\n\n "<<n<<" Value Can't Found...";
		}
	}
	void tree::preorder(node *ptr){
		if(root == NULL)
		cout<<"\n\n Tree is Empty...";
		else{
			if(ptr != NULL){
				cout<<"\n "<<ptr -> data;
				preorder(ptr -> left);
				preorder(ptr -> right);
			}
		}
	}
	void tree::inorder(node *ptr){
		if(root == NULL)
		cout<<"\n\n Tree is Empty...";
		else{
			if(ptr != NULL){
				inorder(ptr -> left);
				cout<<"\n "<<ptr -> data;
				inorder(ptr -> right);
			}
		}
	}
	void tree::postorder(node *ptr){
		if(root == NULL)
		cout<<"\n\n Tree is Empty...";
		elses{
			if(ptr != NULL){
				postorder(ptr -> left);
				postorder(ptr -> right);
				cout<<"\n "<<ptr -> data;
			}
		}
	}
	void tree::del(){
		system("cls");
		int n;
		cout<<"\n\n\t\t\t\tDelete Record";
		if(root == NULL)
		cout<<"\n\n Tree is Empty....";
		else{
			cout<<"\n\n Enter Value : ";
			cin>>n;
			if(n == root -> data){
				if(root -> right == NULL && root -> left == NULL){
					node *ptr = root;
					root = NULL;
					delete ptr;
					cout<<"\n\n Delete Value : "<<n;
				}
				else if(root -> right == NULL && root -> left != NULL){
					node *ptr = root;
					root = root -> left;
					delete ptr;
					cout<<"\n\n Delete Value : "<<n;
				}
				else if(root -> right != NULL && root -> left == NULL){
					node *ptr = root;
					root = root -> right;
					delete ptr;
					cout<<"\n\n Delete Value : "<<n;
				}
				else{
					node *ptr = root -> left;
					node *pre = root -> right;
				    if(ptr -> left == NULL && ptr -> right != NULL || ptr -> left != NULL && ptr -> right == NULL){
					   	node *pt = root;
					   	root = ptr;
					   	if(root -> left != NULL){
					   	 root -> right = pt -> right;
						 delete pt;
						 cout<<"\n\n Delete Value : "<<n;
						}
						else{
							root -> left = root -> right;
							root -> right = pt -> right;
							delete pt;
							cout<<"\n\n Delete Value : "<<n;
						}
					}
					else if(pre -> left == NULL && pre -> right != NULL || pre -> left != NULL && pre -> right == NULL){
					    node *pt = root;
						root = pre;
						if(root -> right != NULL){
						    root -> left = pt -> left;
							delete pt;
							cout<<"\n\n Delete Value : "<<n;
						}
						else{
							root -> right = root -> left;
							root -> left = pt -> left;
							delete pt;
							cout<<"\n\n Delete Value : "<<n;
						}
					}
				}
			}
			else if(n > root -> data){
				node *ptr = root -> right;
				node *pre = root;
				while(ptr != NULL){
					if(ptr -> data == n){
					 	if(ptr -> right == NULL && ptr -> left == NULL){
					 	    	if(ptr -> data > pre -> data){
					 	    		pre -> right = NULL;
					 	    		delete ptr;
					 	    		cout<<"\n\n Delete Value : "<<n;
					 	    		break;
								}
								else{
									pre -> left = NULL;
									delete ptr;
									cout<<"\n\n Delete Value : "<<n;
									break;
								}
						}
						else if(ptr -> left == NULL && ptr -> right != NULL){
							if(ptr -> data > pre -> data){
								pre -> right = ptr -> right;
								delete ptr;
								cout<<"\n\n Delete Value : "<<n;
								break;
							}
							else{
								pre -> left = ptr -> right;
								delete ptr;
								cout<<"\n\n Delete Value : "<<n;
								break;
							}
						}
						else if(ptr -> left != NULL && ptr -> right == NULL){
						     if(ptr -> data > pre -> data){
								pre -> right = ptr -> left;
								delete ptr;
								cout<<"\n\n Delete Value : "<<n;
								break;
							}
							else{
								pre -> left = ptr -> left;
								delete ptr;
								cout<<"\n\n Delete Value : "<<n;
								break;
							}
						}
						else{
						    node *pt = ptr -> left;
							node *p = ptr -> right;
							if(ptr -> data > pre -> data)
							{
								if(pt -> left == NULL && pt -> right == NULL)
								{
									pre -> right = ptr -> left;
									pt -> right = ptr -> right;
								    delete ptr;
								    cout<<"\n\n Delete Value : "<<n;
								    break;
							    }
							    else if(p -> left == NULL && p -> right == NULL){
							         pre -> right = ptr -> right;
									 p -> left = ptr -> left;
									 delete ptr;
									 cout<<"\n\n Delete Value : "<<n;
									 break;
								}
						   }
						   else{
						   	    if(pt -> left == NULL && pt -> right == NULL){
									pre -> left = ptr -> left;
									pt -> right = ptr -> right;
								    delete ptr;
								    cout<<"\n\n Delete Value : "<<n;
								    break;
							    }
							    else if(p -> left == NULL && p -> right == NULL){
							         pre -> left = ptr -> right;
									 p -> left = ptr -> left;
									 delete ptr;
									 cout<<"\n\n Delete Value : "<<n;
									 break;
								}
						   }
					    }
					}
					else if(n > ptr -> data){
						pre = ptr;
					    ptr = ptr -> right;
					}
					else{
						pre = ptr;
						ptr = ptr -> left;
					}
			    }
		    }
		    else{
		    	node *ptr = root -> left;
				node *pre = root;
				while(ptr != NULL){
					if(ptr -> data == n){
					 	if(ptr -> right == NULL && ptr -> left == NULL){
					 	    	if(ptr -> data > pre -> data){
					 	    		pre -> right = NULL;
					 	    		delete ptr;
					 	    		cout<<"\n\n Delete Value : "<<n;
					 	    		break;
								}
								else{
									pre -> left = NULL;
									delete ptr;
									cout<<"\n\n Delete Value : "<<n;
									break;
								}
						}
						else if(ptr -> left == NULL && ptr -> right != NULL){
							if(ptr -> data > pre -> data){
								pre -> right = ptr -> right;
								delete ptr;
								cout<<"\n\n Delete Value : "<<n;
								break;
							}
							else{
								pre -> left = ptr -> right;
								delete ptr;
								cout<<"\n\n Delete Value : "<<n;
								break;
							}
						}
						else if(ptr -> left != NULL && ptr -> right == NULL){
						     if(ptr -> data > pre -> data){
								pre -> right = ptr -> left;
								delete ptr;
								cout<<"\n\n Delete Value : "<<n;
								break;
							}
							else{
								pre -> left = ptr -> left;
								delete ptr;
								cout<<"\n\n Delete Value : "<<n;
								break;
							}
						}
						else{
						    node *pt = ptr -> left;
							node *p = ptr -> right;
							if(ptr -> data > pre -> data){
								if(pt -> left == NULL && pt -> right == NULL)
								{
									pre -> right = ptr -> left;
									pt -> right = ptr -> right;
								    delete ptr;
								    cout<<"\n\n Delete Value : "<<n;
								    break;
							    }
							    else if(p -> left == NULL && p -> right == NULL)
							    {
							         pre -> right = ptr -> right;
									 p -> left = ptr -> left;
									 delete ptr;
									 cout<<"\n\n Delete Value : "<<n;
									 break;
								}
						   }
						   else{
						   	    if(pt -> left == NULL && pt -> right == NULL){
									pre -> left = ptr -> left;
									pt -> right = ptr -> right;
								    delete ptr;
								    cout<<"\n\n Delete Value : "<<n;
								    break;
							    }
							    else if(p -> left == NULL && p -> right == NULL){
							         pre -> left = ptr -> right;
									 p -> left = ptr -> left;
									 delete ptr;
									 cout<<"\n\n Delete Value : "<<n;
									 break;
								}
						   }
					    }
					}
					else if(n > ptr -> data){
						pre = ptr;
					    ptr = ptr -> right;
					}
					else{
						pre = ptr;
						ptr = ptr -> left;
					}
			   }
		    }
		}
	}
main(){
	tree t;
	int choice,n;
	p:
	system("cls");
	cout<<"\n\n\t\t\t\tControl Panel";
	cout<<"\n\n 1. Insert Record";
	cout<<"\n 2. Search Record";
	cout<<"\n 3. Pre Order Traversal";
	cout<<"\n 4. In Order Traversal";
	cout<<"\n 5. Post Order Traversal";
	cout<<"\n 6. Delete Record";
	cout<<"\n 7. Exit";
	cout<<"\n\n Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			system("cls");
			cout<<"\n\n\t\t\t\tInsert Record";
			cout<<"\n\n Enter Value : ";
			cin>>n;
			t.insert(n);
			break;
		case 2:
			t.search();
			break;
		case 3:
			system("cls");
			t.preorder(t.root);
			break;
		case 4:
			system("cls");
			t.inorder(t.root);
			break;
		case 5:
			system("cls");
			t.postorder(t.root);
			break;
		case 6:
			t.del();
			break;
		case 7:
			exit(0);
		default:
			cout<<"\n\n Invalid Value...Please Try Again...";
	}
	getch();
	goto p;
}







