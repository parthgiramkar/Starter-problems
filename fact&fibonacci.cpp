#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number to find factorial- ";
    cin>>n;
    
    if(n==0) {
       cout<<"it's 1"<<endl;
    }
    else {
        int fac=1;
        for(int i=n;i>0;i--) {
            fac*=i;
        }
        cout<<"the factorial of number is - "<<fac;
    }
    
    return 0;
}

