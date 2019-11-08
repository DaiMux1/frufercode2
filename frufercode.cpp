#include <iostream>
using namespace std;
int main ()
{
	int n;
	cout<< "Nhap so canh: ";
	cin>>n;
	int m=n+1;//m la so dinh
	int A[m][m]={0};
	int B[m]={0};
	cout<<endl<<"Nhap cac canh: \n";
	int a,b;
	for(int i=0;i<n;i++)
	{
		cout<< "\nCanh thu "<<i+1<<": ";
		cin>>a>>b;
		A[a][b]=1;
		A[b][a]=1;
		B[a]++;
		B[b]++;
	}
	//in ra prufer code:
	cout<<endl<<"prufer code: ";
	int dem=0;
	while(dem!=n-1)
	{
		for(int i=0;i<m;i++)
		{
			if(B[i]==1&&i!=0)
			{
				for(int j=0;j<m;j++)
				{
					if(A[i][j]==1)
					{
						cout<<j<<" ";
						A[j][i]=0;
						A[i][j]=0;
						--B[i];
						--B[j];
						dem++;
						break;
					}
				}
				break;
			}
		}
	}
	return 0;
}
