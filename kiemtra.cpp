#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float sotienbandau,sotienkyvong,laisuat;
	cout<<"Nhap vao so tien ban dau:";
	cin>>sotienbandau;
	cout<<"Lai suat:";
	cin>>laisuat;
	cout<<"So tien ky vong:";
	cin>>sotienkyvong;
	cout<<"So nam de ban co so tien mong muon:"<<(log10(sotienkyvong/sotienbandau))/(log10(1+laisuat*1/100));

	return 0;
}

