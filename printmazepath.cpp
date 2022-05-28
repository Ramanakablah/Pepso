#include<iostream>
#include<cstring>

using namespace std;

void printmazepath(int sr ,int sc ,int dr ,int dc, string path){
    if(sc==dc&&sr==dr){
        cout<<path<<endl;
        return;
    }

    if(sr<dr){
        printmazepath(sr+1,sc,dr,dc,path+"h");
    }
    if(sc<dc){
        printmazepath(sr,sc+1,dr,dc,path+"v");
    }
}

int main(){
    printmazepath(0,0,2,2,"");
    return 0;
}