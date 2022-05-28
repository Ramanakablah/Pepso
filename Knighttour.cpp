// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void Display(int arr[4][4]){
    cout<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Knighttour(int arr[4][4] ,int rpos ,int cpos ,int UM){
    
    // Display(arr);
    // cout<<endl<<rpos<<" "<<cpos<<" "<<UM<<" "<<endl;
    
        if(cpos>=4 || cpos<0 || rpos>=4 || rpos<0 || arr[rpos][cpos]>0){
            // cout<<endl<<rpos<<" "<<cpos<<" "<<UM<<" "<<endl;
            // cout<<endl<<"Line 23 returned"<<endl;
            return;
        }
    else if(UM == 16){
        arr[rpos][cpos]=UM;
        cout<<endl;
        Display(arr);
        cout<<endl;
        arr[rpos][cpos]=0;
        return;
    }
    
    // cout<<endl<<rpos<<" "<<cpos<<" "<<UM<<" "<<endl;
    
    arr[rpos][cpos]=UM;
    Knighttour(arr,rpos+1,cpos+2,UM+1);
    Knighttour(arr,rpos+1,cpos-2,UM+1);
    Knighttour(arr,rpos+2,cpos+1,UM+1);
    Knighttour(arr,rpos+2,cpos-1,UM+1);
    Knighttour(arr,rpos-1,cpos+2,UM+1);
    Knighttour(arr,rpos-1,cpos-2,UM+1);
    Knighttour(arr,rpos-2,cpos+1,UM+1);
    Knighttour(arr,rpos-2,cpos-1,UM+1);
    arr[rpos][cpos]=0;
}

int main() {
   
   int A[4][4] ={
       {0,0,0,0},
       {0,0,0,0},
       {0,0,0,0},
       {0,0,0,0}
   };
   
   Knighttour(A,1,3,1);
    return 0;
}