#include<iostream>
using namespace std;
int main()
{
	float x,s=0.0;
	int i=0,l;
		cout<<"ingrese el valor l:";
	cin>>l;
	do
	{
		cout<<"ingrese el valor x:";
		cin>>x;
		i=i+1;
		s=s+x;
		}
	while(i<l);
	cout<<"la suma de los numeros fue:"<<s<<endl;
	return 0;
}
	
