package com.pildorasinformaticas.productos;

import java.io.IOException;
import java.util.List;

import javax.annotation.Resource;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.sql.DataSource;

/**
 * Servlet implementation class ControladorProductos
 */
@WebServlet("/ControladorProductos")
public class ControladorProductos extends HttpServlet {
	private static final long serialVersionUID = 1L;
	
	private ModeloProductos modeloProductos;
	
	@Resource(name="jdbc/curso_sql")
	private DataSource miPool;
	
	@Override
	public void init() throws ServletException {
		// TODO Auto-generated method stub
		super.init();
		
		try {
			modeloProductos = new ModeloProductos(miPool);
		} catch (Exception e) {
			throw new ServletException(e);
		}
		

	}


	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		
		String elComando=request.getParameter("instruccion");
		
		if(elComando==null) elComando = "listar";
		
		switch (elComando) {
		
		case "listar":
			obtenerProductos(request, response);
			break;
		case "insertarBBDD":
			agregarProductos(request, response);
			break;
		case "cargar":
			try {
				cargaProductos(request, response);
				break;
			} catch (Exception e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

		case "actualizarBBDD":
			try {
				actualizaProductos(request, response);
				break;
			} catch (Exception e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
					
		case "eliminar":			
			try {
				eliminarProducto(request, response);
				break;
			} catch (Exception e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		default:
			obtenerProductos(request,response);
		}	
	}


	private void eliminarProducto(HttpServletRequest request, HttpServletResponse response) throws Exception{
		// TODO Auto-generated method stub
		
		String CodArticulo = request.getParameter("CArticulo");
		
		modeloProductos.eliminarProducto(CodArticulo);

		
		obtenerProductos(request,response);
		
		
	}


	private void actualizaProductos(HttpServletRequest request, HttpServletResponse response) throws Exception {
		// TODO Auto-generated method stub
		
		String CodArticulo    = request.getParameter("CArt");
		String Seccion        = request.getParameter("seccion");
		String NombreArticulo = request.getParameter("NArt");
		String Fecha          = request.getParameter("fecha");
		double Precio         = Double.parseDouble(request.getParameter("precio"));
		String Importado      = request.getParameter("importado");
		String PaisOrigen     = request.getParameter("POrig");
		
		Productos productoActualizado = new Productos(CodArticulo, 
													Seccion, 
													NombreArticulo, 
													Precio, 
													Fecha,
													Importado,
													PaisOrigen);

		modeloProductos.actualizarProducto(productoActualizado);
		
		obtenerProductos(request, response);
	}


	private void cargaProductos(HttpServletRequest request, HttpServletResponse response) throws Exception{
		// TODO Auto-generated method stub
		
		String codigoArticulo = request.getParameter("CArticulo");
		
		Productos elProducto= modeloProductos.getProducto(codigoArticulo);
		
		request.setAttribute("ProductoActualizar", elProducto);
		
		RequestDispatcher dispatcher = request.getRequestDispatcher("/actualizarProducto.jsp");
		
		dispatcher.forward(request, response);
		
	}


	private void agregarProductos(HttpServletRequest request, HttpServletResponse response) {
		
		String CodArticulo    = request.getParameter("CArt");
		String Seccion        = request.getParameter("seccion");
		String NombreArticulo = request.getParameter("NArt");
		String Fecha          = request.getParameter("fecha");
		double Precio         = Double.parseDouble(request.getParameter("precio"));
		String Importado      = request.getParameter("importado");
		String PaisOrigen     = request.getParameter("POrig");
		
		
		Productos nuevoProducto = new Productos(CodArticulo, 
													Seccion, 
													NombreArticulo, 
													Precio, 
													Fecha,
													Importado,
													PaisOrigen);
		
		try {
			modeloProductos.agregarElNuevoProducto(nuevoProducto);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		obtenerProductos(request, response);
	}


	private void obtenerProductos(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		List<Productos> productos;
		
		try {
			
			productos = modeloProductos.getProductos();
			
			request.setAttribute("LISTAPRODUCTOS", productos);
			
			RequestDispatcher miDispatcher = request.getRequestDispatcher("/ListaProductos.jsp");
			
			miDispatcher.forward(request, response);
				
		} catch(Exception e) {
			e.printStackTrace();
		}
	}

}
