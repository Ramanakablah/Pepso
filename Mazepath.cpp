#include<iostream>
#include<vector>

using namespace std;

int i;

vector <string> getmazepath(int row, int col ,int dr ,int dc){

    cout<<"row "<<row<<" "<<"col"<<col<<" "<<endl;
    if(row==dr && col==dc){
        cout<<"returning"<<endl;
        vector<string> bres;
        bres.push_back("");
        return bres;
    }

    vector<string> Vertical ;
    vector<string> Horizontal ;

    cout<<" Line 21 "<<"row "<<row<<" "<<"col"<<col<<" "<<endl;
    
    if(col<dc){
        cout<<endl<<"checking horizontal"<<endl;
        Horizontal = getmazepath(row,col+1,dr,dc);
    }
    if(row<dr){
        cout<<endl<<"checking vertical"<<endl;
        Vertical = getmazepath(row+1,col,dr,dc);
    }
    cout<<endl<<" Line 28 "<<Horizontal.size()<<" "<<Vertical.size()<<" "<<endl;
    vector<string> path;
    for(i=0;i<Horizontal.size();i++){
        path.push_back("h"+ Horizontal[i]);
    }
    for(i=0;i<Vertical.size();i++){
        path.push_back("v"+ Vertical[i]);
    }

    return path;
}

int main(){
    vector<string> res;
    res=getmazepath(1,1,3,3);
    for(i<0;i<res.size();i++){
        cout<<res[i]<<" "<<endl;
    }
    return 0;
}