#include<iostream>
using namespace std;
int main()
{
    int numbers[5] = {2,46,31,7,9};
    int min = numbers[0];
    int max = numbers[0];
    int size = sizeof(numbers)/sizeof(numbers[0]);

    //finding min and max terms

    for(int i=0;i<size;i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
        else if(numbers[i]<min){
            min=numbers[i];
        }
    }

    cout<<"The maximum number is : "<<max<<endl;
    cout<<"The minimum number is: "<<min<<endl;

}