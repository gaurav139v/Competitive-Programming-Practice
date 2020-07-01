testCases = int(input())

for test in range(testCases):
    firstline = input()
    secondLine = list(input())
    firstLine = []
    for i in firstline.split():
        firstLine.append(int(i))

    #print(firstLine)
    #print(secondLine)
    r = firstLine[3]
    c = firstLine[4]
    visited = []
    visited.append((r,c))

    def cal(i):
        global r,c
        if  secondLine[i]== 'N':
            r -= 1
        elif secondLine[i] == 'W':
            c -= 1
        elif secondLine[i] == 'S':
            r += 1
        else:
            c += 1

        if (r,c) in visited:
            cal(i)
        else:
            visited.append((r,c))
            

    for i in range(firstLine[0]):
        cal(i)        
        
    #print(visited)
    print('Case #',test+1,': ',r,' ', c,sep='')
