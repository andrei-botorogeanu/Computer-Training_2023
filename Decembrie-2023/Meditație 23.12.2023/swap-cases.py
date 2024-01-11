def main():
    #am declarat o variabila de tip sir de caracter
    str = "HeLlO, aNdReI!"
    #am definit o variabila de tip intreg
    variable = 10

    earth = 300
    moon = 28.00

    def apply_earth():
        
        nonlocal earth
        #daca nu folosim nonlocal, obtinem eroare:
        #UnboundLocalError: local variable 'earth' referenced before assignment
        earth = earth + 65.24

    def apply_moon():
        nonlocal moon
        moon = moon + 1.53

    #str = "hElLo"# > HeLlO
    def swapcases( str ):
        #variabila global
        nonlocal variable
        print("variable = ",variable)
        variable +=2
        new_string = ""
        #new_string = new_string + 'l'
        for ch in str:
            #print(ord(ch))
            if ord(ch) in range(65, 91):
                #care este codul lui "a" si codul lui "A"
                #65+26 = 91
                new_string += chr(ord(ch) + 32)
            elif ord(ch) in range(97, 123):
                #97+26=123
                new_string += chr(ord(ch) - 32)
            else:
                new_string += ch
        return new_string

    def func2():
        nonlocal variable
        #tiparim pe stdout valoarea variabilei
        print("variable = ",variable)
        variable+=5

    def func3():
        print("call func3")
        print("variable = ",variable)

    print(str)
    str = swapcases(str)
    print(str)
    #In python avem deja functiile predefinite:
    # string.upper() si string.lower()
    print("UPPER".lower())
    print("lower".upper())

    func2()
    func3()

    #codurile ASCI pentru alfabetul englez
    for i in range(97,123):
        print(i)

    for i in range(65,91):
        print(i)

    print("codul = ",ord('A'))

    #ord('A') => returneaza codul ASCII al literei A, adica 65
    #ord('a') => returneaza codul ASCII al literei a, adica 97
    # cu chr => converteste codul la litera, cu alte cuvinte chr(90) => 'Z'
    print(chr(90))

    def solve_moon_completes():
        print("earth", earth)
        print("moon", moon)
        print("The moon completes", earth/moon, "orbits per Earth year")

    apply_earth()
    apply_moon()
    solve_moon_completes()
main()
