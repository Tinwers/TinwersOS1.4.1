/*
��ջ�Ϸ���

��Ŀ����:��֪��Ȼ��1��2��...��N��1<=N<=100��������ջ����������C1��C2��...��CN�Ƿ�Ϊ�Ϸ��ĳ�ջ���С�

����:��������������ݡ�ÿ��������ݵĵ�һ��Ϊ����N��1<=N<=100������N=0ʱ������������ڶ���ΪN�����������Կո������Ϊ��ջ���С�

����� ����ÿ�����룬������Ϊһ���ַ�����������������ǺϷ��ĳ�ջ���У������Yes���������No��

��������
5
3 4 2 1 5
5
3 5 1 4 2
0

�������
Yes
No

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    int n;
    while(cin>>n){
        if(n==0) break;
        bool flag=true;
        int mx=0;
        while(n--){
            int t;
            cin>>t;
            if(t>mx){
                for(int i=mx+1;i<=t;i++){
                    s.push(i);
                }
                s.pop();
                mx=t;
            }
            else{
                if(t!=s.top()){
                    flag=false;
                }
                else{
                    s.pop();
                }
            }
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl; 
    }
}
