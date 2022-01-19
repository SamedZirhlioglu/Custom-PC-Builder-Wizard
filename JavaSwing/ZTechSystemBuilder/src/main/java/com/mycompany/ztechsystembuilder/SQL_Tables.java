package com.mycompany.ztechsystembuilder;

import java.sql.Array;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import javax.swing.ComboBoxModel;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;

public class SQL_Tables
{
    public static DefaultTableModel CPU(String filterQuery) throws SQLException
    {
        DefaultTableModel model = new DefaultTableModel(new Object[]{"ID", "Brand", "Model", "Socket", "Frequency", "Turbo Frequency", "Cores", "Threads", "Cache", "TDP"}, 10);
        
        ResultSet result = SQLConnection.executeQuery("cpu", filterQuery);
        
        int counter = 0;
        while(result.next())
        {
            String socketString = result.getString("socket");
            ResultSet socket = SQLConnection.executeQuery("socket", null);
            while(socket.next())
            {
                if(socket.getString("id").equals(socketString))
                {
                    socketString = socket.getString("name");
                    break;
                }
            }
            socket.close();
            model.insertRow(counter, new Object[]{result.getString("id"), result.getString("brand"), result.getString("model"), socketString, result.getString("frequency"), result.getString("turbo_frequency"), result.getString("cores"), result.getString("threads"), result.getString("cache"), result.getString("tdp")});
            counter++;
        }
        
        result.close();
        return model;
    }
    
    public static DefaultTableModel CPUCooling(String filterQuery) throws SQLException
    {
        DefaultTableModel model = new DefaultTableModel(new Object[]{"ID", "Brand", "Model", "Socket", "Type", "Fan Size", "Fan Speed"}, 7);
        
        ResultSet result = SQLConnection.executeQuery("cpu_cooling", filterQuery);
        
        int counter = 0;
        while(result.next())
        {
            String socketString = result.getString("socket");
            String typeString = result.getString("type");
            
            ResultSet socket = SQLConnection.executeQuery("socket", null);
            ResultSet cpu_cooling_type = SQLConnection.executeQuery("cpu_cooling_type", null);
            while(socket.next())
            {
                if(socket.getString("id").equals(socketString))
                {
                    socketString = socket.getString("name");
                    break;
                }
            }
            while(cpu_cooling_type.next())
            {
                if(cpu_cooling_type.getString("id").equals(typeString))
                {
                    typeString = cpu_cooling_type.getString("name");
                    break;
                }
            }
            socket.close();
            cpu_cooling_type.close();
            model.insertRow(counter, new Object[]{result.getString("id"), result.getString("brand"), result.getString("model"), socketString, typeString, result.getString("fan_size"), result.getString("fan_speed")});
            counter++;
        }
        
        result.close();
        return model;
    }
    
    public static DefaultTableModel Motherboard(String filterQuery) throws SQLException
    {
        DefaultTableModel model = new DefaultTableModel(new Object[]{"ID", "Brand", "Model", "Chipset", "Socket", "Size", "Memory Type"}, 7);
        
        ResultSet result = SQLConnection.executeQuery("motherboard", filterQuery);
        
        int counter = 0;
        while(result.next())
        {
            String chipsetString = result.getString("chipset");
            String socketString = result.getString("socket");
            String sizeString = result.getString("size");
            String memTypeString = result.getString("memory_type");
            
            ResultSet chipset = SQLConnection.executeQuery("chipset", null);
            ResultSet socket = SQLConnection.executeQuery("socket", null);
            ResultSet size = SQLConnection.executeQuery("motherboard_size", null);
            ResultSet memType = SQLConnection.executeQuery("memory_type", null);
            
            while(chipset.next())
            {
                if(chipset.getString("id").equals(chipsetString))
                {
                    chipsetString = chipset.getString("name");
                    break;
                }
            }
            
            while(socket.next())
            {
                if(socket.getString("id").equals(socketString))
                {
                    socketString = socket.getString("name");
                    break;
                }
            }
            
            while(size.next())
            {
                if(size.getString("id").equals(sizeString))
                {
                    sizeString = size.getString("name");
                    break;
                }
            }
            
            while(memType.next())
            {
                if(memType.getString("id").equals(memTypeString))
                {
                    memTypeString = memType.getString("name");
                    break;
                }
            }
            
            chipset.close();
            socket.close();
            size.close();
            memType.close();
            
            model.insertRow(counter, new Object[]{result.getString("id"), result.getString("brand"), result.getString("model"), chipsetString, socketString, sizeString, memTypeString});
            counter++;
        }
        
        result.close();
        return model;
    }
    
