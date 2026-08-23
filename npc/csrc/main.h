#ifndef __MAIN_H__	// begin of __MAIN_H__
#define __MAIN_H__
//*******************************// include extern .h files //************************************//
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <nvboard.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "readf2mem.h"

//*******************************// extern function         //************************************//
void nvboard_bind_all_pins(Vtop* top);

//*******************************// end_h                   //************************************//
#endif	// end of __MAIN_H__
