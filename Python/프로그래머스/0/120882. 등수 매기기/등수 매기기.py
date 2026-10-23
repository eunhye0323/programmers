def solution(score):
    answer = []
    
    ave_score_list = []
    for i in score:
        ave_score = (i[0] + i[1])/2
        ave_score_list.append(ave_score)

    sorted_score_list = sorted(ave_score_list, reverse=True)
    
    for avg in ave_score_list:
        rank = sorted_score_list.index(avg) + 1
        answer.append(rank)

    return answer