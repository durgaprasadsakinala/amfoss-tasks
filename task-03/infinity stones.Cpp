 // infinity stones;
#include <cmath> 
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int n;int m;int k;vector<int >s;vector<int >l;int t;cin>>t;int p;  // taking input from user.



            for (int j=0;j<t;j++){
                cin>>n>>m>>k;
            for(int i=0;i<m;i++){cin>>p;s.push_back(p);            }
             for(int i=0;i<m;i++){cin>>p;l.push_back(p);}


            sort(l.begin(),l.end());
            reverse(l.begin(),l.end());
            p=0;
            for (int i=0;i<k;i++){

                p=p+l[i];


            }

            if(p>=n){

                cout<<"YES"<<endl;
            }else{cout<< "NO"<<endl; }



















            }





    return 0;
}
