#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=1000;
int a[mxN], n;

int main() {
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	bool vis[n+1];
	memset(vis, 1, sizeof(vis));
	for(int i=0; i<n; ++i) 
		for(int j=i+1; j<n; ++j) 
			if(a[i]==a[j])
				vis[i]=0;
	int cnt=0;
	for(int i=0; i<n; ++i) 
		if(vis[i]==1) 
			cnt++;
	cout << cnt << "\n";
	for(int i=0; i<n; ++i)
		if(vis[i]==1) 
			cout << a[i] << " ";
	cout << "\n";
}
