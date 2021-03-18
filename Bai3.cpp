#include<iostream>
using namespace std;
int main()
{
	int N,nhapso;
	cout<<"nhap vao day so N: ";
	cin>>N;
	int a[N];
	for(int i=0;i<10;i++)
	{
		a[i]=0;
	}
	for(int i=0;i<N;i++)
	{
		cout<<"nhap so thu "<<i<<" ";
		cin<<nhapso;
		a[nhapso]++;
	}
	for(int i=0;i<10;i++)
	{
		cout<<"so so hang "<<i<<" la "<<a[i]<<endl;
	}
	return 0;
}
