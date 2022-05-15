#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


int i;

vector<string> getstraigntpath(int number)
{
    int num = number;
    cout<<"num "<<num<<endl;
    if (num == 0)
    {
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    else if (num < 0)
    {
        vector<string> bres;
        return bres;
    }

    vector<string> path3 = getstraigntpath(num - 3);
    vector<string> path2 = getstraigntpath(num - 2);
    vector<string> path1 = getstraigntpath(num - 1);

    vector<string> veca;
    for (i = 0; i < path3.size(); i++)
    {  cout<<" path3 "<<path3[i]<<endl;
        veca.push_back("3" + path3[i]);
    }
    for (i = 0; i < path2.size(); i++)
    {
      cout<<" path2 "<<path2[i]<<endl;
        veca.push_back("2" + path2[i]);
    }
    for (i = 0; i < path1.size(); i++)
    {
      cout<<" path1 "<<path1[i]<<endl;
        veca.push_back("1" + path1[i]);
    }

    return veca;
}

int main()
{
    vector<string> res;
    res = getstraigntpath(4);

    for(i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}