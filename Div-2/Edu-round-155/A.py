m = int(input())

for p in range(m):
    n=int(input())

    all = []

    for i in range(n):
        
        s,e=map(int,input().split())
        all.append([s,e])

    flag = 0
    for i in range(1,n):

        if(all[0][0] <= all[i][0]):
            if(all[0][1] <= all[i][1]):
                print(-1)
                flag = 1

    if flag==0 :
        print(all[0][0])
    
