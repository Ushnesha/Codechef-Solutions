#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
    	long long n,x,ans;
    	cin>>n>>x;
    	ans=x;
    	for(int i=1;i<n;i++){
    	    long long q;
    	    cin>>q;
    	    x=min(x, q);
    	    ans+=x;
    	}
    	cout<<ans<<"\n";
	}
	return 0;
}