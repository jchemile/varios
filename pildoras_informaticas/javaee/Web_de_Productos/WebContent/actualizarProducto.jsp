<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Actualizar Registro</title>
</head>
<body>

<h1 style="text-align:center">Insertar Registro</h1>
<form name ="form1" method="get" action="ControladorProductos">
<input type="hidden" name="instruccion" value="actualizarBBDD">
<input type="hidden" name="CArt" value="${ProductoActualizar.cArt}">

<table widht="50%" border ="0">
	<tr>
		<td>Seccion</td>
		<td>
			<label for ="seccion"></label>
			<input type ="text" name="seccion" id="seccion" value="${ProductoActualizar.seccion}">
		</td>
	</tr>
	
	<tr>
		<td>Nombre Artículo</td>
		<td>
			<label for ="NArt"></label>
			<input type ="text" name="NArt" id="NArt" value="${ProductoActualizar.nArt}">
		</td>
	</tr>
	
	<tr>
		<td>Fecha</td>
		<td>
			<label for ="fecha"></label>
			<input type ="text" name="fecha" id="fecha" value="${ProductoActualizar.fecha}">
		</td>
	</tr>	
	<tr>
		<td>Precio</td>
		<td>
			<label for ="precio"></label>
			<input type ="text" name="precio" id="precio" value="${ProductoActualizar.precio}">
		</td>
	</tr>
	
	<tr>
		<td>Importado</td>
		<td>
			<label for ="importado"></label>
			<input type ="text" name="importado" id="importado" value="${ProductoActualizar.importado}">
		</td>
	</tr>
	
	<tr>
		<td>País de Origen</td>
		<td>
			<label for ="POrig"></label>
			<input type ="text" name="POrig" id="POrig" value="${ProductoActualizar.pOrig}">
		</td>
	</tr>
	
 	<tr>
 		<td><input type="submit" name="envio" id="envio" value="Enviar"></td>
 		<td><input type="reset"  name="borrar" id="borrar" value="Reestablecer"></td>
 	</tr>
</table>

</form>


</body>
</html>