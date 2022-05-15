#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

void Display(vector <int> dispa){
    for (int i = 0; i < dispa.size(); i++)
    {
        cout<<" "<<dispa[i];
    }
    cout<<endl;
}

vector<int> doing(int num){
    if(!num){
        vector <int> numba;
        // numba.push_back(1);
        return numba;
    }
     cout<<" num "<<num <<endl;
    vector <int> square;
    square = doing(num-1);
    cout<<"Pushing "<<num*num<<endl;
    square.push_back(num*num);
    Display(square);
    
        return square;
}
// vector <string> doing(string str){
   
//    if(!str.size()){
//        vector<string> bres;
//        bres.push_back("");
//        return bres;
//    }
//    string stri = str.substr(0,1);
//    vector <string> holda = doing(str.substr(1,str.size()));
//    Display(holda);
//    vector <string> resulta ;
//    for(int i=0;i<holda.size();i++){
//    resulta.push_back(holda[i]);
//    }
//    Display(resulta);
//    return resulta;

// }


int main(){
    // string word = "SUMMON";
    vector<int> fres;
     fres = doing(10);
     Display(fres);
    return 0;

}
