

#include <cstdlib>
#include<stdio.h>
#include<iostream>

using namespace std;

//checking if arr[i]==i in an ascending distinct element array

void checkArr(int * arr, int start,int end){
    int mid=0;
    mid=end-start;
    if(start>end){
        cout<<"Not Found \n";
        return ;
    }
    if(arr[mid]==mid){
        cout<<"Found \n";
        return ;
    }
    if(arr[mid]<mid){
        checkArr(arr,mid+1,end);        
    }
    else{
        checkArr(arr,start,mid-1);
    }    
}

int main(int argc, char** argv) {

    int * arr,len=0,i=0;
    cout<<"What is the length \n";
    cin>>len;
    arr=new int[len];
    cout<<"Enter the numbers in the array \n";
    while(i<len){
        cin>>arr[i];
        i++;
    }
    checkArr(arr,0,len-1);
    return 0;
}

