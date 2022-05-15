#include<iostream>
#include<cstring>

using namespace std;

void printstairpath(int num , string path){
    if(num == 0){
        cout<<path<<endl;
        return;
    }

    if(num>=3){
        printstairpath(num-3,path+"3");
    }
    if(num>=2){
        printstairpath(num-2,path+"2");
    }
    if(num>=1){
        printstairpath(num-1,path+"1");
    }
}

int main(){
    printstairpath(4,"");
    return 0;
}