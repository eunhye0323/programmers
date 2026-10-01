#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string num_str = to_string(n);
    vector<char> num_vec;
    
    for(int i = 0; i < num_str.size(); i++){
        num_vec.push_back(num_str[i]);    
        //cout << num_str[i];
    }
    
    sort(num_vec.rbegin(), num_vec.rend());
    
    num_str = "";
    for(int j = 0; j < num_vec.size(); j++){
        num_str += num_vec[j];
    }
    answer = stoll(num_str);
    
    return answer;
}