#include<iostream>

using namespace std;
void Z(int A[],int n,int B[])
{	int i,j;
	for(i=1;i<n;i++)
	{	
		if(A[i]==A[0])
		{	B[i]++;
			for(j=1;i+j<n;j++)
		{	if(A[i+j]==A[j])
			{	B[i]++;
			}
		}
		}
	 } 
}

int main()
{ int i,j,n;
	int A[30],B[30];
	cout<<"\n Enter the value of n\t";
	cin>>n;
	for(i=0;i<n;i++)
	{
	
	cout<<"\nenter the value\t";
	cin>>A[i];
	}
	for(i=0;i<30;i++)
	{	B[i]=0;
	}
	Z(A,n,B);
	for(i=0;i<n;i++)
	{	cout<<B[i];
	}
}
