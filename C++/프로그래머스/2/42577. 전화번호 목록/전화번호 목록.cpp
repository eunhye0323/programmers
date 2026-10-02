#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    //key가 string, value가 int인 unordered map 
    unordered_map<string, int> phone_map;
    
    for(int i = 0; i < phone_book.size(); i++){
        //phone_book 벡터를 순회하며 phone_num을 key로 가지면서 value가 1인 map을 추가 
        string phone_num = phone_book[i];
        phone_map[phone_num] = 1;
    }
    
    for(int i = 0; i < phone_book.size(); i++){
        string phone_num = phone_book[i];
        for(int j = 0; j < phone_num.size(); j++){
            string temp = phone_num.substr(0, j);
            
            if(phone_map[temp]) {
                answer = false;
                break;
            }
            //cout << temp << endl;
        }
    }
    
    return answer;
}