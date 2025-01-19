#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp.insert({"Dheeraj Kumar Roy",100});
    mp.insert({"Sanjida AKTER Lamia",200});
    //Ault:
    mp["DK Roy"]=400;
    mp["Lamia"]=500;


    cout<<mp["Dheeraj Kumar Roy"]<<endl;
    //Ault:
    if(mp.count("Dheeraj Kumar Roy"))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    //Ault:
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}