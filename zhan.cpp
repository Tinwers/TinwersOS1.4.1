/*
出栈合法性

题目描述:已知自然数1，2，...，N（1<=N<=100）依次入栈，请问序列C1，C2，...，CN是否为合法的出栈序列。

输入:包含多组测试数据。每组测试数据的第一行为整数N（1<=N<=100），当N=0时，输入结束。第二行为N个正整数，以空格隔开，为出栈序列。

输出： 对于每组输入，输出结果为一行字符串。如给出的序列是合法的出栈序列，则输出Yes，否则输出No。

样例输入
5
3 4 2 1 5
5
3 5 1 4 2
0

样例输出
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
