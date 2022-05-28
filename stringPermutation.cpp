#include<iostream>
#include<string>

using namespace std;

void printstrprm(string ques ,string ans){
    // cout<<"Ques "<<ques<<"  Ans "<<ans<<endl;
    if(ques.length()==0){
        cout<<endl<<ans<<endl;
        return ;
    }
    for(int i=0;i<ques.length();i++){
    // cout<<"Ques "<<ques<<"  Ans "<<ans<<endl;
    char ch = ques.at(i);
    string res = ques.substr(0,i)+ques.substr(i+1);
    // cout<<"Ch "<<ch<<endl;
    // cout<<"Res "<<res<<endl;
     printstrprm(res,ans+ch);
    }
}


int main(){
    printstrprm("abc","");
    return 0;
}