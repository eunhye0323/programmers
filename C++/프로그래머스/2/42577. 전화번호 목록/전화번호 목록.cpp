#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    sort(phone_book.begin(), phone_book.end());
    
    for(int i = 0; i < phone_book.size() - 1; i++){
        //i번째 전화번호가 j번째 전화번호의 substr 일 경우 false
        if(phone_book[i+1].find(phone_book[i]) == 0){
            //cout << phone_book[i] << " " << phone_book[i+1] << " ";
            answer = false;
            break;
        }
    }
    
    return answer;
}