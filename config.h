/* 
 * Final config.h for Kaly42 - Vial Version
 * Basado en las specs originales del creador y optimizado para Blackpill (STM32F411)
 */

#pragma once

/* --- Identidad Oficial del Teclado --- */
// Usamos el UID original para asegurar compatibilidad con la interfaz de Vial
#define VIAL_KEYBOARD_UID {0x15, 0x56, 0x94, 0x28, 0x02, 0xBB, 0x66, 0xBE}

/* --- Seguridad y Desbloqueo --- */
// Combo original: fila 0,4 y col 0,5. 
// Esto evita cambios accidentales en la app sin presionar estas teclas físicas.
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }

/* --- Optimizaciones para Blackpill (STM32F411) --- */
// Tienes memoria de sobra (512KB Flash), así que podemos habilitar más capas
// Por defecto Vial usa 4, pero aquí lo dejamos listo para lo que necesites.
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

/* --- Configuración del Split --- */
// Al ser un split con Blackpill, estas definiciones aseguran que la 
// comunicación entre mitades sea estable.
#define SERIAL_USART_FULL_DUPLEX
#define MASTER_LEFT 
// Si prefieres conectar el USB al lado derecho, cambia lo anterior por #define MASTER_RIGHT

/* --- Mejoras de Rendimiento --- */
// Reduce el lag de entrada y mejora la respuesta en juegos (como Valorant/CS)
#define USB_POLLING_INTERVAL_MS 1
#define FORCE_NKRO