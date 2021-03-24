//Code for quick sort 
//Time Complexity of quick sort is O(nlogn) for best case and average case , for worst case it takes O(n^2)
#include<bits/stdc++.h>
using namespace std;
int partition(int *a,int l,int r)
{
    int pivot=a[r];
    
    int P_index=l;
    int i,t;
    for(i=l;i<r;i++)
    {
    	if(a[i]<=pivot)
        {
            t=a[i];
            a[i]=a[P_index];
            a[P_index]=t;
            P_index++;
        }
     }
  
      t=a[r];
      a[r]=a[P_index];
      a[P_index]=t;
     return P_index;
 }
 void Quicksort(int *a,int l,int r)
 {
    if(l<r)
    {
         int P_index=partition(a,l,r);
             Quicksort(a,l,P_index-1);
             Quicksort(a,P_index+1,r);
    }
}
int main()
{
    int n;
        cout<<"Enter number of elements: ";
        cin>>n;
        int a[n];
        cout<<"Enter the array elements:\n";
        for(int i=0;i<n;i++)
       {
    	 cin>>a[i];
       }
      Quicksort(a,0,n-1);
      cout<<"After Quick Sort the array is:\n";
      for(int i=0;i<n;i++)
      {
    	 cout<<a[i]<<" ";
      }
    return 0;
}
