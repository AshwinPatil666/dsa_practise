#include<iostream>
using namespace std;
int main(){
    int n=5;
    int count =1;
    for(int i=0;i<n;i++){
        if(i%2==0)count =1;
        else count =0;
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count = 1-count;
        }
    
        cout<<endl;
    }
}