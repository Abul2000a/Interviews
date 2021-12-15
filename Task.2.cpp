#include <iostream>
#include <algorithm>

bool is_permut(std::string s,std::string t){
    std::sort(s.begin(),s.end());
    std::sort(t.begin(),t.end());
    if(s==t){return true;}
    return false;
}

int main(){
    std::string s = "Hello";
    std::string c = "lloHe";
    std::cout << is_permut(s,c);
}