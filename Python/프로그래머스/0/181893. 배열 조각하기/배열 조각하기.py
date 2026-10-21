def solution(arr, query):
    answer = []
    temp = arr
    query_num = len(query)
    
    for i in range(query_num):
        if(i % 2 == 0):
            temp = temp[:query[i] + 1]
        else:
            temp = temp[query[i]:]
            
        answer = temp
    return answer