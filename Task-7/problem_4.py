"""
	Nested Lists -----> HackerRank
"""
if __name__ == '__main__':
    stud = []
    scor = [] 
    for _ in range(int(input())):
        name = input()
        hisscore = float(input())
        stud.append([name, hisscore])
        scor.append(hisscore)
        
    min_value = min(scor)
    count = scor.count(min_value)
    
    if count != len(scor): 
        for i in range(count):
            scor.remove(min_value)
        
        min_value = min(scor)
    
    stud = sorted(stud)
    for i in range(len(stud)):
        if min_value == stud[i][1]:
            print(stud[i][0])