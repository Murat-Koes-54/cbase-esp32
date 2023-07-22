#if !( defined( EBX_CBASE_ESP32_COMPILER_H ) )
#define EBX_CBASE_ESP32_COMPILER_H

#ifndef __GNUC__
#error This file should only be included in gnuc compiler
#endif /* ifndef __GNUC__ */

#define EBX_COMPILER_GCC     1
#define EBX_COMPILER_VERSION ( ( __GNUC__ * 100 ) + ( __GNUC_MINOR__ * 10 ) )
#if EBX_COMPILER_VERSION < 840
#error This version of gnuc is not supported, the minimum supported version is 8.4
#endif /* if EBX_COMPILER_VERSION < 840 */

#endif /* ifndef EBX_CBASE_ESP32_COMPILER_H */