//Linked List Operations

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;

};

struct node* head = NULL;

void insertAtBeg(int data){
	node* newnode = new node();
    newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data=data;
    newnode->next=head;
    head = newnode;
    cout<<"\n"<< newnode->data<<" Inserted at Start."<<endl;
}

void insertAtEnd(int data){
    node* newnode = new node();
    newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data=data;
    newnode->next=NULL;
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    cout<<"\n"<< newnode->data<<" Inserted at End."<<endl;
}

void insertAtPos(int data,int x){
	node* newnode = new node();
    newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data=data;
    node* temp=head;
    for(int i=1;i<x;i++){
        if(temp->next!=NULL){
            temp=temp->next;
        }
    }
    newnode->next=temp->next;
    temp->next=newnode;
    cout<<"\n"<< newnode->data<<" Inserted at "<<x<<"."<<endl;
}

void Delete(int x,int n){
    node *temp = head;
    node *prev;
    if(temp == NULL){
        return;
    }
    if(x == 1){
        head = temp->next; 
        free(temp);     
        return;
   }
   for(int i=1 ; i!=x ; i++){
    prev = temp;
    temp = temp->next;
    }

   if(temp == NULL)
   {
      cout<<"No Element present\n";
      return;
   }
   else
   {
      prev->next = temp->next;
      free(temp);
   }
    
}

void Display(){
	struct node* temp;
    if(head==NULL){
        cout<<"The List is Empty."<<endl;
    }
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}



int main(){

    int data,input,x,n=0;


    while(true){
        cout<<"-----Linked List Operations:-----"<<endl;
        cout<<"1)Insert at Start"<<endl;
        cout<<"2)Insert at End"<<endl;
        cout<<"3)Insert at Position"<<endl;
        cout<<"4)Delete"<<endl;
        cout<<"5)Display"<<endl;
        cout<<"6)Exit"<<endl;
        cout<<"Input: ";cin>>input;cout<<endl;

        if(input==1){
            n++;
            cout<<"Enter element to be inserted at the Start:";cin>>data;
            insertAtBeg(data);
            cout<<"\n";
        }

        else if(input==2){
            n++;
            cout<<"Enter element to be inserted at the End:";cin>>data;
            insertAtEnd(data);
            cout<<"\n";     
        }

        else if(input==3){
            n++;
            cout<<"Enter position of element:";cin>>x;
            cout<<"Enter element to be inserted at the Position:";cin>>data;
            insertAtPos(data,x);
            cout<<"\n"; 
        }

        else if(input==4){
            cout<<"Enter position of element to be deleted: ";cin>>x;
            Delete(x,n);
            if(x>=1 && x<=n){
                n--;
            }
        }
        
        else if(input==5){
            Display();
        }

        else if(input==6){
            cout<<"\n------Done By:-------"<<endl;
            cout<<"Faisal Irfan"<<endl;
            cout<<"220071601063"<<endl;
            cout<<"B.Tech CSE - A"<<endl;
            break;
        }

        else{
            cout<<"Incorrect Input!"<<endl;
            continue;
        }
    }
    
    return 0;

}