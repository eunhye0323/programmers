#include <string> 
#include <vector> 
#include <algorithm> 
#include <iostream> 
 
using namespace std; 
 
bool compare_nums(string a, string b){ 
    return a+b > b+a;            
} 
string solution(vector<int> numbers) { 
    vector<string> str_nums; 
     
    string answer = ""; 
    for(const auto& n : numbers){ 
        str_nums.push_back(to_string(n)); 
    } 
     
    sort(str_nums.begin(), str_nums.end(), compare_nums); 
     
    for(const auto& n : str_nums){ 
        answer += n; 
    }
    
    if(answer[0] == '0') answer = '0';
    
    return answer; 
}