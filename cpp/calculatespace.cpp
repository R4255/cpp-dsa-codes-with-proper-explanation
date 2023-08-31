#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char temp=cin.get();
    int alpha=0,spaces=0,digits=0;
    while(temp!='\n'){
        if(temp>='0' and temp<='9'){
            digits++;
        }
        else if(temp==' ' or temp=='\t'){
            spaces++;
        }
        else if((temp>='a' and temp<='z')or(temp>='A' and temp<='Z')){
            alpha++;
        }
        temp=cin.get();
    }
    cout<<"digits";
    cout<<digits<<endl;
    cout<<"spaces"<<spaces<<endl;
    cout<<"alpha"<<alpha<<endl;
    return 0;
}