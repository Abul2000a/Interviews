#include <iostream>
#include <vector>


bool is_rotation(const std::string& str1, const std::string& str2)
{
  if(str1.size()!=str2.size())
    return false;

  std::vector<int> prefixes(str1.size(), 0);
  for(int i = 1, j = 0; i < str1.size(); i++) {
    while(j>0 && str1[i]!=str1[j])
      j = prefixes[j-1];
    if(str1[i] == str1[j]) j++;
    prefixes[i] = j;
  }

  int i=0, j=0;
  for(; i<str2.size(); i++) {
    while(j > 0 && str2[i] != str1[j])
      j = prefixes[j-1];
    if(str2[i] == str1[j]) j++;
  }
  for(i = 0; i < str2.size(); i++) {
    if(j >= str1.size()) return true;
    while( j>0 && str2[i] != str1[j])
      j = prefixes[j-1];
    if(str2[i] == str1[j]) j++;
  }

  return false;
}


int main(){
    std::string s = "waterbottle";
    std::string t = "rbottlewate";
    std::cout << is_rotation(s,t);

}