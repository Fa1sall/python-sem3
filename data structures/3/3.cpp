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

void Insert(int arr[],int n,int pos,int x){
    
    for(int i=0; i<n; i++){
        arr[pos]=arr[pos+1];
        arr[pos]=x;
        n++;
    }
}

void Delete(int arr[],int n,int pos){
    
   int i;
    for (i = 0; i < n; i++) {
        if (i == pos) {
            break;
        }
    }
 
    if (i < n) {
        n--;
        for (int j = i; j < n; j++) {
            arr[j] = arr[j + 1];
        }
    }
}

int main(){
	
	int i,size,n,pos,x,p,q,r;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    int arr[size];

    cout<<"Enter number of array elements to be inserted: "<<endl;
    cin>>n;
    
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<n;i++){
    cin>>arr[i];
	}

    int input;
    while(true){
    cout<<"Enter '1' to Display array: \n"<<"Enter '2' to insert element: \n";
    cout<<"Enter '3' to remove element: \n"<<"Enter 'E' to Exit: \n";
    cout<<"Select an option: "<<endl; cin>>input;
    
    if(input==1){
    	Display(n,arr);
	}
	
	else if(input==2){
		cout<<"Enter index of element to be inserted: "<<endl;
		cin>>pos;
		cout<<"Enter element: "<<endl;
		cin>>x;	
        Insert(arr,size,pos,x);	
	}
	
	else if(input==3){
		cout<<"Enter index of element to be deleted:"<<endl;
		cin>>pos;
		Delete(arr,n,pos);	
	}
		else{
		break;
		}
    }
    return 0;
}
    
