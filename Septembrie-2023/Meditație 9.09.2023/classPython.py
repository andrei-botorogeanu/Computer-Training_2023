 # poti sa intelegi clasa Obiect ca pe un struct in c++
class Obiect:

  ## __init__ este o functie speciala in Python
  ## este un constructor al obiectului Obiect
  ## are rolul de a initializa datele membre
  def __init__(self, g, v):

    # date membre  
    self.weight = g
    self.value = v
    

def main():

   #declaram doua obiecte: 
   # un_obect, alt_obiect

    # am creat o instanta a obiectului Obiect
    un_obiect = Obiect(10, 260)
    #un_obiect are greautate 10 si valoarea 260
  
    print("Greutate = ", un_obiect.weight)
    print("Valoare = ", un_obiect.value)

    ## 
    alt_obiect = Obiect(5, 50)
    #alt_obiect are 5 
    print("Greutate = ", alt_obiect.weight)
    print("Valoare = ", alt_obiect.value)


    # declaram mai multe obiecte
    a = Obiect(2,8)
    c = Obiect(10,90)

    print(a.weight)
    ## nume_obiect [punct] camp sau data membra a clasei

## orice clasa are data si metode membre   
    
# cuvant cheie self    
class Om: 

  # i, c, g = 1.70, "verzi", 50
  # valorile din i, c, g se pierd dupa ce se revine in programul main
  # functie built-in 
  # o functie speciala a Python-ului
  # pentru orice clasa 
  def __init__(self, i, c, g):

      #i,c,g variabile locale 

      #data membre
      self.inaltime = i
      self.culoare_ochi = c
      self.greutate = g
      a = 5

  # metoda membra
  def getInatime(self):
      return self.inaltime

  def getMasa(self):
      return self.greutate    

  def getCuloareOchi(self):  
      return self.culoare_ochi

# ai creat instanta gigi , obiect
gigi = Om(1.70, "verzi", 50)
# dupa ce se revine cu executia programului la linia 70,
print("Gigi are inaltimea: ", gigi.getInatime(), "si greutate: ", gigi.getMasa())

#alta instanta a clasei Om
alex = Om(1.72, "caprui", 60)
print("Alex are inaltimea: ", alex.getInatime(), "si greutate: ", alex.getMasa())

#alta instanta
cristi = Om(1.60, "albastri", 80)
print("Cristi are inaltimea: ", cristi.getInatime(), "si greutate: ", cristi.getMasa())
#main()

print("Gigi are inaltimea: ", gigi.getInatime(), "si greutate: ", gigi.getMasa())

dustin = Om(1.77, "albastri", 90)

print("Dustin are inaltimea: ", dustin.getInatime(), "si greutate: ", dustin.getMasa())


arr = [0]*1001

a = input("Dati un numar")
print("Numarul citit de la tastatura este = ", a)


for i in range(1001):
    inaltime = input("inaltime=")
    greutate = input("Greutate=")
    culoare_ochi = input("Ochi=")
    arr[i] = Om(inaltime,culoare_ochi,gretate);
    