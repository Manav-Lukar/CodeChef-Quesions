//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	  int  c=0;
	  for(int i=0;i<n;i++){
	      cin>>x;
	      
	  
	    if(x>=10 && x<=60)
	      c++;
	  }
	  cout<<c<<endl;
	}
	return 0;
}

