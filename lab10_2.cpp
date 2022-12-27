#include<iostream>
#include<string>
using namespace std;

void printO(int x,int y){
    if(x<=0 or y<=0){
        cout<<"Invalid input";
    }else{
    for(int i=1; i<=x; i++){
        for(int i=1; i<=y;i++){
            cout<<"O";
        }
        cout<<"\n";
    }
    
    }
}