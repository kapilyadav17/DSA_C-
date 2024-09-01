//for printing the inverse triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n : ";cin>>n;
    for(int i=n ; i>=1 ; i--){  //here i=rows and j=columns , in short. 
        for(int j=1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;              

    }
    return 0;
}

//in first iteration , the j vala loop will run n times menas it will print the pattern * * * *
 //                                                                                     * 
 //                                                                                     * 
 //                                                                                     *
                                                                    
// in 2nd iteration , th loop will run  like this :  *  *  *  *
 //                                                  *  *  *
//                                                   *  *
//                                                   *