#include<iostream>
#include<string>

using namespace std;

string reverseword(string s){
    string sub="";
    int j,i;
    for(i=s.length();i>=-1; i--){
        if(s[i] ==' '||i == -1){
          for(j=i+1;j>=0;j++){
              if(s[j]==' '|| s[j]=='\0'){
                  break;
              }
              else{
                sub.push_back(s[j]);
              }
          }
              sub.push_back(' ');
              i--;
        }
    }
   
    return sub;
}
int main(){
    string s=reverseword("The sky is blue");
    // reverse(s.begin(),s.end());
    cout<<s;
    
    return 0;
}