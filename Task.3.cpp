#include <iostream>

void replaceSpaces(std::string s){
    int len = s.length();
    std::string t = "%20";
    for(int i = 0;i < len;i++){
        if(s[len]== ' '){s[len]=' ';}
        if(s[i]==' '){
            s.replace(i,1,t);
        }
    }
    
    if(s.find(' ')!=std::string::npos){
       s.erase(len);
    }
    std::cout << s << std::endl;
}


int main(){
    std::string s = "Hello World Bye";
    replaceSpaces(s);
}