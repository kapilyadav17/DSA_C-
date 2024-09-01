#include<iostream>
using namespace std;
int sum(int n){
    int answer = 0;
    for(int i=1 ; i<=n ; i++){
        answer += i;
    }
    return answer;
}
int main(){
    int n;
    cout<<"enter n : ";cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}







//we can also do this by using this method - 
//to find the sum of first n natural numbers 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";cin>>n;
    int answer = 0; //we have initialized answer to zero , it means that it will start from zero.
    for(int i=1 ; i<=n ; i++){
        answer = answer + i;
    }
    cout<<"your sum is : "<<answer<<endl;
    return 0;
}