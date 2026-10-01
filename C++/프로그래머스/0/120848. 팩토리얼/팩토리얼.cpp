#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int i;
    int num = 1;
    
    for(i = 1; num <= n; ++i){
        num = num * i;
        cout << num << " ";     
    }
    
    return answer = i - 2;
}