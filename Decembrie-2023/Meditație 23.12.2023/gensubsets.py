def main():
    sum_max = 0
    fin = open("flip.in", "r")
    #list comprehension
    lines_cols = [int(i) for i in fin.readline().split()]
    #print(lines_cols)
    n = lines_cols[0]
    m = lines_cols[1]
    #print(n,m)
    matrix = [list(map(int, fin.readline().split())) for _ in range(n)]
'''
fin.readline() = se citeste o linie din fisier
fin.readline().split() = ... imparte linia in mai multe elemente delimitate de spatiu
map(int, fin.readline().split()) = ...converteste elem. la integer
list(map(int, fin.readline().split())) = ...adauga fiecare linie(vector) la matrice
...for _ in range(n) = ceea ce e mai sus sa le execute de n ori
'''
    #print(matrix)
    # M = {1,2,3} no repeats
    # M = {a,b,c}
    # n = 5
    # M = {1,2,3,4,5}
    # vrem sa generam toate submultimile lui n
    # folosind bitwise
    #numarul de submultimi = 2^n
    # 8 submultimi pentru N = 3
    # 0: 000 +1
    # 1: 001
    # 2: 010
    # 3: 011
    # 4: 100
    # 5: 101
    # 6: 110
    # 7: 111
    size =  2**n
    mask = 1
    # 000000000000000000001 =>  1>>5 se duce 5 in stanga
    # 001 <<3 => 1000
    # 1 =     001
    # 1<<0 => 001
    # 1<<1 => 010
    # 1<<2 => 100
    # 001 & 001 => 001
    # 001 << 1 => 010 & 1 => 010 & 001

    # i = 5 => 101
    # 001 << 0 => 001 & 101 = 001
    # 001 << 1 => 010 & 101 = 000
    # 001 << 2 => 100 & 101 = 100
    # 001, 100 => j = 0 si j = 2
    # Submultime = {1, 3}
    
    def solve_flip(stack):
        nonlocal sum_max
        # nonlocal ajuta compilatorul sa-si dea seama var. globala 
        stotal = 0
        #print(stack)
        # facem o copie a matrix-ului
        matrix2 = [row[:] for row in matrix]

        #facem flip pe fiecare linie din submultimea de linii
        for line in stack:
            for j in range(m):
                matrix2[line][j] *= -1
# bitwise = operatii pe biti
        for j in range(m):
            s = 0
            for i in range(n):
                s += matrix2[i][j]
            if s < 0:
                s *= -1
            stotal += s

#    5 3
#    j
#  i 4 -2 2
#    3 -1 5
#    2 0 -3
#    4 1 -3
#    5 -3 2

        if sum_max < stotal:
            sum_max = stotal
    #generam toate submultimile liniilor pe biti bitwise
    for i in range(1, size):
        stack = []
        for j in range(0, n):
            if (mask<<j)&i:
                #print(j+1, end =" ")
               stack.append( j )
        solve_flip(stack)
        #print()
    #m_original = [[1,2,3],[1,2,3],[1,2,3]]
    #print("Original Matrix ", m_original)
    #m_copy = [row[:] for row in m_original]
    #print("copy matrix linie dupa line", m_copy)
    print(sum_max)
main()
