#include<iostream>
using namespace std;
int main(){
    int key;
    int size;
    int index =- 1;
    cout<<"enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"we are entering the elements of the array : \n";
 for(int i=0 ; i<size ; i ++){
    cout<<"enter the "<<i<<" element : ";
    cin>>arr[i];
 }
 cout<<"we have created an array successfully\n";
 cout<<"enter the element to be founded\n";cin>>key;
 for(int i=0 ; i<size ; i++){
    if(arr[i]==key){
        index = i;
       break;
    }
 }
 if(index != -1){
    cout<<"element is found at position : "<<index+1;
 }
  else{
        cout<<"element not found";
    }
 return 0;
}