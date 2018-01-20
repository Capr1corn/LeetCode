#include"first.h"
using namespace std;

int main(){
    vector<int> vec(10,-1);
//    auto i=vec.begin();
    fill_n(vec.begin(),vec.size(),0);
    for(auto it=vec.begin();it!=vec.end();it++)
   {
 cout<<"hello worldi"<<endl;
   }



    cout<<"hello world"<<endl;
    return 0;

}
