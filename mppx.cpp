 #include<bits/stdc++.h>
using namespace std;
int i,n,j,a[100005];
bool flag;
int main() {
	cout<<"�������ж��ٸ�������Ҫ���У�"; 
	cin>>n;
	for (i=1;i<=n;i++){
		cout<<"����"<<i<<":"; 
		cin>>a[i];
	}
	for (i=1;i<=n;i++){
		flag=1;	
	}
	for (i=1;i<n;i++){
    	for(j=1;j<=n-i;j++){
        	if(a[j]>a[j+1]){
        		swap(a[j],a[j+1]);
        		flag=0;
			}
			if(flag=1){
				continue;
			}
		}
	}
	cout<<endl<<"�����"; 
	for(i=1;i<=n;i++)
		
		cout<<a[i]<<" ";
	return 0;
}

