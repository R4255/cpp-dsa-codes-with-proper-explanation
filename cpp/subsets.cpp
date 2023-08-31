//to print all the subsets of the string
#include<iostream>
#include<vector>
//we will use recursion and backtracking here 
using namespace std;
void findsubsets(char *input,char * output,int i ,int j){
    //base case 
    if(input[i]=='\0'){
        output[j]='\0';
        if(output[0]=='\0'){
            cout<<"NULL"<<endl;
        }
        cout<<output<<endl;
        return;
    }
    //recursive case
    output[j]=input[i];
    findsubsets(input,output,i+1,j+1);
    findsubsets(input,output,i+1,j);
}
int main(){
    char input[100];
    char output[100];
    cin>>input;
    cout<<"------------------"<<endl;
    findsubsets(input,output,0,0);
    return 0;
}