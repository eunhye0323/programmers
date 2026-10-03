#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int w = 0;
    int h = 0;
    
    int area = brown + yellow;
    int temp = sqrt(area);

    while(temp >= 3){
        if(area % temp == 0){
            h = temp;
            w = area / h;
            if((w-2)*(h-2)==yellow){
                break;
            }
        }
        temp--;
    }

    // 가로, 세로 크기를 순서대로 배열에 담아 return
    answer.push_back(w);
    answer.push_back(h);
    return answer;
}