#include<bits/stdc++.h>
using namespace std;
int main(){
	system("title Tinwers OS [version:1.4.0]");
	int Users[10]={},cs=0,drsj[10];
	char hd;
	string mlh;
	cout<<"Tinwers OS [version:1.4.0]"<<endl;
	cout<<"(c) Sunny Blank。保留所有权利。"<<endl<<endl;
	cout<<"如果您不会使用Tinwers OS命令行，请输入help。"<<endl;
	for(int i=0;i<100;i++){
		cout<<"C:/Users/111>";
		getline(cin,mlh);
		if(mlh=="All Users"){
			cout<<"所有用户名 :"<<endl; 
			cout<<"     system"<<endl;
			for(int i=0;i<5;i++){
				if(Users[i]==0){
					cout<<"";
				}
				else{
					cout<<"     "<<Users[i]<<endl;
				}
			}
		}
		if(mlh=="Enroll Users"){
			if(cs<6){
				for(int i=1;i<=6;i++){
					cout<<"请输入要注册的用户名 : ";
					cin>>Users[cs];
					cout<<endl;
					cs++;
					cout<<"是否退出？(y/n)";
					cin>>hd;
					if(hd=='n'||hd=='N'){
						break;
					}
				}
			}
			else{
				cout<<"对不起，只能注册6个用户名"<<endl; 
			}
		}
		if(mlh=="cls"){
			system("cls");
		}
		if(mlh=="help"){
			cout<<"所有功能："<<endl;
			cout<<"     All Users     列出所有用户名"<<endl;
			cout<<"     Enroll Users  添加用户名"<<endl;
			cout<<"     cls           清屏"<<endl;
			cout<<"     python        打开python"<<endl;
			cout<<"     setting       把python设置到系统环境"<<endl;
			cout<<"     compute+      计算（加） "<<endl;
			cout<<"     compute-      计算（减） "<<endl;
			cout<<"     compute*      计算（乘） "<<endl;
			cout<<"     compute/      计算（除） "<<endl;
			cout<<"     exit          安全退出 "<<endl;
		}
		if(mlh=="python"){
			cout<<"如失败，请事先把python设置到系统中"<<endl<<endl;
			cout<<"如何设置，请输入setting"<<endl; 
			system("python");
		}
		if(mlh=="setting"){
			cout<<"1.此电脑——右键——属性"<<endl; 
			cout<<"2.高级系统设置——高级——环境变量"<<endl;
			cout<<"3.系统变量中的新建变量——xxx(随便起)，变量值为bin等文件的上一层文件夹"<<endl;
			cout<<"4.path——编辑——新建"<<endl;
			cout<<"5.输入完成后点击所有窗口的“确定”"<<endl;
			cout<<"原文地址：https://blog.csdn.net/DBling1205/article/details/127856609"<<endl;
			cout<<endl<<"实在看不懂，就上网找找教程吧。这过程也上网找的。"<<endl<<endl;
		}
		if(mlh=="compute+"){
			cout<<"【例子】输入：1 1 输出：2"<<endl;
			int a,b;
			cin>>a>>b;
			a=a+b;
			cout<<"答案："<<a<<endl;
		}
		if(mlh=="compute-"){
			cout<<"【例子】输入：1 1 输出：0"<<endl;
			int a,b;
			cin>>a>>b;
			a=a-b;
			cout<<"答案："<<a<<endl;
		}
		if(mlh=="compute*"){
			cout<<"【例子】输入：3 2 输出：6"<<endl;
			int a,b;
			cin>>a>>b;
			a=a*b;
			cout<<"答案："<<a<<endl;
		}
		if(mlh=="compute/"){
			cout<<"【例子】输入：2 1 输出：2"<<endl;
			int a,b;
			cin>>a>>b;
			a=a/b;
			cout<<"答案："<<a<<endl;
		}
		if(mlh=="exit"){
			cout<<"已安全退出"<<endl; 
			exit(0);
		}
		else{
			cout<<"如果您不会使用Tinwers OS命令行，请输入help。"<<endl; 
		}
	}
	system("pause");
	return 0;
}
