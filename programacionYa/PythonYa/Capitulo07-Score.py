preguntas = int(input("Cantidad de preguntas: "))
respuestas = int(input("Cantidad de respuestas: "))
score = respuestas/preguntas
print(score)

if(score >= 0.9):
    print(score, " <- Nivel máximo")
else:
    if(score >= 0.75):
        print(score, " <- Nivel medio")
    else:
        if(score >= 0.5):
            print(score, " <- Nivel regular")
        else:
            if(score >= 0.75):
                print(score, " <- fuera de nivel")
        
    
