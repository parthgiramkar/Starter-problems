#include<iostream>
#include<cmath>             

using namespace std;

int main() {
    int n;
    cout<<"enter number - ";
    cin>>n;  
    
    int original=n;   
    cout<<"the square of no. is - "<<pow(n ,2)<<endl;
    
    cout<<"the cube root of no. is - "<<cbrt(n)<<endl;

    cout<<"the log  of no. is - "<<log10(n)<<endl;
    
    cout<<"the sq of no's - "<<endl;
    for(int i=0;i<11;i++) {
        cout<<pow(i,2)<<"  ";
    }
    cout<<endl;
    
    cout<<"the powers of 2 are -  "<<endl;
    for(int i=0;i<11;i++) {
        cout<<pow(2,i)<<"  ";
    }
    cout<<endl;
    
    if(sqrt(n)==3) {        //n/3==3
        cout<<n<<" is sqrt of 3"<<endl;
    }
    if(n<=0) {
        cout<<"Dont be oversmart";
    }
    while(n%5==0) {
        n=n/5;
    }
    if(n==1) {
        cout<<original<<" is power of 5";
    }
    else {
        cout<<original<<" is not power of 5";
    }

    
}
//for mathematical functions
