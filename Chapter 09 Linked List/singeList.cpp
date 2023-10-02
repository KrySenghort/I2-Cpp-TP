#include<iostream>
#include<conio.h>
using namespace std;
class singly_List{
private:
    struct node{
        int data;
        node *next_add;
    };
    node *head = NULL;
public:
    void insert(int &n);
    void display();
    void search();
    void update();
    void del();
};
void singly_List::insert(int &n){
    node *new_node = new node;
    new_node->data = n;
    new_node->next_add = NULL;
    if(head == NULL){
        head = new_node;
    }else{
        node *ptr = head;
        while(ptr->next_add != NULL){
                ptr = ptr->next_add;

        }
        ptr->next_add = new_node;
    }
}
void singly_List::display(){
    cout<<"\n\n\t\t\t Display Record...";
    if(head == NULL){
        cout<<"\n\n Link List is Empty..."<<endl;
    }else{
        node *ptr = head;
        while(ptr != NULL){
                cout<<"\n Value : "<<ptr->data;
                ptr = ptr->next_add;
        }
    }
}
void singly_List::search(){
    int n,counter = 0;
    cout<<"\n\n\t\t\t Search Record";
    if(head == NULL){
        cout<<"\n\n Link List is empty...";
    }else{
        cout<<"\n\n Search value :  ";
        cin>>n;
        node *ptr = head;
        while(ptr != NULL){
                if(ptr->data == n){
                    cout<<"\n\n value is found "<<n;
                    counter++;
                }
                ptr = ptr->next_add;
        }
    }
    if(counter == 0){
        cout<<"\n\n Value "<<n<<" is not found..."<<endl;
    }else{
        cout<<" \n "<<n<<" Value found ..."<<endl;
    }
}
void singly_List::update(){
    system("cls");
    int n,counter = 0;
    cout<<"\n\n\t\t\t Update Record ";
    if(head == NULL){
        cout<<"\n\n Link List is Empty...";
    }else{
        cout<<"\n\n Value For Update : ";
        cin>>n;
        node *ptr = head;
        while(ptr != NULL){
            if(ptr->data == n){
                    cout<<"\n\n New Value : ";
                    cin>>n;
                    ptr->data = n;
                    counter++;
            }
            ptr = ptr->next_add;
        }
    }
    if(counter == 0){
        cout<<"\n\n Value "<<n<<" update not successful..."<<endl;
    }else{
        cout<<" \n "<<n<<" Value successful ..."<<endl;
    }
}
void singly_List::del(){
    system("cls");
    int n,counter = 0;
    if(head == NULL){
        cout<<"\n\n Link list is Empty...";
    }else{
        cout<<"\n\n Value For Delete : ";
        cin>>n;
        if(n == head->data){
                node *ptr = head;
                head = ptr->next_add;
                cout<<"\n\n Node is Delete...";
                delete ptr;
                counter++;
        }else {
            node *ptr = head;
            node *pre = head->next_add;
            while(ptr != NULL){
                if(n == ptr->data){
                        pre->next_add = pre->next_add;
                        cout<<"\n\n Node is Delete...";
                        counter++;
                        delete ptr;
                        break;
                }
                pre = ptr;
                ptr = ptr->next_add;
            }
        }
    }
    if(counter == 0){
        cout<<"\n\n Record Not Found ...";
    }else{
        cout<<"\n\n Delete successful ";
    }
}
int main(){
    int n,choice;
    singly_List s;
    p:
    cout<<"\n\n\t\t\t Control Panel";
    cout<<"\n\n 1. Insert Record ";
    cout<<"\n\n 2. Display Record";
    cout<<"\n\n 3. Search Record";
    cout<<"\n\n 4. Update Record";
    cout<<"\n\n 5. Delete Record";
    cout<<"\n\n 6. Exit ";
    cout<<"\n\n Enter your choice : ";
    cin>>choice;
    switch(choice){
        case 1:{
            system("cls");
            cout<<"\n\n\t\t\t Insert Record ";
            cout<<"\n\n Enter your choice : ";
            cin>>n;
            s.insert(n);
        }break;
        case 2:{
            system("cls");
            s.display();
        }break;
        case 3:{
            system("cls");
            s.search();
        }break;
        case 4:{
            s.update();
        }break;
        case 5:{
            s.del();
        }break;
        case 6:{
            exit(0);
        }break;
        default:{
            cout<<"\n\n Invalid Choice...";
        }
    }
    goto p;
    getch();
    return 0;
}