    public static DefaultTableModel Memory(String filterQuery) throws SQLException
    {
        DefaultTableModel model = new DefaultTableModel(new Object[]{"ID", "Brand", "Model", "Memory Type", "Memory", "Memory Speed", "Module Type", "CAS Latency"}, 8);
        
        ResultSet result = SQLConnection.executeQuery("memory", filterQuery);
        
        int counter = 0;
        while(result.next())
        {
            String typeString = result.getString("memory_type");
            ResultSet type = SQLConnection.executeQuery("memory_type", null);
            while(type.next())
            {
                if(type.getString("id").equals(typeString))
                {
                    typeString = type.getString("name");
                    break;
                }
            }
            type.close();
            model.insertRow(counter, new Object[]{result.getString("id"), result.getString("brand"), result.getString("model"), typeString, result.getString("memory"), result.getString("speed"), result.getString("module_type"), result.getString("cas_latency")});
            counter++;
        }
        
        result.close();
        return model;
    }
    
    public static DefaultTableModel GPU(String filterQuery) throws SQLException
    {
        DefaultTableModel model = new DefaultTableModel(new Object[]{"ID", "Brand", "Model", "Memory", "Memory Type", "GPU Speed", "TDP"}, 7);
        
        ResultSet result = SQLConnection.executeQuery("graphic_card", filterQuery);
        
        int counter = 0;
        while(result.next())
        {
            String typeString = result.getString("memory_type");
            ResultSet type = SQLConnection.executeQuery("memory_type", null);
            while(type.next())
            {
                if(type.getString("id").equals(typeString))
                {
                    typeString = type.getString("name");
                    break;
                }
            }
            type.close();
            model.insertRow(counter, new Object[]{result.getString("id"), result.getString("brand"), result.getString("model"), result.getString("memory"), typeString, result.getString("gpu_speed"), result.getString("tdp")});
            counter++;
        }
        
        result.close();
        return model;
    }
    
    public static DefaultTableModel Storage(String filterQuery) throws SQLException
    {
        DefaultTableModel model = new DefaultTableModel(new Object[]{"ID", "Brand", "Model", "Storage Type", "Capacity", "Read Speed", "Write Speed"}, 7);
        
        ResultSet result = SQLConnection.executeQuery("storage", filterQuery);
        
        int counter = 0;
        while(result.next())
        {
            String typeString = result.getString("storage_type");
            ResultSet type = SQLConnection.executeQuery("storage_type", null);
            while(type.next())
            {
                if(type.getString("id").equals(typeString))
                {
                    typeString = type.getString("name");
                    break;
                }
            }
            type.close();
            model.insertRow(counter, new Object[]{result.getString("id"), result.getString("brand"), result.getString("model"), typeString, result.getString("capacity"), result.getString("read_speed"), result.getString("write_speed")});
            counter++;
        }
        
        result.close();
        return model;
    }
    
    public static DefaultTableModel Case(String filterQuery) throws SQLException
    {
        DefaultTableModel model = new DefaultTableModel(new Object[]{"ID", "Brand", "Model", "Motherboard Size"}, 4);
        
        ResultSet result = SQLConnection.executeQuery("pc_case", filterQuery);
        
        int counter = 0;
        while(result.next())
        {
            String sizeString = result.getString("motherboard_size");
            ResultSet size = SQLConnection.executeQuery("motherboard_size", null);
            while(size.next())
            {
                if(size.getString("id").equals(sizeString))
                {
                    sizeString = size.getString("name");
                    break;
                }
            }
            size.close();
            model.insertRow(counter, new Object[]{result.getString("id"), result.getString("brand"), result.getString("model"), sizeString});
            counter++;
        }
        
        result.close();
        return model;
    }
    
    public static DefaultTableModel PSU(String filterQuery) throws SQLException
    {
        DefaultTableModel model = new DefaultTableModel(new Object[]{"ID", "Brand", "Model", "Wattage", "Type", "Certificate"}, 6);
        
        ResultSet result = SQLConnection.executeQuery("power_supply", filterQuery);
        
        int counter = 0;
        while(result.next())
        {
            String typeString = result.getString("type");
            String certificateString = result.getString("certificate");
            ResultSet type = SQLConnection.executeQuery("psu_type", null);
            ResultSet certificate = SQLConnection.executeQuery("psu_certificate", null);
            
            while(type.next())
            {
                if(type.getString("id").equals(typeString))
                {
                    typeString = type.getString("name");
                    break;
                }
            }
            while(certificate.next())
            {
                if(certificate.getString("id").equals(certificateString))
                {
                    certificateString = certificate.getString("name");
                    break;
                }
            }
            type.close();
            certificate.close();
            model.insertRow(counter, new Object[]{result.getString("id"), result.getString("brand"), result.getString("model"), result.getString("wattage"), typeString, certificateString});
            counter++;
        }
        
        result.close();
        return model;
    }
}