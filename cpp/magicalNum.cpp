#include <iostream>
using namespace std;
int binarySearch(int [],int,int);
int main()
{
   int t,n,i;
   cin>>t;
   while(t--)
   {
     cin>>n;
     int arr[n];
     for(i=0;i<n;i++)
        cin>>arr[i];
     int low=0,high=0;
     int magic=binarySearch(arr,low,high);
     
     cout<<'\n'<<magic;
     
     return 0;
     
   }
}
int binarySearch(int arr[], int low, int high)
{    
	   int i=0;high=0;
      while(arr[i]!='\0')
      {
        high=high+sizeof(arr[i]);
        i++;
      }
      low=0;
      cout<<low<<'\n';
      cout<<high;
      if(low==high)
      {
         if(low==arr[low])
            return low;
      }
      
      while(low<high)
      {
      int mid=(low+high)/2;
      if (mid==arr[mid])
          return mid;
      else if(mid<arr[mid])
          high =mid-1;
      else
         low=mid+1;
      }
        return -1;
      
}

