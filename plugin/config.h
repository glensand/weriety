/* Copyright (C) 2020 Gleb Bezborodov - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/weriety
 */

#pragma once

#ifdef  EXPORT 
    /*Enabled as "export" while compiling the dll project*/
    #define W_API __declspec(dllexport)  
 #else
    /*Enabled as "import" in the Client side for using already created dll file*/
    #define W_API __declspec(dllimport)  
 #endif