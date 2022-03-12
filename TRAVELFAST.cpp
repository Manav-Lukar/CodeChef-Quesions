//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int car,bike;
        cin>>car>>bike;
        if(car<bike){
            cout<<"BIKE"<<endl;
        }
        else if(bike==car){
            cout<<"SAME"<<endl;
        }
        else{
            cout<<"CAR"<<endl;
        }
    }
    return 0;
}