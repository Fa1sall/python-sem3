//Queue Operations

#include<iostream>
using namespace std;

void Enqueue(int que[],int rear,int x){
    que[rear]=x;
}

void Dequeue(int que[],int front,int n){
    for(int i=front;i<n-1;i++){
        que[i]=que[i+1];
    }
}

void Display(int que[],int n){
    for(int i=0;i<n;i++){
        cout<<que[i]<<" ";
    }
    cout<<endl;
}

void Peek(int que[],int front,int rear){
    cout<<"Front element: "<<que[front]<<endl;
    cout<<"Rear element: "<<que[rear]<<endl;cout<<"\n";
}

int main(){
    int size,input,x,n=0,front=0,rear=0;

    cout<<"Enter size of Queue:";cin>>size;cout<<endl;
    int que[size];

    while(true){
        cout<<"-----Queue Operations:-----"<<endl;
        cout<<"1)Enqueue "<<"2)Dequeue"<<endl;
        cout<<"3)Peek "<<"4)Display"<<endl;
        cout<<"5)Exit"<<endl;
        cout<<"Input: ";cin>>input;cout<<endl;

        if(input==1){
            cout<<"Enter element to be Enqueued:";
            cin>>x;
            if(rear==size-1){
                cout<<"Queue Overflow Error!"<<endl;cout<<"\n";
            }
            else if(n==0){
                n++;
                Enqueue(que,rear,x);
            }
            else{
                n++;
                rear++;
                Enqueue(que,rear,x);
            }
        }

        else if(input==2){
            if(n==0){
                cout<<"Queue Underflow Error!"<<endl;cout<<"\n";
            }
            else{
                Dequeue(que,front,n);
                cout<<"Element dequeued."<<endl;
                n--;
            }
        }

        else if(input==3){
            Peek(que,front,rear);
        }

        else if(input==4){
            Display(que,n);
        }

        else if(input==5){
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