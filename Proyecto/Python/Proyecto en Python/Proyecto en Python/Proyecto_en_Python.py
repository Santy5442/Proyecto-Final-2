class Pila:
     def __init__(self):
         self.items = []

     def estaVacia(self):
         return self.items == []

     def incluir(self, item):
         self.items.append(item)

     def extraer(self):
         return self.items.pop()

     def inspeccionar(self):
         return self.items[len(self.items)-1]

     def tamano(self):
         return len(self.items)

def infija_a_sufija(expresionInfija):
    precedencia = {}
    precedencia["*"] = 3
    precedencia["/"] = 3
    precedencia["+"] = 2
    precedencia["-"] = 2
    precedencia["("] = 1
    pilaOperadores = Pila()
    listaSufija = []
    listaSimbolos = expresionInfija.split()

    for simbolo in listaSimbolos:
        if simbolo in "ABCDEFGHIJKLMNOPQRSTUVWXYZ" or simbolo in "0123456789":
            listaSufija.append(simbolo)
        elif simbolo == '(':
            pilaOperadores.incluir(simbolo)
        elif simbolo == ')':
            simboloTope = pilaOperadores.extraer()
            while simboloTope != '(':
                listaSufija.append(simboloTope)
                simboloTope = pilaOperadores.extraer()
        else:
            while (not pilaOperadores.estaVacia()) and \
               (precedencia[pilaOperadores.inspeccionar()] >= \
                precedencia[simbolo]):
                  listaSufija.append(pilaOperadores.extraer())
            pilaOperadores.incluir(simbolo)

    while not pilaOperadores.estaVacia():
        listaSufija.append(pilaOperadores.extraer())
    return " ".join(listaSufija)

print(infija_a_sufija("A * B + C * D"))
print(infija_a_sufija("( A + B ) * C - ( D - E ) * ( F + G )"))