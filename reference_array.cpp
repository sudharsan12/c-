#include<iostream>
using namespace std;
int main()
{
	int a[5]={10,20,30,40,50};
	int (&b)[5]=a;
	for(int i=0;i<5;i++)
	{
	cout<<"a["<<i<<"]="<<a[i]<<"---b["<<i<<"]="<<b[i]<<endl;
        
	}
}


