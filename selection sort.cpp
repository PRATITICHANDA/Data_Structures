#include<iostream>
using namespace std;
main()
{
	int a[100],i,j,n,temp,min;
	cout<<"Enter the number of elements \n";
	cin>>n;
	cout<<"Enter the elements \n";
	for (i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		temp=a[min];     //interchanging the minimum element with first one
		a[min]=a[i];
		a[i]=temp;

	}
	cout<<"The sorted array is \n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
