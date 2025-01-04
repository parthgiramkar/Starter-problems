#include <iostream>
using namespace std;

int main() {
    
    /*
    int v ;
    cout<<"enter the number - ";
    cin>>v;
    if(v==0) {
        cout<<"-_- "<<endl;
        return 0;                       //exit the program  
    }
    if(v==2 || v==3) {
        cout<<"the number is prime "<<endl;
    }
    
    else if(v%2==0 || v%3==0 ) {
        cout<<"the number is composite "<<endl;
    }
    else {
        cout<<"the number is prime "<<endl;
    }
    */
    
    int cnt=0;
    for(int i=2;i<5;i++) {
        if(i==0) {
            cout<<"-_- "<<endl;
        }
        
        else if(i==2 || i==3) {
            cout<<i<<" the number is prime "<<endl;
            cnt++;
        }
    
        else if(i%2==0 || i%3==0 ) {
            cout<<i<<" the number is composite "<<endl;
        }
        else {
            cout<<i<<" the number is prime "<<endl;
            cnt++;
        }
    }
    cout<<"the no. of prime num's are - "<<cnt;
    
}

