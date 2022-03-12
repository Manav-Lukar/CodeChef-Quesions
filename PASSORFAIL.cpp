//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,p;
        cin>>n>>x>>p;
        int res = 4*x - n;
        if(res>=p){
            cout<<"PASS"<<endl;
        }
        else{ cout<<"FAIL"<<endl;
        }
        
    }
    
    return 0;
}