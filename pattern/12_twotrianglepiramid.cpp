#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;

        }
        for(int g=(n*2)-(i);g>i;g--){
            cout<<" ";
        }
        for(int k=i;k>=1-k;k--){
            cout<<k;
        }
        cout<<"\n";
    }
}