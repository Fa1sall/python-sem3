//Finding max and min elements in an array

#include<iostream>
using namespace std;

int main(){

    int i,size;

    cout<<"Enter array size: "<<endl;
    cin>>size;
    int nums[size];
    cout<<"Enter elements of the array:"<<endl;

    for(i=0;i<size;i++){
        cin>>nums[i];
    }

    int min=nums[0],max=nums[0];

    for(i=0;i<size;i++){
        if(nums[i]>max){
            max=nums[i];
        }
        else if(nums[i]<min){
            min=nums[i];
        }
    }

    cout<<"The maximum value is: "<<max<<endl;
    cout<<"The minimum value is: "<<min<<endl;

    cout<<"\n";
    cout<<"------Done By:-------"<<endl;
    cout<<"Faisal Irfan"<<endl;
    cout<<"220071601063"<<endl;
    cout<<"B.Tech CSE - A"<<endl;
    return 0;
}
