#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"nhap so n: ";
	cin>>n;
	int a[10000];
	cout<<"nhap so nguyen n phan tu: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==0)
			{
				cout<<"cap so co tong bang 0 la: "<<a[i]<<endl<<a[j<<endl;]
			}
		}
	}
	return 0;
}
