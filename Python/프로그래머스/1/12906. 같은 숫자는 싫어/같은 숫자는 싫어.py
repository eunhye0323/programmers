def solution(arr):
    answer = []
    
    answer.append(arr[0])
    for i in range(1, len(arr)):
        prev_num = arr[i-1]
        if(arr[i] != prev_num):
            answer.append(arr[i])
            
    return answer