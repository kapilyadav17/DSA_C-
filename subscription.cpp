#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,T,X;
	cout<<"Enter Test Cases : ";cin>>T;
	for(int i=1 ; i<=T ; i++){
	    cout<<"Enter no. of friends : ";cin>>N;
	    cout<<"Enter the price : ";cin>>X;
	int subscriptions = (N+5)/6;
	int totalcost = subscriptions*X; //here the total cost = no of subscriptions required * price of one subsrciption.
	cout<<totalcost<<endl;
}
return 0;
}
