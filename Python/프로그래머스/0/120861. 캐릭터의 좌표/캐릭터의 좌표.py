def solution(keyinput, board):
    answer = []
    w = 0
    h = 0 
    
    max_width = board[0]//2
    max_height = board[1]//2
    
    for i in keyinput:
        if((i == 'up') and (h < max_height)):
            h += 1
        elif((i == 'down') and (h > -max_height)):
            h += -1
        elif((i == 'left') and (w > -max_width)):
            w += -1
        elif((i == 'right') and (w < max_width)):
            w += 1
            
    answer.append(w)
    answer.append(h)
    return answer