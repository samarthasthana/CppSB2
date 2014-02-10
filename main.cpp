#include <cstdlib>
#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

//Zillow SDE test
// Given a string, write a routine that converts the string to a long, without using built //in functions that would do this. Describe the limitations of your code

/* 
Enter the string 
find the length
start from the end and move towards the starting end
convert each char to long using casting and multiply with the 10's power
keep adding to the final number
on reaching the start end
return the long number generated

time complexity = O(n)
additional space complexity = O(1) constant and does not scale

*/


long str2Long(string str){
	long len= str.length(),i=0;
	long num=0;
        int ex=0;
        long temp=0;
	long zero=(long)'0';
	i=len-1;
	while(i>=0){
            temp=(long)str[i]-zero;  
            if((temp>=0 && temp <=9)){            
            num+=(temp* pow(10.0,ex));
		//num+=((long)str[i]-zero)*(long)(pow((long)10,(int)ex));
		ex++;
		i--;
            }//if 
            else{
                return -1;
            }
	}
	return num;
}

void test_str2Long(){
    //test 1 Normal string
    string str="123";
    long val=str2Long(str);
    if(val==123){
        cout<<"Test1 passed\n ";
    }else
        cout<<"Test1 Failed value received ="<<val;
    //test 2 zero string
    str="000";
    val=str2Long(str);
    if(val==000){
        cout<<"Test2 passed \n";
    }else
        cout<<"Test2 Failed value received ="<<val;
    //testing negative numbers "-123" should give invalid input
    str="-123";
    val=str2Long(str);
    if(val==-1){
        cout<<"Test3 passed \n";
    }else
        cout<<"Test3 Failed value received ="<<val;
    
    //testing invalid inputs "abc"
    str="abc";
    val=str2Long(str);
    if(val==-1){
        cout<<"Test4 passed \n";
    }else
        cout<<"Test4 Failed value received ="<<val;
}


int main(int argc, char** argv) {

    return 0;
    
}