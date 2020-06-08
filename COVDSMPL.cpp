#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int n,p;
	    cin>>n>>p;
	    vector<vector<int>> vec(n,vector<int>(n,0));
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<1<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
	            cout.flush();
	            cin>>vec[i][j];
	        }
	    }
        for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<vec[i][j]<<" ";
	            cout.flush();
	        }
	        cout<<endl;
	        cout.flush();
	    }
	}
	return 0;
}
