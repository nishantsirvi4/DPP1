#include <bits/stdc++.h>

using namespace std;

    void solve(int n,int k,int index,vector<int>& v){
        
        //base case
        if(v.size() == 1){
            return;
        }
        index = (index + k) % v.size();
        v.erase(v.begin() + index);
        solve(n,k,index,v);
    }

int main(){

      int n = 5;
      int k = 3;

      vector<int> v(n);
       
       for(int i = 0;i < n;i++)v[i] = i + 1;
       
       solve(n,k-1,0,v);
       int ans = v[0];
       
       cout<<ans<<endl;

       return 0;

}