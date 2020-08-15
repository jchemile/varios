array = ['info@aireconsultores.es','integralfitstore@gmail.com','info@jamonesdeseroncheca.com']

with open("../../../exampleData/input.txt", "r") as f_in, open("../../../exampleData/output.txt", "w") as f_out:
    for linea in f_in:
        if linea.strip() not in array:
            f_out.write(linea)