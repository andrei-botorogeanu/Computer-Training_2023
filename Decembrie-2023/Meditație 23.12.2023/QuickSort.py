def main():
    arr = [5,4,3,2,1,-1,-2,-3,-4,-5]
    def quicksort(low, high):
        i = low
        j = high
        #pivotul se poate luat la mijloc, low, high, sau random
        pivot_index = (low + high) >> 1
        pivot_value = arr[ pivot_index ]

        while i <= j:
            while arr[i] < pivot_value:
                 i +=1
            while arr[j] > pivot_value:
                j -=1
            if i <= j:
                #tmp = arr[i]
                #arr[i] = arr[j]
                #arr[j] = tmp
                arr[i],arr[j] = arr[j], arr[i]
                i+=1
                j-=1

        if low < j:
            quicksort(low, j)
        if i < high:
            quicksort(i, high)
    print(arr)
    quicksort(0, len(arr) - 1)
    print(arr)
main()
##    index
##    0 1 2  3  4 5 6
## V: 5 4 3 -3 -4 0 2
##    i         j
## V:-4 4 3 -3 5 0 2
##      i    j
## V:-4 -3 3 4 5 0 2
        #  i
        #j

        #v1 = [-4,-3]
        #v2 = [3,4,5,0,2]
#      2
#  3 4 5 0 2 => 0 2 3 4 5
#      P
#      i   j
#  3 4 2 0 5
#          i
#        j
#
#  3 4 2 0
#      P
#  i     j

#  0 4 2 3
#    i j

#  0 2 4 3        =>0 2 3 4
#      i
#    j

# quicksort(0,1)
# quicksort(2,3)
