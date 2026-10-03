#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0; 
    
    int max_w = 0;
    int max_h = 0;
    
    for(int i = 0; i < sizes.size(); i++){
        int w = sizes[i][0];
        int h = sizes[i][1];
        
        if(w < h) swap(w, h);
        if(max_w < w) max_w = w;
        if(max_h < h) max_h = h;
    }
    return answer = max_w * max_h;
}