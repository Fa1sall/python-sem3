//Stack Operations

#include<iostream>
using namespace std;

void Display(int stk[],int n){
    if(n==0){
        cout<<" "<<"<-TOP"<<endl;
    }
    else if(n==1){
        cout<<stk[0]<<"<-TOP"<<endl;
    }
    else{
        cout<<stk[n-1]<<" <-TOP"<<endl;
        for(int i=n-2;i>=0;i--){
            cout<<stk[i]<<endl;
            }
    }
    
}

void Push(int stk[],int n,int size,int x){
    stk[n-1]=x;
}

void Pop(int stk[],int n){
    if(n==0){
        cout<<"Stack underflow Error!"<<endl;cout<<"\n";
    }
    else{
        cout<<"Element Popped!"<<endl;cout<<"\n";
    }
}

void Peek(int stk[],int n){
    if(n==0){
        cout<<"No element present"<<endl;
    }
    else{
        cout<<"Top element :"<<stk[n-1]<<endl;
    }

}

int main(){
    int x,size,n=0,input;

    cout<<"Enter size of the stack: "<<endl;
    cin>>size;
    int stk[size];

    while(true){
        cout<<"Stack Operations:"<<endl;
        cout<<"1)Push "<<"2)Pop"<<endl;
        cout<<"3)Peek "<<"4)Display"<<endl;
        cout<<"5)Exit"<<endl;
        cout<<"Input: ";cin>>input;cout<<endl;

        if(input==1){
            cout<<"Enter element:";cin>>x;
            if(n<size){
                n++;
                Push(stk,n,size,x);
            }
            else{
                cout<<"Stack Overflow Error!"<<endl;
            }
            
            
        }

        else if(input==2){
            Pop(stk,n);
            if(!n<=0){
                n--;
            }
            
        }

        else if(input==3){
            Peek(stk,n);
        }

        else if(input==4){
            Display(stk,n);
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

}
