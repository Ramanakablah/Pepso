#include<iostream>
#include <string>
using namespace std;

void printmazejump(int sr, int sc ,int dr ,int dc , string path){
    

    for(int i=1;i<dc;i++){
        printmazejump(sr,sc+i,dr,dc, path+"h"+to_string(i));
    }

    for(int i=1;i<dc;i++){
        printmazejump(sr+i,sc,dr,dc, path+"v"+to_string(i));
    }

    for(int i=1;i<dc;i++){
        printmazejump(sr+i,sc+i,dr,dc, path+"d"+to_string(i));
    }
}

int main(){
    return 0;
}