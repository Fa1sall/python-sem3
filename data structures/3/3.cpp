//Inserting and deleting elements from an array

#include<iostream>
using namespace std;

void Create(){
    int i,size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    int arr[size];
    
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<size;i++){
    cin>>arr[i];
}
}

void Display(int arr[]){
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"[";
    for(int i=0; i<size; i++){
    cout<<arr[i]<<",";
    }
    cout<<"]";
}

void Insert(int arr[]){
    int pos,x;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter position of element to be inserted: ";
    cin>>pos;
    cout<<endl<<"Enter element: ";
    cin>>x;

    for(int i=0; i<size; i++){
        arr[pos+1]=arr[pos];
        arr[pos]=x;
    }
}

int main(){

    int input;
    cout<<"Enter '1' to create an array: \n"<<"Enter '2' to Display array: \n";
    cout<<"Enter '3' to insert element: \n"<<"Enter '4' to remove element: \n";
    cout<<"Select an option: "<<endl; cin>>input;

}
