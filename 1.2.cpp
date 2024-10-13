#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool nto(ll n){// ham check so nguyen to
	if(n==0||n==1) return false;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	cout<<" Nhap so n:";
	ll n;cin>> n;
	vector<ll> nt;// mang nguyen to
	set<ll> blum; // mang so blum
	for(ll i=2;i<=n;i++){
		if(nto(i) && i<=n){
			nt.push_back(i); // tim cac so nguyen to nho hon n;
		}
	}
	for(ll i=0;i< nt.size();i++){
		for(ll j=i;j<nt.size();j++){
			ll x= nt[i]*nt[j];
			if(x<= n) blum.insert(x);  
		}
	}
	cout<< " Mang blum co cac so blum nho hon hoac bang n:"<< endl;
	for(auto it=blum.begin(); it!= blum.end();it++){     // đã tạo ra một mảng số blum nhỏ hơn n!!!!!
		cout<<*it<<" ";
	}
	// cau a: Tìm ra tất cả các cặp số Blum có tổng cũng là một số Blum nhỏ hơn N
	cout<<endl;
	cout<<"Cac cap so blum co tong cung la so blum nho hon n la:"<< endl;
	for(auto it= blum.begin();it!= blum.end();it++){
		for(auto et= it;et!=blum.end();et++){
			ll y= *it+ *et;
			if(blum.count(y)!=0){
				cout<<"("<< *it<<" , "<< *et <<")"<< " ; ";  // đã in ra tất cả các cặp số
			}
		}
	}
	// cau b:  Kiểm tra xem một số Blum M có tồn tại trong dãy số Blum được tạo ra hay không.
	cout<< endl;
	cout<<"Nhap so M can kiem tra co ton tai trong day so Blum khong: ";
	ll m;cin>> m;
	if(blum.count(m)!=0) cout<<"So "<< m <<" CO ton tai trong day so Blum duoc tao ra.";
	else cout<<"So "<< m <<" KHONG ton tai trong day so Blum duoc tao ra.";
}