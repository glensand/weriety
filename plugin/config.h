#pragma once

#ifdef  EXPORT 
    /*Enabled as "export" while compiling the dll project*/
    #define W_API __declspec(dllexport)  
 #else
    /*Enabled as "import" in the Client side for using already created dll file*/
    #define W_API __declspec(dllimport)  
 #endif