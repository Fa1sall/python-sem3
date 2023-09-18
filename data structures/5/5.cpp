//Stack Operations

#include<iostream>
using namespace std;

void Display(int top,int arr[]){
    cout<<"-";
    for(int i=top; i<=0; i--){
    cout<<arr[i]<<endl;;
    }
    cout<<"-"<<endl;
}

void Push(int x,int top,int size,int arr[]){
    if(top==size){
        cout<<"Stack Overflow Error \n";
    }
    arr[top+1] = x;
}

void Pop(int top,int arr[]){
    if(top==0){
        cout<<"Stack Underflow Error \n";
    }
    else{
        top--;
    }

}

void Peek(int top,int arr[]){
    cout<<"Top ---> "<<arr[top];
}


int main(){

    int n,x,size,input;

    cout<<"Enter size of stack: "<<endl;
    cin>>size;
    int arr[size];
    int top = arr[0];
    
    while(true){
        cout<<"Stack Operations: \n";
        cout<<"Enter '1' to Display stack: \n"<<"Enter '2' to Push element: \n";
        cout<<"Enter '3' to Pop element: \n"<<"Enter '4' for Peek():\n";
        cout<<"Enter '5' for isEmpty(): \n"<<"Enter '6' for isFull()\n";
        cout<<"Press any character to exit: \n";
        cout<<"Select an option: "<<endl; 
        cin>>input;
        
        if(input==1){
            Display(n,arr);
            }
            
        else if(input==2){
            n++;
            cout<<"Enter element to be pushed:"<<endl;
            cin>>x;
            Push(x,top,size,arr);
            top++; 
            }
                
        else if(input==3){
            Pop(top,arr);
            }
            
        else if(input==4){
            Peek(top,arr);
            }
            
        else if(input==5){
            if(arr[top]=='\0'){
                cout<<"The stack is empty"<<endl;
                }
            }
        
        else if(input==6){
            if(top+1==size){
                cout<<"The stack is full"<<endl;
                }
            }
        
        else{
             cout<<"\n------Done By:-------"<<endl;
             cout<<"Faisal Irfan"<<endl;
             cout<<"220071601063"<<endl;
             cout<<"B.Tech CSE - A"<<endl;
             break;
            }
    } 
}
