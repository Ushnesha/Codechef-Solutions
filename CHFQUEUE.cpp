#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	long long total=1;
	stack<int> stk;
	vector<int> vec(n);
	for(int i=0;i<n;i++) cin>>vec[i];
	for(int i=0;i<n;i++){
	    if(stk.empty()) stk.push(i);
	    else{
	        int p=i;
	        while(!stk.empty() && vec[i]<vec[stk.top()]){
	            p=stk.top();
	            total=(total*(i-p+1))%mod;
	            stk.pop();
	        }
	        stk.push(i);
	    }
	}
	    
	
	cout<<total%mod;
	return 0;
}