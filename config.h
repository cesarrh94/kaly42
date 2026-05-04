#pragma once

// We use the original UID to ensure compatibility with the Vial interface
#define VIAL_KEYBOARD_UID {0x15, 0x56, 0x94, 0x28, 0x02, 0xBB, 0x66, 0xBE}

/* --- Security and Unlocking --- */
// Original combo: row 0.4 and column 0.5.
// This prevents accidental changes in the app without pressing these physical keys.
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }

/* --- Optimizations for Blackpill (STM32F411) --- */
// You have plenty of memory (512KB Flash), so we can enable more layers
// By default, Vial uses 4, but we've left it here ready for whatever you need.
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

/* --- Split Configuration --- */
// Since this is a Blackpill split, these settings ensure stable communication between the halves.
// If you prefer to connect the USB to the right side, change the above to #define MASTER_RIGHT
#define SERIAL_USART_FULL_DUPLEX
#define MASTER_LEFT 

/* --- Performance Improvements --- */
// Reduces input lag and improves responsiveness in games (like Valorant/CS)
#define USB_POLLING_INTERVAL_MS 1
#define FORCE_NKRO