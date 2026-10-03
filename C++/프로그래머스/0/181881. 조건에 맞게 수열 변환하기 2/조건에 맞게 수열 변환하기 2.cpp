#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> prev_arr;
    
    int count = 0;
    while(true){
        //temp에 현재 arr를 assign
        prev_arr = arr;
        
        for(int i = 0; i < arr.size(); i++){        
            //cout << "현재 count, idx, arr[i] : " << count << " " << i << " " << arr[i] << endl;

            if((arr[i] >= 50) && (arr[i] % 2 == 0)){
                arr[i] = arr[i] / 2;
                //cout << "적용 후 현재 arr[i] : " << arr[i] << " ";
            }
            else if((arr[i] < 50) && (arr[i] % 2 == 1)){
                arr[i] = arr[i] * 2 + 1;
                //cout << "적용 후 현재 arr[i] : " << arr[i] << " ";
            }
            //cout << endl;
        }
        
        // cout << "현재 arr : "; 
        // for(const auto& n : arr){
        //     cout << n << " ";
        // }
        // cout << endl;
        
        if(arr == prev_arr){
            break; 
        }      
        count++;
    }

    return answer = count;
}