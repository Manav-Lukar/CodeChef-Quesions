//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%4==0){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Not Good"<<endl;
        }
    }
    
    return 0;
}