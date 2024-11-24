#include<iostream>

using namespace std;

struct information
{
	unsigned long bs[6]={0,0,0,0,0,0};
	unsigned long water=0;
}gcc;

void init()
{
	gcc.bs[0]=100000000;
	for(short s1=1;s1<6;s1++)
	{
		gcc.bs[s1]=gcc.bs[0]*s1;
	}
	gcc.bs[5]-=gcc.bs[0];
}

int main()
{
	init();
	for(short s1=0;s1<100;s1++)
	{
		for(short s2=0;s2<4;s2++)
		{
			long temp=(gcc.bs[s2]+gcc.bs[s2+1])/2;
			gcc.bs[s2]=temp;
			gcc.bs[s2+1]=temp;
		}
		long temp=(gcc.bs[4]+gcc.bs[5])/2;
		gcc.water+=gcc.bs[5]-temp;
		gcc.bs[4]=temp;
		gcc.bs[0]=100000000;
		for(short s3=0;s3<6;s3++)
		{
			cout<<gcc.bs[s3]<<" ";
		}
		cout<<"     "<<gcc.water<<endl;
	}
	cout<<gcc.water<<endl;
	return 0;
}

