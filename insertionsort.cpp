#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of array : ";cin>>n;
  int arr[n];
  for(int i=0 ; i<n ; i++){
    cout<<"Enter the "<<i+1<<" Element : ";cin>>arr[i];
  }
  cout<<"Array was created successfully : "<<endl;
  for(int i=1 ; i<n ; i++){ // in insertion sort , we assume that the first word is already sorted , so we start after the 1st word.
     int temp = arr[i]; //it is a variable that will store the current element.
     int j = i-1; // here j will start from the i-1 , suppose if i=1 , so j will start from the 0th element.
     while(arr[j]>temp && j>=0){ //it checks that , if the element in j is greater than i , or we can say that if left element is greater than right ,then shift them.
      arr[j+1] = arr[j]; //it shifts the arr[j] to right , because it is bigger.
      j--; //ab kyunki j bda h temp se to vo right me shift ho gya , to ab hame j ki value kam krni h.
     }
     arr[j+1] = temp;
  }
  cout<<"array sorted successfully - "<<endl;
  for(int i=0 ; i<n ;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}