def subsets():
    str = "AND"
    #print(str[2])
    # Set = {a,b,c}
    # {a},{b},{c},{a,b}....
    # M = {1,2,3}
    #      012345
    # ne ramane de facut sa generam submultimile unei
    # multimi de 6 elemente
    # M = {1,2,3,4,5,6}
    size = len( str )
    N = 2**size
    mask = 1
    for i in range( 1, N ):
        for j in range(size):
            if (mask<<j)&i:
                print(j, end=" ")
        print()
    print("Avem in total: ", 2**size, "Submultimi")
subsets()
