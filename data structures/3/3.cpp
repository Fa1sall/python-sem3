//Inserting and deleting elements from an array

#include<iostream>
using namespace std;

void Display(int n,int arr[]){
    cout<<"[";
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}

void Insert(int x,int pos,int n,int arr[]){
    for(int i=n;i>=pos+1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
}

void Delete(int pos,int n,int arr[]){  
}

int main(){
    int i,x,n,size,pos,input;
    cout<<"Enter size of array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter number of elements to be inserted:"<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<n;i++){
    cin>>arr[i];
	}

    while(true){
    cout<<"Enter '1' to Display array: \n"<<"Enter '2' to insert element: \n";
    cout<<"Enter '3' to remove element: \n"<<"Enter 'E' to Exit: \n";
    cout<<"Select an option: "<<endl; 
    cin>>input;

    if(input==1){
        Display(n,arr);
    }
    else if(input==2){
        n++;
        cout<<"Enter index of element to be inserted:"<<endl;
        cin>>pos;
        cout<<"Enter element to be inserted:"<<endl;
        cin>>x;
        Insert(x,pos,n,arr); 
    }
    else if(input==3){
        cout<<"Enter index of element to be deleted:"<<endl;
        cin>>pos;
        Delete(pos,n,arr);
    }
    else if(input==4){
        cout<<"Exited"<<endl;
        break;
    }
    else{
        cout<<"Enter valid option"<<endl;
    }
    }
 
}