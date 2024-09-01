#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[],int l,int r){  //it is the partition function used . It takes an array and 2 indices l and r as parameters.
    int pivot = arr[r]; //here we assume that our last element is our pivot element.
    int i=l-1;  //If we find an element smaller than the pivot, we first increment i (so now i = l), and then swap.
    for(int j=l ; j<r ; j++){  //This starts a loop that will iterate through all elements in the current partition except the pivot (which is at index r).
        if(arr[j]<pivot){ //For each element, we check if it's smaller than the pivot.
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quicksort(int arr[],int l,int r){
    if(l<r){
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
        
}
int main(){
    int n;
    cout<<"enter the size of the array : ";cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cout<<"enter the "<<i<<" element : ";cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}