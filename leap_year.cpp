#include <iostream>
using namespace std;


int main() {
    int y;
    cout<<"enter year to check  - ";
    cin>>y; 
    
    if( (y%4==0 && y%100 !=0 ) || (y%400==0) ) {
        cout<<"It's leap year  "<<endl;
    }
    else {
        cout<<"It's not leap year -^__^- "<<endl;
    }
   
}

// Divisible by 400 optional but ensures greater long-term accuracy of calendar
