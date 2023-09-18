//Matrix Addition and Multiplication

#include<iostream>
using namespace std;

int main(){
	int a[10][10],b[10][10],mult[10][10],add[10][10],i,j,k,r1,r2,c1,c2;
	
	cout<<"Enter number of rows for matrix 1: "; 
	cin>>r1;
	cout<<"Enter number of columns for matrix 1: "; 
	cin>>c1;
	cout<<"Enter number of rows for matrix 2: "; 
	cin>>r2;
	cout<<"Enter number of columns for matrix 2: "; 
	cin>>c2;
	if(c1!=r2){
		cout<<"Error! Column of matrix 1 should be equaL to row of matrix 2"<<endl;
		cout<<"Enter number of rows for matrix 1: "; 
		cin>>r1;
		cout<<"Enter number of columns for matrix 1: "; 
		cin>>c1;
		cout<<"Enter number of rows for matrix 1: "; 
		cin>>r2;
		cout<<"Enter number of columns for matrix 1: "; 
		cin>>c2;
		}
	
	cout<<"Enter elements of matrix 1:"<<endl;
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cout<<"Enter element "<<i<<j<<": ";
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements of matrix 2:"<<endl;
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			cout<<"Enter element "<<i<<j<<": ";
			cin>>b[i][j];
		}
	}
	
	//Adding two matrices
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
		add[i][j]=a[i][j]+b[i][j];
		}
		}
		
	cout<<"Addition of two matrices: "<<endl;
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			cout<<add[i][j]<<" ";
			if(j == c2 - 1)
                cout << endl;
		}
	}
	
	//Multiplying two matrices
	for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
        {
            mult[i][j]=0;
        }
        
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				mult[i][j] += a[i][k] * b[k][j];
			}
		}
	}
		
	cout<<"Multiplication of two matrices: "<<endl;
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			cout<<mult[i][j]<<" ";
			if(j == c2 - 1)
                cout << endl;
		}
	}
	
	return 0;
}