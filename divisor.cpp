#include <iostream>
using namespace std;


int main() {
    int n;
    cout<<"enter number to find its divisors - "<<endl;
    cin>>n;
   
    for(int i=1;i<n;i++) {
        if(i==0) {
            cout<<"-_-"<<endl;
        }
        else if(n%i==0 || i==1) {
            cout<<i<<"  is divisor of "<<n<<endl;
        }
    }
   
   
}
