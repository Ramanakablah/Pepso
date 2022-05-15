#include<iostream>
#include<cstring>

using namespace std;

void printss(string ques , string ans)
{
  cout<<endl<<ques<<" "<<ans<<endl;
    if(ques.length() == 0){
        cout<<ans<<endl;
        return ;
    }

  string ch = ques.substr(0,1);
  string an = ques.substr(1);

  printss(an, ans+ch);
  printss(an, ans+"");

}

int main(){

   printss("abc","");

  return 0;
}