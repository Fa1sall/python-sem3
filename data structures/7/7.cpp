<<<<<<< HEAD
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* link;

};

struct node* head = NULL;

void insertAtBeg(int data){
	node* newnode = new node();
    newnode->data=data;
    newnode->link=head;
    head = newnode;
    cout<<"\n"<< newnode->data<<" Inserted at Start."<<endl;
}

void insertAtEnd(int data){
	
}



void insertAtPos(){
	
}

void Delete(int n){
	
}

void Display(){
	struct node* temp;
    if(head==NULL){
        cout<<"The List is Empty."<<endl;
    }
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<endl;
}



int main(){

    int input,n;


    while(true){
        cout<<"-----Queue Operations:-----"<<endl;
        cout<<"1)Insert at beginning"<<endl;
        cout<<"2)Insert at end"<<endl;
        cout<<"3)Insert at position"<<endl;
        cout<<"4)Delete"<<endl;
        cout<<"5)Display"<<endl;
        cout<<"6)Exit"<<endl;
        cout<<"Input: ";cin>>input;cout<<endl;

        if(input==1){
            
        }

        else if(input==2){
            
        }

        else if(input==3){
            
        }

        else if(input==4){
            
        }
        
        else if(input==5){
        	
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
=======
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* link;

};

struct node* head = NULL;

void insertAtBeg(int data){
	node* newnode = new node();
    newnode->data=data;
    newnode->link=head;
    head = newnode;
    cout<<"\n"<< newnode->data<<" Inserted at Start."<<endl;
}

void insertAtEnd(int data){
	
}



void insertAtPos(){
	
}

void Delete(int n){
	
}

void Display(){
	struct node* temp;
    if(head==NULL){
        cout<<"The List is Empty."<<endl;
    }
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<endl;
}



int main(){

    int input,n;


    while(true){
        cout<<"-----Queue Operations:-----"<<endl;
        cout<<"1)Insert at beginning"<<endl;
        cout<<"2)Insert at end"<<endl;
        cout<<"3)Insert at position"<<endl;
        cout<<"4)Delete"<<endl;
        cout<<"5)Display"<<endl;
        cout<<"6)Exit"<<endl;
        cout<<"Input: ";cin>>input;cout<<endl;

        if(input==1){
            
        }

        else if(input==2){
            
        }

        else if(input==3){
            
        }

        else if(input==4){
            
        }
        
        else if(input==5){
        	
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
>>>>>>> b7fe851b56ecc759611f47760ca7e9ad051a7882
