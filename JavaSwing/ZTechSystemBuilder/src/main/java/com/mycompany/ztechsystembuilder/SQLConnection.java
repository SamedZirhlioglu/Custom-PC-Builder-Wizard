package com.mycompany.ztechsystembuilder;

import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;

public class SQLConnection
{
    public static Connection getConnection()
    {
        Connection connection = null;
        try
        {
            connection = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/ztechsystembuilder", "root", "");
            return connection;
        }
        catch (SQLException exception)
        {
            System.err.println("CONNECTION ERROR: " + exception);
            return null;
        }
    }
    
    public static ResultSet executeQuery(String tableName, String filterQuery) throws SQLException
    {
        Connection connection = getConnection();
        String sqlQuery = "SELECT * FROM " + tableName;
        
        if (filterQuery != null) sqlQuery += " WHERE " + filterQuery;
        
        Statement st = null;
        ResultSet rs = null;
        
        try
        {
            st = connection.createStatement();
            rs = st.executeQuery(sqlQuery);
            return rs;
        }
        catch (SQLException exception)
        {
            System.err.println("SQL Exception: " + exception);
            return null;
        }
    }
}