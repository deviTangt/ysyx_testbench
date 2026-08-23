#include "__HARDWARE_CONFIG__.h"
#if __HARDWARE_CONFIG__READF2MEM_ENABLE__	// begin of __HARDWARE_CONFIG__READF2MEM_ENABLE__
#ifndef __READF2MEM_H__	// begin of __READF2MEM_H__
#define __READF2MEM_H__
//*******************************// include extern .h files //************************************//
#include "main.h"
//*******************************// define statement        //************************************//
//*******************************// extern parameters       //************************************//
//*******************************// define structure unity  //************************************//
//*******************************// define parameters       //************************************//
//*******************************// extern function         //************************************//
int load_pc_rom_plain(const char *filepath, uint32_t *PC_ROM,  uint32_t ROM_SIZE);
static int base64_decode(const char *in, uint8_t *out, size_t out_max, size_t *out_len);
int load_pc_rom_base64(const char *filepath, uint32_t *PC_ROM, uint32_t ROM_SIZE);
int load_pc_rom_bin(const char *filepath, uint32_t *PC_ROM, uint32_t ROM_SIZE);

//*******************************// end_h                   //************************************//
#endif	// end of __READF2MEM_H__
#endif	// end of __HARDWARE_CONFIG__READF2MEM_ENABLE__
