#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<string> s = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans;
    
    map<string,vector<string>> mp;

    for(int i = 0;i < s.size();i++){
       string str = s[i];
       sort(str.begin(),str.end());
       mp[str].push_back(s[i]);
    }

    for(auto it : mp){
        ans.push_back(it.second);
    }

    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
    }
    


    return 0;
}