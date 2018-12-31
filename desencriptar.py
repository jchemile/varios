import collections

texto  = "ΣΦΨΞΔλΨΔΛΣΦΔλΨξΔϗΞΔΦΨΞϑλΨΛΣΘϑΞϗΦϑλΨΣΞΨλϑΞΨζβΣφΔΨΣΦΨΣΞΨξΛϗΞΞϑΨϖΣΞΨΠΣϖΛΣφΔΞΨΩΨΠΛΣΦϖϗϖϑΨΔΨΞΔΨΘΔφϗΔΨϖΣΨΞϑλΨΓΔΘϗΦϑλΨΣΞΨΔΛΛϗΣΛϑΨαΔΨΣΞΨΔΛΛϗΣΛϑΨαΔΨΣλΨξΔΦϖΣΛΔΨϖΣΨΦϗΣξΞΔΨλβΨΠϑΦΓΡϑΨΔΞΨαϗΣΦμϑΨΞϑΨλΔΞβϖΔΦΨΞΔλΨεΞΔβμΔλΨϖΣΞΨΠΔζϑΦΔΞΨΩΨΔΦϗΘΔΦϖϑΨΞΔΨμΛϑΠΔΨΠΔΛΨΣλϑλΨΓΣΛΛϑλΨΣΞΨΔΛΛϗΣΛϑΨαΔΨΣΞΨΔΛΛϗΣΛϑΨαΔΨΞΔλΨΠΣΦΔλΨΩΨΞΔλΨαΔηβϗμΔλΨλΣΨαΔΦΨΠΔΛΨΞΔΨΘϗλΘΔΨλΣΦϖΔΨΞΔλΨΠΣΦΔλΨλϑΦΨϖΣΨΦϑλϑμΛϑλΨΞΔλΨαΔηβϗμΔλΨλϑΦΨΔζΣΦΔλ"

#Lo utilizo para contar los caracteres.
#Con el objetivo de identificar el espacio (Caracter más repetido)
def contar_caracteres(texto):
    lista = list(texto)
    cuenta = collections.Counter(lista)
    return cuenta

#Lo utilizo para contar las palabras.
#Con el objetivo de identificar palabras comunes
def contar_palabras(texto):
    lista_palabras = texto.split()
    frecuencia_palabras = []
    for palabra in lista_palabras:
        frecuencia_palabras.append(lista_palabras)
        
    cuenta = collections.Counter(lista_palabras)    

    return cuenta

#Función Reemplazar
def reemplazar(texto, caracteres):
    texto_descifrado = ""
    for letra in texto:
        if letra in caracteres:
            texto_descifrado += caracteres[letra]
        else:    
            texto_descifrado += letra

    return texto_descifrado

#Utilizo la estrategia de ver la repetición estadística
#Fuente: https://es.wikipedia.org/wiki/Frecuencia_de_aparici%C3%B3n_de_letras
#No me ayuda a encontrar la solución
diccionario_estadistico ={'Ψ': " ", 'Δ': "E", 'Σ': "A", 'Ξ': "O",
                'λ': "S", 'ϑ': "R", 'Λ': "N", 'Φ': "I",
                'ϗ': "D", 'ϖ': "L", 'Π': "C", 'α': "T",
                'Θ': "U", 'β': "M", 'μ': "P", 'ξ': "B",
                'ζ': "G", 'φ': "B", 'Ω': "Y", 'Γ': "Q", 'η': "H",
                'Ρ': "F", 'ε': "Z"}

#Camino 1: El valor que más se repite es el espacio (Utilizo la función contar_caracteres)
#Camino 2: Busco valor solitario para reemplzar (Candidatos: Y u O)
#Camino 3: Busco la E que es aquella que puede ser acomapañada por varias letras. Ej: el, es, en
#Camino 4: Indentifiqué la palabra más repetida con la función contar palabras: ΔΛΛϗΣΛϑ
#Camino 4.1: Identifiqué el símbolo Λ <- Es la R
#Camino 4.2: Identifqué la palabra Arriero
#Camino 4.3: Identifiqué la canción : "El Arriero" de Yupanqui
#Camino 4.4: Completé el diccionario para hacer uso de la función reemplazar 
diccionario = {'Ψ': " ", 'Ω': "Y", 'Λ': "R", 'Π':"P", 'Δ':"A",
               'ϗ': "I", 'Σ':"E", 'ϑ' :"O", 'Ξ':"L", 'α':"V",
               'η': "Q", 'β':"U", 'μ':"T", 'λ':"S", 'Φ':"N",
               'ξ': "B", 'Θ':"M", 'ζ':"J", 'φ':"G", 'ϖ':"D",
               'Γ': "C", 'ε':"F",'Ρ':"H"}

if __name__ == '__main__':
    print("1 - CUENTO LA CANTIDAD DE CARACTERES:")
    print(contar_caracteres(texto),"\n")
    print("2 - IDENTIFICO EL VALOR MÁS REPETIDO (Ψ) Y LO CAMBIO POR EL ESPACIO:")
    texto_con_espacio = reemplazar(texto, {'Ψ': " "})
    print(texto_con_espacio,"\n")
    print("3 - CUENTOS LAS PALABRAS Y ANALIZO LA REPETICIÓN:")
    print(contar_palabras(texto_con_espacio),"\n")
    print("4 - ANALIZO LA PALABRA ΔΛΛϗΣΛϑ Y DECODIFICO R. DESCUBRO LA PALABRA ARRIERO. PROCEDO A CAMBIAR EL RESTO DE LAS PALABRAS:")
    texto_a_imprimir = reemplazar(texto, diccionario)
    print("\n","SOLUCION:","\n",texto_a_imprimir)
