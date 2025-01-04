#include<iostream>
using namespace std;

int main() {
    /*
    int a=5;
    int b=2;
    int c=10;
    
    cout<<"the average of numbers is - "<<(a+b+c)/3;
    */
    
    int n;
    cout<<"enter the count of numbers - "<<endl;
    cin>>n;
    if(n==0) {
        cout<<"Dont be oversmart";
        return 0;                   //exit the program   
    }
    
    int sum=0;
    int num;
    for(int i=0;i<n;i++) {
        cout<<"enter number - "<<i+1<<":-  ";
        cin>>num;
        sum=sum+num;
    }
    
    cout<<"the average of numbers - "<<(sum/n);
    */
    
    
    
}
    
}
