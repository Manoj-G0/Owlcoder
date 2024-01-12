#include<bits/stdc++.h>
using namespace std;
int main(){
	// AND of numbers in a range l and r in an array

	// int n;
	// cin>>n;
	// vector<int>a(n);
	// for(int i=0;i<n;i++) cin>>a[i];
	// int pref=a[0];
	// vector<vector<int>>pre(n,vector<int>(32));
	// for(int i=0;i<n;i++){
	// 	for(int j=31;j>=0;j--){
	// 		pre[i][j]=a[i]&(1<<j)?1:0;
	// 		// cout<<pre[i][j]<<" ";
	// 	}
	// 	// cout<<endl;
	// }
	// for(int i=1;i<n;i++){
	// 	for(int j=31;j>=0;j--){
	// 		pre[i][j]+=pre[i-1][j];
	// 		// cout<<pre[i-1][j]<<" ";
	// 	}
	// 	// cout<<endl;
	// }
	// int q;
	// cin>>q;
	// while(q--){
	// 	int l,r;
	// 	int k=0;
	// 	cin>>l>>r;
	// 	int diff=r-l;
	// 	if(l==0){
	// 		for(int i=0;i<32;i++){
	// 			if(pre[r][i]==diff){
	// 				k+=(1<<i);
	// 			}
	// 		}
	// 	}
	// 	else{
	// 		for(int i=0;i<32;i++){
	// 			if(pre[r][i]-pre[l-1][i]==diff) k+=(1<<i);
	// 		}
	// 	}
	// 	cout<<k<<endl;
	// }


	// OR of numbers in a range l and r in an array

	// int n;
	// cin>>n;
	// vector<int>a(n);
	// for(int i=0;i<n;i++) cin>>a[i];
	// int pref=a[0];
	// vector<vector<int>>pre(n,vector<int>(32));
	// for(int i=0;i<n;i++){
	// 	for(int j=31;j>=0;j--){
	// 		pre[i][j]=a[i]&(1<<j)?1:0;
	// 	}
	// }
	// for(int i=1;i<n;i++){
	// 	for(int j=31;j>=0;j--){
	// 		pre[i][j]+=pre[i-1][j];
	// 	}
	// }
	// int q;
	// cin>>q;
	// while(q--){
	// 	int l,r;
	// 	int k=0;
	// 	cin>>l>>r;
	// 	int diff=r-l;
	// 	if(l==0){
	// 		for(int i=0;i<32;i++){
	// 			if(pre[r][i]>0){
	// 				k+=(1<<i);
	// 			}
	// 		}
	// 	}
	// 	else{
	// 		for(int i=0;i<32;i++){
	// 			if(pre[r][i]-pre[l-1][i]>0) k+=(1<<i);
	// 		}
	// 	}
	// 	cout<<k<<endl;
	// }


	// XOR of numbers in a range of l and R in an array

	// int n;
	// cin>>n;
	// vector<int>a(n);
	// for(int i=0;i<n;i++) cin>>a[i];
	// int pref=a[0];
	// vector<vector<int>>pre(n,vector<int>(32));
	// for(int i=0;i<n;i++){
	// 	for(int j=31;j>=0;j--){
	// 		pre[i][j]=a[i]&(1<<j)?1:0;
	// 	}
	// }
	// for(int i=1;i<n;i++){
	// 	for(int j=31;j>=0;j--){
	// 		pre[i][j]+=pre[i-1][j];
	// 	}
	// }
	// int q;
	// cin>>q;
	// while(q--){
	// 	int l,r;
	// 	int k=0;
	// 	cin>>l>>r;
	// 	int diff=r-l;
	// 	if(l==0){
	// 		for(int i=0;i<32;i++){
	// 			if(pre[r][i]%2!=0){
	// 				k+=(1<<i);
	// 			}
	// 		}
	// 	}
	// 	else{
	// 		for(int i=0;i<32;i++){
	// 			if((pre[r][i]-pre[l-1][i])%2!=0) k+=(1<<i);
	// 		}
	// 	}
	// 	cout<<k<<endl;
	// }

	// longest increasing subsequence
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int m=1;
	vector<int>res(n,1);
	for(int i=n-2;i>=0;i--){
		for(int j=i+1;j<n;j++){
			if(v[i]<v[j]){
				res[i]=max(res[i],res[j]+1);
				m=max(m,res[i]);
			}
		}
	}
	cout<<m;
}