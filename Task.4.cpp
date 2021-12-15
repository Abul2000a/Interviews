#include <iostream>

bool canPolindrome(std::string str){
    int charsCount = 256;
    int count[charsCount] = { 0 };
    for (int i = 0; i < str.length(); i++)
        count[str[i]]++;
    int odd = 0;
    for (int i = 0; i < charsCount; i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
    return true;
}

int main(){
    std::string s = "racecar";
    std::cout << canPolindrome(s);
}