#include<iostream>
using namespace std;
//*****************************************Structure of element********************************************
struct element{
    int data;
    element *next;
};
//*****************************************Structure of list***********************************************
struct list{
    int n;
    element *head;
    element *tail;
};
//*****************************************Creating empty list**********************************************
list *CreateEmptyList(){
    list *ls;
    ls = new list();
    ls->n=0;
    ls->head=NULL;
    ls->tail=NULL;
    return ls;
}
//************************************Insert at the begining of the list***********************************
void InsertBeginList(list *ls, int newData){
    element *e;
    e = new element();
    e->data = newData;
    if(ls->n==0){
        ls->head = e;
        ls->tail = e;
        e->next = NULL;
    }
    else{
        e->next = ls->head;
        ls->head = e;
    }
    ls->n = ls->n+1;
}
//********************************************************************************************************
struct information{
    int data;
    information *next;
};
struct list{
    int n;
    information *head;
    information *tail;
};
list *createEmptyList(){
    
}




//*******************************************Insert at the end of the list*********************************
void InsertEndList(list *ls, int newData){
    if(ls->n==0){
        InsertBeginList(ls, newData);
    }
    else{
        element *e;
        e = new element();
        e->data = newData;
        e->next = NULL;
        e->tail->next = e;
        ls->n = ls->n+1;
    }
}
//**************************************Insert at the specific position*************************************
void insertToposition(list *ls, int newData, int position){
    if(position == 0){
        InsertBeginList(ls);
    }
    else if(position = ls->n+1){
        InsertEndList(ls,newData);
    }
    else if(position >= ls->n+2){
        cout<<"we cannot add more data because there are too much position";
    }
    else{
        element *t;
        t = ls->head;
        for(int k=1;k<position-1;k++){
            t = t->next;
        }
        element *e;
        e = new element;
        e->data = newData;
        e->next = t->next;
        t->next = e;
        ls->n = ls->n+1;
    }
}
//******************************************Delete data at begining of list********************************
void deleteBegining(list *ls){
    element *tmp;
    tmp=ls->head;
    ls->head = ls->head->next;
    delete tmp;
    if(ls->n==0){
        ls->tail = NULL;
    }
    else{
        ls->n = ls->n-1;
    }
}
//******************************************Delete data at end of the list**********************************
void deleteEnd(list *ls){
    element *tmp;
    if(ls->n==1){
        deleteBegining(ls);
    }
    else{
        tmp = ls->head;
        for(int i=1;i<=ls->n-2;i++){
            tmp = tmp->next;
        }
        ls->tail = tmp;
        tmp = tmp->next;
        ls->tail->next=NULL;
        delete tmp;
        ls->n = ls->n-1;
    }
}
//****************************************************Destroy elelment in the list*************************
void destroyList(list *ls){
    while(ls->head){
        deleteBegining(ls);
    }
}
//******************************************Delete at Specific position*************************************
void deleteSpecificPosition(list *ls, int position){
    if(position == 0){
        cout<<"we cannot delete element in the list"<<endl;
    }
    else if()
}


//***************************************************Traversal List******************************************
void traversalList(){
    element *tmp;
    if(head==NULL){
        cout<<" list is empty.";
        return;
    }
    tmp = head;
    while(tmp!=NULL{
        cout<<"Data = "<<tmp->data<<endl; 
    }
}
//******************************************Search data in the list*******************************************
void SearchData(list *ls, int x){
    element *tmp;
    tmp = ls->head;
    int counter = 0;
    while(tmp!=NULL){
        if(tmp->data==x){
            counter = counter+1;
        }
        tmp = tmp->next;
    }
    if(counter == 0){
        cout<<"There are no data in the list"<<endl;
    }
    else{
        cout<<"data found"<<endl;
        count<<counter<<" times"<<endl;
    }
}
//*******************************************Reversed a linked list****************************************
void Reverse(){
    element *current = head;
    element *previous = NULL, *next = NULL;
    while(current!=NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
        head = previous;
    }
}
//******************************************Display data in the list***************************************
void DisplayList(list *ls){
    element *tmp;
    tmp = ls->head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
}
//******************************************************Main Function**************************************
int main(){
//Create List & Insertion at begining
    list *l1;
    l1 = CreateEmptyList();
    InsertBeginList(l1,3);
    InsertBeginList(l1,4);
    InsertBeginList(l1,5);
    InsertBeginList(l1,6);
    DisplayList(l1);
    cout<<l1->n<<endl;
//Insert at the specific position in the list
    element *head = NULL;
    head = getElement(3);
    head->next = getElement(5);
    head->next->next = getElement(8);
    head->next->next = getElement(10);
    size = 4;
    cout<<"linked list before insertion"<<endl;
    display(head);
    int data = 12, position = 3;
    InsertSpecificPosition(&head, position, data)
    cout<<" Linked list after insertion of 12 at position 3: ";
//Traversal the element in the list
    int n;
    cout<<"Enter the total number of nodes: ";  cin>>n;
    CreateEmptyList(n)
    return 0;
}
//*******************************************************************************************************************
//*******************************************************************************************************************
//Double Linked List: 
struct element{
    int data;
    element *next;
};
struct list{
    int n;
    element *head;
    element *tail;
};
list *createEmptyList(){
    list *ls;
    ls = new list();
    ls->n = 0;
    e->head = NULL;
    e->tail = NULL;
    return ls;
}
void insertBegin(list *ls, int newData){
    element *e;
    e = new element;
    e->data = newData;
    if(ls->n==0){
        ls->head = e;
        ls->tail = e;
        e->next = NULL;
    }
    else{
        e->next = ls->head;
    }
    ls->n = ls->n+1;
}
void insertBegin(list *ls, int newData){
    element *e;
    e = new element;
    e->data = newData;
}



























































































