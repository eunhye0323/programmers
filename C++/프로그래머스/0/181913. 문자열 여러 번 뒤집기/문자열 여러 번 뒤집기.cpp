#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    
    cout << my_string << " ";
    for(int i = 0; i < queries.size(); i++){
        vector<int> query = queries[i];
        
        int s = query[0];
        int e = query[1];
        reverse(my_string.begin() + s, my_string.begin() + e + 1);      
    }
    return answer = my_string;
}