#include <iostream>


bool is_unique(std::string s){
    for(int i = 0;i<s.size()-1;i++){
            if(s[i]>=65 && s[i]<=90){
                tolower(s[i]);
            }
    }
    
    for(int i = 0;i < s.size()-1;i++){
        for(int j = i+1;j<s.size();j++){
        if(s[i]==s[j]){
            return false;
        }
        }
    }
    return true;
}


int main(){
    std::string s = "Helh";
    std::cout << is_unique(s);
}

