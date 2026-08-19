#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1;i<=n+1;i++){
      
    for(int j=1;j<=i;j++){
      
      cout<<"  ";
    }

    for(int b=n*2+1;b>=2*i-1;b--){
      

      cout<<"* ";
      
    }
    cout<<"\n";
}
}