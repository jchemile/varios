array = ['info@aireconsultores.es','integralfitstore@gmail.com','info@jamonesdeseroncheca.com']

with open("input.txt", "r") as f_in, open("output.txt", "w") as f_out:
    for linea in f_in:
        if linea.strip() not in array:
            f_out.write(linea)