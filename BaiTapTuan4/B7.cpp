#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout<<"nhap tu: ";
	char c[25];
	cin>>c;
	cout<<"output: ";
	for (int i=0;i<strlen(c);i++)
	{
		for(int j=0;j<strlen(c);j++)
		{
			cout<<c[i]<<endl<<c[j]<<endl;
			for(int m=0;m<strlen(c);m++)
			{
				cout<<c[i]<<endl<<a[j]<<endl<<a[m]<<endl;
			}
		}
	}
	return 0;
}
