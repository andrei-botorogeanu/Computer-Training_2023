import sys
#sys.stdout.write("asdsad")
def main():
    for line in sys.stdin:
        #print(type(line))
        #line = line.strip('*') #rstrip - e ok, lstrip - no ok, strip - ok
        line = line.replace('*',"").strip()
        if 'exit' == line:# strip = rstrip() + lstrip()
            break
        print(f'Processing message from sys.stdin ->> {line}')

def main2():

      while True:
        data = input("Message --->")
        #if data.strip("*") == 'Exit':
        #if data.lstrip("*") == 'Exit':
        if data.rstrip("*") == 'Exit':
            break
        print(f"Processing message from input ->> {data}")
        print(f'Processing message from input ->> {data}')
        #format
        print("Processing message from input ->> %s"%data)

def test_strip():
    x = sys.argv[1]
    y = sys.argv[2]
    print(x,y)
    str = "___Python3___"
    print(str)
    print(str.strip("_"))
    print(str)
    print("Left strip:",str.lstrip("_"))
    print(str)
    print("Right strip:",str.rstrip("_"))
    print(str)

def main3():

    str = "*******A-B-C-D----------"
    str2 = "       A-B-C-D          "
    print("Stringul initial: ", str)
    print("Right strip:",str.rstrip("-"))
    print("Left strip:",str.lstrip("*"))
    str = str.lstrip("*")
    str = str.rstrip("-")
    print("Stringul modificat: ",str)
def main4():
    str = "$$$$EXIT$$$$"
    print(str)
    print(str.rstrip("$"))
    # output -> $$$$ABCDEF
    print(str.lstrip("$"))
    # output -> ABCDEF$$$$
    print(str.strip("$"))
    # output -> ABCDEF

def main5():
    str = "Hello, universe, 1111, 23333!"
    print(str)
    str = str.replace(',','*')
    print(str)

def euclid():
    print("argv[0] = ", sys.argv[0])
    a = int(sys.argv[1])
    b = int(sys.argv[2])
    print(type(sys.argv[0]))
    print(type(a))
    print(type(b))

    print("Primul argument argv[0]: ", a,"\nAl doilea argument argv[1]: ",b)

#main()
#main2()
#test_strip()
#main3()
#main4()
#main5()
euclid()
