#include<bits/stdc++.h>
using namespace std;
int main(){
	system("title Tinwers OS [version:1.4.0]");
	int Users[10]={},cs=0,drsj[10];
	char hd;
	string mlh;
	cout<<"Tinwers OS [version:1.4.0]"<<endl;
	cout<<"(c) Sunny Blank����������Ȩ����"<<endl<<endl;
	cout<<"���������ʹ��Tinwers OS�����У�������help��"<<endl;
	for(int i=0;i<100;i++){
		cout<<"C:/Users/111>";
		getline(cin,mlh);
		if(mlh=="All Users"){
			cout<<"�����û��� :"<<endl; 
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
					cout<<"������Ҫע����û��� : ";
					cin>>Users[cs];
					cout<<endl;
					cs++;
					cout<<"�Ƿ��˳���(y/n)";
					cin>>hd;
					if(hd=='n'||hd=='N'){
						break;
					}
				}
			}
			else{
				cout<<"�Բ���ֻ��ע��6���û���"<<endl; 
			}
		}
		if(mlh=="cls"){
			system("cls");
		}
		if(mlh=="help"){
			cout<<"���й��ܣ�"<<endl;
			cout<<"     All Users     �г������û���"<<endl;
			cout<<"     Enroll Users  ����û���"<<endl;
			cout<<"     cls           ����"<<endl;
			cout<<"     python        ��python"<<endl;
			cout<<"     setting       ��python���õ�ϵͳ����"<<endl;
			cout<<"     compute+      ���㣨�ӣ� "<<endl;
			cout<<"     compute-      ���㣨���� "<<endl;
			cout<<"     compute*      ���㣨�ˣ� "<<endl;
			cout<<"     compute/      ���㣨���� "<<endl;
			cout<<"     exit          ��ȫ�˳� "<<endl;
		}
		if(mlh=="python"){
			cout<<"��ʧ�ܣ������Ȱ�python���õ�ϵͳ��"<<endl<<endl;
			cout<<"������ã�������setting"<<endl; 
			system("python");
		}
		if(mlh=="setting"){
			cout<<"1.�˵��ԡ����Ҽ���������"<<endl; 
			cout<<"2.�߼�ϵͳ���á����߼�������������"<<endl;
			cout<<"3.ϵͳ�����е��½���������xxx(�����)������ֵΪbin���ļ�����һ���ļ���"<<endl;
			cout<<"4.path�����༭�����½�"<<endl;
			cout<<"5.������ɺ������д��ڵġ�ȷ����"<<endl;
			cout<<"ԭ�ĵ�ַ��https://blog.csdn.net/DBling1205/article/details/127856609"<<endl;
			cout<<endl<<"ʵ�ڿ����������������ҽ̳̰ɡ������Ҳ�����ҵġ�"<<endl<<endl;
		}
		if(mlh=="compute+"){
			cout<<"�����ӡ����룺1 1 �����2"<<endl;
			int a,b;
			cin>>a>>b;
			a=a+b;
			cout<<"�𰸣�"<<a<<endl;
		}
		if(mlh=="compute-"){
			cout<<"�����ӡ����룺1 1 �����0"<<endl;
			int a,b;
			cin>>a>>b;
			a=a-b;
			cout<<"�𰸣�"<<a<<endl;
		}
		if(mlh=="compute*"){
			cout<<"�����ӡ����룺3 2 �����6"<<endl;
			int a,b;
			cin>>a>>b;
			a=a*b;
			cout<<"�𰸣�"<<a<<endl;
		}
		if(mlh=="compute/"){
			cout<<"�����ӡ����룺2 1 �����2"<<endl;
			int a,b;
			cin>>a>>b;
			a=a/b;
			cout<<"�𰸣�"<<a<<endl;
		}
		if(mlh=="exit"){
			cout<<"�Ѱ�ȫ�˳�"<<endl; 
			exit(0);
		}
		else{
			cout<<"���������ʹ��Tinwers OS�����У�������help��"<<endl; 
		}
	}
	system("pause");
	return 0;
}
