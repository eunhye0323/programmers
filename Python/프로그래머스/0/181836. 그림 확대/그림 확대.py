def solution(picture, k):
    answer = []
    
    pic_len = len(picture)
    
    for i in range(pic_len):
        temp = picture[i]
        line = ""
        for j in temp:
            line += j*k
        
        for _ in range(k):
            answer.append(line)
    return answer