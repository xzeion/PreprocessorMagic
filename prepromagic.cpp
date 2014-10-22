#include <stdio.h>
#include <iostream>
#include <prepromagic.h>

Magic::Magic(){}
Magic::~Magic(){}


typedef union {
  uint16_t value;
  uint8_t bytes[sizeof(uint16_t)];
} uint16_conversion;

uint16_t get_uint16_t(int kung, int foo){
  
}

