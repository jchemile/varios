package com.pildorasinformaticas.productos;

import java.util.*;

import javax.sql.DataSource;
import java.sql.*;

public class ModeloProductos {
	
	private DataSource origenDatos;
	public ModeloProductos(DataSource origenDatos) {
		this.origenDatos = origenDatos;
	};
	
	
	public List<Productos> getProductos() throws Exception{
		
		List<Productos> productos = new ArrayList<> ();
		
		Connection miConexion = null;
		Statement miStatement = null;
		ResultSet miResultset = null;
		
		miConexion = origenDatos.getConnection();
		String instruccionSql = "SELECT * FROM productos";
		miStatement = miConexion.createStatement();
		
		miResultset = miStatement.executeQuery(instruccionSql);
		
		while(miResultset.next()) {
			String c_art     = miResultset.getString("CODIGOARTICULO");
			String seccion   = miResultset.getString("SECCION");
			String n_art     = miResultset.getString("NOMBREARTICULO");
			double precio    = miResultset.getDouble("PRECIO");
			String fecha     = miResultset.getString("FECHA");
			String importado = miResultset.getString("IMPORTADO");
			String p_orig    = miResultset.getString("PAISDEORIGEN");
			
			Productos temProd = new Productos(c_art, 
											seccion, 
											n_art, 
											precio, 
											fecha, 
											importado, 
											p_orig);
			
			productos.add(temProd);
		}
		
		return productos;
	}


	public void agregarElNuevoProducto(Productos nuevoProducto) throws Exception {
		// TODO Auto-generated method stub
		
		Connection miConexion = null;
		
		PreparedStatement miStatement = null;
		

		try {
			
			miConexion = origenDatos.getConnection();
			
			String sql = "INSERT INTO productos(codigoarticulo, seccion, nombrearticulo, precio, fecha, importado, paisdeorigen) VALUES(?,?,?,?,?,?,?)";
		
			miStatement = miConexion.prepareStatement(sql);
			
			miStatement.setString(1, nuevoProducto.getcArt());
			miStatement.setString(2, nuevoProducto.getSeccion());
		    miStatement.setString(3, nuevoProducto.getnArt());
			miStatement.setDouble(4, nuevoProducto.getPrecio());
			miStatement.setString(5, nuevoProducto.getFecha());
			miStatement.setString(6, nuevoProducto.getImportado());
			miStatement.setString(7, nuevoProducto.getpOrig());
			
			miStatement.execute();
			
		} catch(Exception e) {
			
		} finally {
			miStatement.close();
			miConexion.close();
		}

		

		
		
		
	}


	public Productos getProducto(String codigoArticulo) {
		
		Productos elProducto = null;
		
		Connection miConexion = null;
		
		PreparedStatement miStatement = null;
		
		ResultSet miResultset = null;
		
		String cArticulo = codigoArticulo;
		
		try {
					
			miConexion = origenDatos.getConnection();
			
			String sql = "SELECT * FROM productos WHERE codigoarticulo=?";
			
			miStatement = miConexion.prepareStatement(sql);
			
			miStatement.setString(1, cArticulo);
			
			miResultset= miStatement.executeQuery();
			
			if(miResultset.next()) {
				
				String c_art     = miResultset.getString("CODIGOARTICULO");
				String seccion   = miResultset.getString("SECCION");
				String n_art     = miResultset.getString("NOMBREARTICULO");
				double precio    = miResultset.getDouble("PRECIO");
				String fecha     = miResultset.getString("FECHA");
				String importado = miResultset.getString("IMPORTADO");
				String p_orig    = miResultset.getString("PAISDEORIGEN");
				
				elProducto = new Productos(c_art, seccion, n_art, precio, fecha, importado, p_orig);
				
			} else {
				throw new Exception("No hemos encontrado el producto con codigo articulo = " + cArticulo);
			}
			
		} catch (Exception e) {
			e.printStackTrace();
		}
		 
		return elProducto;
	}


	public void actualizarProducto(Productos productoActualizado) throws Exception{
		// TODO Auto-generated method stub
		
		Connection miConexion = null;
		
		PreparedStatement miStatement = null;
		
		try {
			miConexion = origenDatos.getConnection();
			
			String sql = "UPDATE productos SET seccion = ?, nombrearticulo=?, precio=?, fecha=?, importado=?, paisdeorigen=? where codigoarticulo=?";
			
			miStatement = miConexion.prepareStatement(sql);
			
			miStatement.setString(1,productoActualizado.getSeccion());
			miStatement.setString(2,productoActualizado.getnArt());
			miStatement.setDouble(3,productoActualizado.getPrecio());
			miStatement.setString(4,productoActualizado.getFecha());
			miStatement.setString(5,productoActualizado.getImportado());
			miStatement.setString(6,productoActualizado.getpOrig());
			miStatement.setString(7,productoActualizado.getcArt());
			
			miStatement.execute();
		} finally {
			miStatement.close();
			miConexion.close();
		}

		
	}


	public void eliminarProducto(String codArticulo) throws Exception {
		// TODO Auto-generated method stub
		
		Connection miConexion = null;
		
		PreparedStatement miStatement = null;
		
		try {
			miConexion = origenDatos.getConnection();
			
			String sql = "DELETE FROM productos WHERE codigoarticulo = ?";
			
			miStatement = miConexion.prepareStatement(sql);
			
			miStatement.setString(1, codArticulo);
			
			miStatement.execute();
		} finally {
			miStatement.close();
			miConexion.close();
		}

		
		
	}


}
