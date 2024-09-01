#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cout<<"enter the "<<i+1<<" element : ";cin>>arr[i];
    }
    cout<<"array created successfully."<<endl;
    cout<<"we are now performing the selection sort - "<<endl;
    for(int i=0 ; i<n-1 ; i++){   // we use i<n-1 or j=i+1 , because it starting we swap the min. element  with the begining , so as the first element is already swapped , so we use j = i+1;
    //now again , we will find the min. element in the array and swap it with the second element as the first element is already sorted. and so on ,so in this process the last element would be already sorted , so we use i<n-1.
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"the array after sorting is : "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}