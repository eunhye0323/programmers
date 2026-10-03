#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    //key가 int, value가 vector<string>인 map
    map<int, vector<string>> str_map;
    
    for(int i = 0; i < strArr.size(); i++){
        int str_size = strArr[i].size();
        //str_size를 key로 가진 문자열을 push_back
        str_map[str_size].push_back(strArr[i]);
    }
    int count = 0;
    for(const auto& n : str_map){
        count = n.second.size();
        if(answer < count) answer = count;
    }
    
    return answer;
}