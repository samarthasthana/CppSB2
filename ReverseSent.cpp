//reverse a sentences' words
// e.g long live the queen => queen the live long

#include <cstdlib>
#include<stdio.h>
#include<iostream>
using namespace std;


string reverse(string str){
int i=0,j=str.length()-1;
char temp;
while(i<j){
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}//while
return str;
}


void reverseSent(string str){
string arr;
string temp,newstr;
str+=' ';//adding the last space
int len=str.length(),i=0;
arr=str;
//first reverse all the words
while(i<len){
if(arr[i]==' '){
temp =reverse(temp);
newstr+=temp;//creating the new string
newstr+=' ';//adding the space
temp="";
}//if
else{
temp=temp+arr[i];
}//else
i++;
}//while
//now reverse all the
newstr=reverse(newstr);
cout<<newstr<<endl;
}//eof


/*int main(int argc, char** argv) {
    string value;
    cout<<"Enter the String to be reversed \n";
    getline(cin,value);
    cout<<"Reversed sentence is = \t ";
    reverseSent(value);
return 0;    
}*/
