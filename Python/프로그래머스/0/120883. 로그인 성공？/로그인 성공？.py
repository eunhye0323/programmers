def solution(id_pw, db):
    answer = 'fail'
    
    id = id_pw[0]
    pw = id_pw[1]
    
    for i in db:
        curr_id = i[0]
        curr_pw = i[1]
        
        if((id == curr_id) and (pw == curr_pw)):
            answer = 'login'
            break;
        elif((id == curr_id) and (pw != curr_pw)):
            answer = 'wrong pw'
            
    return answer