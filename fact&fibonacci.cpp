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


#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number - ";
    cin>>n;
    
    if(n==1) {
        cout<<"the value is 0 "<<endl;
    }
    else if(n==2) {
        cout<<"the value is 1 "<<endl;
    }
    else {
        int next, first=0 , second=1;
        cout<<"Fibonacci sequence - "<<first<<" "<< second<<" ";
        for(int i=3;i<=n;i++) {
                next=first + second ;
                first=second;
                second=next;
                cout<<next<<" ";
        }
        cout<<endl;
        cout<<"the value of "<< n <<" fibonacci number is "<<next;
    
    
    }


}
