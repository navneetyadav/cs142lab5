#include<iostream>
using namespace std;

//swapping
//partition
//quicksort:conatins all the three function



void qs(int arr[],int low,int high)
{
	//when there is only one element left
	if(lowh<high)
	{
		int pivot=high;
		temp=0;
		for(int i=high-1;i>=low;i--)
		{
			if(arr[i]>arr[pivot])
			.{			//swapping the elements so as to bring the pivot in its correct position(between the smaller and the greater)
				temp=arr[i];
				for(int j=i;j<pivot;j++)
				{
				arr[j]=arr[j+1];
				}
				arr[pivot]=temp;
				pivot--;
			}//swapping complete
		}
		//recursion part of the partition
		qs(arr,low,pivot-1);//from lower elements to pivot
		qs(arr,pivot+1,high);//from pivot to lower elements
	}
}
//displaying the elements in the desired order(sorted)
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	//declaring variable for the no. of elements in the array
	int n;
	//asking the user to enter the elements
	cout<<"enter the number of elements of the array";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array....only integers!!!!"<<endl;
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	qs(arr,0,n-1);
	display(arr,n);
	return 0;
}
