//题目: 
/* 输入n.x.y，如果x乘l加上p乘y等于n,且l+p>50,输出l和p */
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
