//we are finding a peak element , which is not smaller than its neighbours
#include<iostream>
using namespace std;
int main(){
    int size,j;
    cout<<"enter the size of the array : ";cin>>size;
    int arr[size];
    cout<<"entering the elements of the array :\n";
    for(int i=0 ; i<size ; i++){
        cout<<"enter the "<<i+1<<" element : ";cin>>arr[i];
    }
    cout<<"the array is :\n";
    for(int i=0 ; i<size ; i++){
    cout<<arr[i]<<" ";
    }
    int mid = (size-0)/2;
    for(int i=0 ; i<size ; i++){
        if(arr[mid]>=arr[mid+1] && arr[mid]>=arr[mid-1]){
            cout<<"we have found the peak element , and the element is : "<<arr[mid];
            break;
        }
        else if(arr[mid]<arr[mid-1]){
            mid--;
        }
        else if(arr[mid]<arr[mid+1]){
            mid++;
        }
    }

    return 0;
}