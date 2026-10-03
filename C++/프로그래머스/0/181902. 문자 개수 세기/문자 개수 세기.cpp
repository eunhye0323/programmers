#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    
    char alpha1 = 'A';
    char alpha2 = 'a';
    for(int i = 0; i < my_string.size(); i++){
        if(isupper(my_string[i])){
            int temp = my_string[i] - alpha1;
            cout << temp << " ";
            answer[temp]++;
        }
        else{
            int temp = my_string[i] - alpha2;
             cout << temp + 26 << " ";
            answer[temp + 26]++;
        }
    }
    return answer;
}