#ifndef FILE_HANDLER
	#include <string.h>
	#include <stdlib.h>
	#include <stdio.h>
	#define FILE_HANDLER
#endif
#include <math.h>

//ascii offsets for hex conversion
#define HEX_OFFSET_DIG 48
#define HEX_OFFSET_CHAR_LOW 87
#define HEX_OFFSET_CHAR_CAP 55

//for ascii to base 64 conversion
#define UPPERCASE_BASE64_OFFSET 65
#define LOWERCASE_BASE64_OFFSET 71
#define DIGIT_BASE64_OFFSET 4

char base64_dic[66];

typedef struct hex_num {
	unsigned char* num;
	size_t size;
} hex_num_t;

typedef struct base_64 {
	unsigned char* num;
	size_t size;
	short padding :2;
} base_64_t;

hex_num_t *hex_init(int len);

base_64_t *base64_init(int len, short padding);

base_64_t *convert_to_base64(char *buffer);

unsigned char ascii_to_hex(char a);

base_64_t *base64_encode(hex_num_t *hex);

hex_num_t *base64_decode(base_64_t *base64);

hex_num_t *convert_to_hex(char * stringNum);

void print_hex(char *msg, hex_num_t *hex);

void print_base64(char *msg, base_64_t *base64);

void free_hex_num(hex_num_t *hex);

void free_base64(base_64_t *hex);
