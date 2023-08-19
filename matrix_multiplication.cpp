#include<iostream>
using namespace std;
int main()
{
	int m1,n1,m2,n2;
	cout<<"Enter the size of matrices";
	cin>>m1>>n1>>m2>>n2;
	if(n1==m2)
	{
		int A[m1][n1],B[m2][n2],C[m1][n2];
		for(int i=0;i<m1;i++)
		{
			for(int j=0;j<n1;j++)
			{
				cin>>A[i][j];
			}
		}
		for(int i=0;i<m2;i++)
		{
			for(int j=0;j<n2;j++)
			{
				cin>>B[i][j];
			}
		}
		cout<<endl;
		for(int i=0;i<m1;i++)
		{
			for(int j=0;j<n2;j++)
			{
				C[i][j] = 0;
				for(int k=0;k<n1;k++)
				{
					C[i][j] += A[i][k]*B[k][j];
				}
				cout<<C[i][j]<<" ";		
			}
			cout<<endl;
		}
	}
	return 0;
}
