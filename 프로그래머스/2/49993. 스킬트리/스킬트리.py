
def solution(skill, skill_trees):
    imposs = 0 # count the number of impossible skill trees
    
    for i in skill_trees:
    	# filter letters that are in skill only
        tmp = []
        for j in i:
            if j in skill:
                tmp.append(j)
        
        # see if the letters appear in the same order as skill
        for i in range(len(tmp)):
            if tmp[i] != skill[i]:
                imposs += 1
                break
                
    answer = len(skill_trees)-imposs
    
    return answer