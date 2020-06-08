#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    string s;
	    cin>>s;
	    stack<int> st;
	    bool f=true;
	    int i, lastEmpty=-1;
	    for(i=0;i<s.length();i++){
	        if(s[i]=='<') st.push('<');
	        else{
	            if(st.empty()) {
	                cout<<i;
	                f=false;
	                break;
	            }
	            else st.pop();
	        }
	        if(st.empty()) lastEmpty=i;
	    }
	    if(f) cout<<lastEmpty+1;
	    cout<<endl;
	}
	return 0;
}
