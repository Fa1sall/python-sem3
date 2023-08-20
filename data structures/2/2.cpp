//Finding consecutive characters from text

#include<iostream>
using namespace std;

int main(){

    string text;
    int i;

    cout<<"Enter text: "<<endl;
    cin>>text;
    
    
    for(i=0;i<text.length();i++){
        if(text[i+1]-1==text[i]){
            cout<<"\n" <<text[i];
        }
    }

}