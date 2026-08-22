#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }

  for(int i=1; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" "<<arr[i]<<" ";
    }
    cout<<endl;
}

return 0;
}