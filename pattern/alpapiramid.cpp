#include <iostream>
using namespace std;
int main() {
    int n=5;
   
    for(int i=0;i<n+1;i++){
      
    for(int j=0;j<n-i+1;j++){
      
      cout<<"  ";
    }
 char ch='A';
 int breakpoint=(2*i+1)/2;
    for(int b=1;b<=2*i+1;b++){
      

      cout<<ch<<" ";
     if(b<=breakpoint) ch++;
     else ch--;
    
    
      
    }
    cout<<"\n";
}
}