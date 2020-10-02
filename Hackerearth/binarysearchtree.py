# link to question: https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/b-sequence-f919fc86/description/

# Binary Search Tree in strictly increasing followed by strictly decreasing order is referred to as B Sequence

n=int(input())
a=list(map(int, input().split()))
q=int(input())
idx=a.index(max(a))
left=set(a[: idx])
lsize=len(left)
right=set(a[idx+1 :])
rsize=len(right)
mx=a[idx]
# Conditions for B Sequence are checked : 
for i in range(q):
    val=int(input())
    if val>mx:
        left.add(mx)
        mx=val
        lsize+=1
        print(lsize+rsize+1)
    elif val==mx:
        print(lsize+rsize+1)
    else:
        if val in left:
            if val in right:
                print(lsize+rsize+1)
            else:
                right.add(val)
                rsize+=1
                print(lsize+rsize+1)
        else:
            left.add(val)
            lsize+=1
            print(lsize+rsize+1)
left.add(mx)
left=sorted(list(left)) # Left sub tree
right=sorted(list(right),reverse=True)  # Right Sub tree
print(*(left+right))
