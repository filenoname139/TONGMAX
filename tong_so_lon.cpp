// tong lon nhat trong de thi chuyen ben tre 2025-2026
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("tong_max.inp","r",stdin);
	freopen("tong_max.out","w",stdout);
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	int tong=0;
    int max=INT_MIN;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				tong=3*v[i]+2*v[j]+5*v[k];
				if(tong>max){
					max=tong;
					tong=0;
				}
			}
		}
	}
	cout << max;
	return 0;
}
