#include<iostream>
using namespace std;
int Binary_search(int arr[],int n,int svalue)
{int i=0;
while(i<=n)
{
int mid=(i+n)/2;
if(svalue==arr[mid])
{
return mid;
}
if(svalue>arr[mid])
{
i=(mid+1);
}
else
{
n=(i+(mid-1));
}}
}
int main()
{
int size,search_value;
cout<<"Enter the size of Array: ";
cin>>size;
int arr[size];
cout<<"Enter "<<size<<" numbers: ";
for(int i=0;i<size;i++)
cin>>arr[i];
cout<<"Enter the value which you want to be search: ";
cin>>search_value;
int result=Binary_search(arr,size,search_value);
if(result>=0)
{
cout<<"The value "<<arr[result]<<" was found...";
}
else
{
cout<<"The value  was not found..";
}
}

