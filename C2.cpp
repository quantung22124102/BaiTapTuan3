#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout<<"Nhap xau ki tu: ";
	getline(cin,s);
	int gen=0;
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i]!s[s.length()-i-1])
		gen++;
	}
	if(gen==0)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}


