//��Ŀ: 
/* ����n.x.y�����x��l����p��y����n,��l+p>50,���l��p */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y;
	cin>>n>>x>>y;
	for(int l=1;l<=10000;l++){
		for(int p=1;p<=10000;p++){
			if(x*l+p*y==n&&l+p>50){
				cout<<l<<" "<<p<<endl;
			}
		}
	}
	 
} 
