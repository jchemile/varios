from urllib import request

pagina = request.urlopen("http://www.scratchya.com.ar/pythonya/ejercicio336/pagina1.html")
datos = pagina.read()
print(datos)