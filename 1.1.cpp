#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void sapxep(ll n,ll a[]){
	
	for(ll i=0;i<n-1 ;i++){
		ll minn=i;
		for(ll j=i+1;j<n;j++){
			if(a[j]< a[minn]) {
				minn=j;
			}
		}
	swap(a[minn], a[i]);
	}
}
int main(){
	cout<<"nhap kich thuoc mang: ";
	ll n;cin>> n;
	cout<<"nhap phan tu cua mang:";
	ll a[n];
	for(ll i=0;i<n;i++){
		string b;
		cin>> b;
		if(b== "do") a[i]=0;
		else if( b=="trang") a[i]=1;
		else a[i]=2;
		
	}
	sapxep(n,a);
	for(ll i=0;i<n;i++){
		if(a[i]== 0) cout<<"do"<< " ";
		if(a[i]==1) cout<<"trang"<< " ";
		if(a[i]==2) cout<< "xanh"<< " ";
	}
}