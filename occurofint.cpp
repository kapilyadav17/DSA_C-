//we are counting the number of occurences of an integer in the array.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the Array : ";cin>>size;
int arr[size];
    cout<<"we are entering the elements of the array : "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<"Enter the "<<i+1<<" element : ";cin>>arr[i];
    }
    cout<<"we have to count that how many times a integer comes in the array : ";
    int count=0;
    int num;
    cout<<"enter the number , which you want to count : ";cin>>num;
    for(int i=0 ; i<size ; i++){
        if(arr[i]==num){
            arr[i] = arr[i]/10;
            count++;
        }
    }
    cout<<"your number "<<num<<" is repeated "<<count<<" times.";
    return 0;
}