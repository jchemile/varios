from urllib import request

pagina = request.urlopen("http://www.scratchya.com.ar/pythonya/ejercicio336/pagina1.html")
datos = pagina.read()
archivo1 = open("pagina1.html","wb")
archivo1.write(datos)
archivo1.close()

imagen = request.urlopen("http://www.scratchya.com.ar/pythonya/ejercicio336/imagen1.jpg")
datos = imagen.read()
archivo2 = open("imagen1.jpg","wb")
archivo2.write(datos)
archivo2.close()