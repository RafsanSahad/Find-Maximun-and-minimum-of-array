//
//  main.cpp
//  implement binary search
//
//  Created by Rafsan Sahad on 5/13/24.
//
#include <iostream>
using namespace std;
void maxmin(int a[],int n){
    int i,max=a[0],min=a[0];
    for(i=0;i<=n-1;i++)
    {
        if (max<a[i]) {
            max=a[i];
        }
        if (min>a[i]) {
            min=a[i];
        }
    }
    cout<<"The maximun value in the array is :"<<max<<endl;
    cout<<"The minimum value in the array is :"<<min<<endl;
}
int main(){
    int c;
    cout<<"Enter the array size :";
    cin>>c;
    int a[c];
    for (int i=0; i<=c-1; i++) {
        cin>>a[i];
    }
    maxmin(a, c);
    return 0;
}
