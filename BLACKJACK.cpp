//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,a,b;
        cin>>a>>b;
        x=21-(a+b);
        if(x<=10){
            cout<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}