Array=list(map(int,input().split()))
for j in range(1,len(Array)):
    key=Array[j]
    i=j-1
    while i>=0 and Array[i]>key:
        Array[i+1]=Array[i]
        i-=1
    Array[i+1]=key
print("Sorted Array:",Array)
