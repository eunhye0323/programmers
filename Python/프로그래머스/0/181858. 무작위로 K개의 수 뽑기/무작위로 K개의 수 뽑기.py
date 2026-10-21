def solution(arr, k):
    answer = []
    
    # dict.fromkeys()로 입력 순서 유지
    temp = list(dict.fromkeys(arr))
    temp_num = len(temp)
    
    if(temp_num >= k):
        # 0번째부터 k번째까지만 list에 추가
        answer = temp[0:k]
    else:
        answer = temp
        # temp_num번째부터 k번째까지 -1을 추가
        for i in range(temp_num, k):
            answer.append(-1)
        
    return answer