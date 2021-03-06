<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<%@ page import = "java.util.*, java.sql.*, pildorasinformaticas.com.jsptags.Empleado" %>

<%

	ArrayList<Empleado> datos = new ArrayList<>();
	Class.forName("com.mysql.jdbc.Driver");

	try{
		
		Connection miConexion = java.sql.DriverManager.getConnection("jdbc:mysql://localhost:3306/proyecto_jsp","world","world");
		
		Statement miStatement = miConexion.createStatement();
		
		String instruccionSql = "SELECT * FROM empleados";
		
		ResultSet rs = miStatement.executeQuery(instruccionSql);
		
		while(rs.next()){
			datos.add(new Empleado(rs.getString(1),rs.getString(2),rs.getString(3),rs.getInt(4)));
		}
		
		rs.close();
		miConexion.close();
		
	}catch(Exception e){
		out.println("Ocurrio un error");
	}
	
	pageContext.setAttribute("losEmpleados", datos);

%>


<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>

<style>
.cabecera{
	font-weight:bold;
}
</style>

</head>
<body>
	
	<table border="1">
	
		<tr class="cabecera">
			<td>Nombre</td><td>Apellido</td><td>Puesto</td><td>Salario</td><td>Bonus</td><td>Total</td>
		</tr>
	
	<c:forEach var="EmpTemp" items="${losEmpleados}">
	
		<tr>
			<td>${EmpTemp.nombre}</td><td> ${EmpTemp.apellido}</td><td> ${EmpTemp.puesto}</td>
			<td>
			<c:choose>
				<c:when test="${EmpTemp.salario<=40000}">
					${EmpTemp.salario+5000}			
				</c:when>
				
				<c:when test="${EmpTemp.salario>=40000 && EmpTemp.salario<=40000}">
					${EmpTemp.salario+2000}			
				</c:when>
				
				<c:otherwise>
					${EmpTemp.salario}
				</c:otherwise>
			</c:choose>
			</td>
<%-- 		<td>
				<c:if test="${EmpTemp.salario<=40000}">5000</c:if>
				<c:if test="${EmpTemp.salario>=40000}">----</c:if>
			</td>
			<td>
			 	<c:if test="${EmpTemp.salario<=40000}">${EmpTemp.salario+5000}</c:if>
			</td> --%>
			
		</tr>
	
	</c:forEach>
	
	</table>
</body>
</html>