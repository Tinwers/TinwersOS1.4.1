/*
���������
����������
��n���a1,a2,��,an������Ҫ��ͬһ��ʹ��ͬһ�����ң��ҽ���ͬһʱ��ֻ����һ���ʹ�á�
ÿ���ai����һ����ʼʱ��si�ͽ���ʱ��fi ��
һ�����ѡ�����һ�������ȴ�ǰһ��������󷽿ɽ�����ҡ�
���ʣ���ΰ�����Щ�����ʹ�þ�����Ļ�ܲ���ͻ�ľ��С�
*/


#include <iostream>
#include <algorithm>
#define MAX  5
using namespace std;
/*
*������Ľṹ��
*/
struct Activity {
	//���ʼʱ��
	int startTime;
	//�����ʱ��
	int endTime;
	//�Ƿ�ѡ��
	bool isSel=false;
	void desc() {
		cout<<this->startTime<<"-"<<this->endTime<<endl;
	}
};
//���л
Activity acts[MAX];
//��ʼ���
void initActivities() {
	for(int i=0; i<MAX; i++) {
		cout<<"�����Ŀ�ʼʱ��-����ʱ�䣺"<<endl;
		cin>>acts[i].startTime>>acts[i].endTime;
	}
}
/*
*�ȽϺ���
*/
bool cmp(const Activity &act0, const Activity &act1) {
	return  act0.endTime<act1.endTime;
}
/*
*�����
*/
int getMaxPlan() {
	//������
	int count=1;
	//��ǰѡ��Ļ
	int currentSel=0;
	acts[currentSel].isSel=true;
	for(int i=1; i<MAX; i++) {
		if(acts[i].startTime>=acts[currentSel].endTime ) {
			count++;
			currentSel=i;
			acts[i].isSel=true;
		}
	}
	return count;
}
/*
*����
*/
void showActivities() {
	for(int i=0; i<MAX; i++) {
		if(acts[i].isSel==true)acts[i].desc();
	}
}
/*
*����
*/
int main() {
	initActivities();
	//����ʹ�� STL �㷨�е� sort
	sort(acts,acts+MAX,cmp);
	getMaxPlan();
	showActivities();
	return 0;
}

