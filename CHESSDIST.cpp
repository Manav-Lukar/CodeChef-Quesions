//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int x,y,a,b;
       cin>>x>>y>>a>>b;
       if(abs(x-a)>(y-b)){
           cout<<abs(x-a)<<endl;
       }
       else{
           cout<<abs(y-b)<<endl;
       }
   }
   return 0;
}