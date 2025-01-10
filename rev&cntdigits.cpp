#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number - ";
    cin>>n; 
    
    int original=n;
     
    int rev=0;
    while(n!=0) {
        int digit=n%10;
        rev=rev*10 + digit;
        n=n/10;
    }
    
    cout<<"reversed digit of integer - "<<rev<<endl;
    
    n=original;         //after looping to save the data
    int cnt=0;   
    while(n!=0) {
        n=n/10;
        cnt++;
    }   
    cout<<"no of digits in an integer - "<<cnt<<endl;
  
    return 0;
    
}
