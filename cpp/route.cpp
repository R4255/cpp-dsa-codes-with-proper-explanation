#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char sent[100];
    cin.getline(sent,100);
    int x=0,y=0;
    for (int i=0;sent[i]!='\0';i++){
        switch(sent[i]){
            case 'N':y++;
                break;
            case 'S':y--;
                break;
            case 'E':x++;
                break;
            case 'W':x--;
                break;
        }
    }
    cout<<"final x and y are "<<x <<','<<y<<endl;
    //just doing for the first quadrant;
    if (x>=0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }
}