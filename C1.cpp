#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"nhap so nguyen duong N = ";
	cin>>n;
	int a[n];
	cout<<"Nhap mang N phan tu: "endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int gen=0;
	for(int i=0;i<n;i++)
	{
		for(int =0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				gen++;
			}
		}
	}
	if(gen==0)
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}
	return 0;
}
