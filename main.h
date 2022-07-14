#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int _switch(char c, va_list arg);
int print_character(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
int print_string(va_list arg);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
int print_rev(va_list arg);
int print_base16_upper_lower(va_list arg, char *representation);
int loop_format(va_list arg, const char *string);
int call_function_manager(char aux, va_list arg);
int check_percent(int *flag, char aux);
typedef struct modifier
{
	char *flags;
	int width;
	int precision;
	char *length;
	char specifier;
} modifier_t;

void *_realloc(void *ptr, unsigned int, unsigned int);
int _putchar(char c);
char *print_binary(modifier_t *, va_list);
char *print_unsigned_int(modifier_t *, va_list);
char *print_octal(modifier_t *, va_list);
char *print_hex(modifier_t *, va_list);
char *print_char(modifier_t *, va_list ap);
char *print_int(modifier_t *, va_list ap);
char *print_string(modifier_t *modif, va_list ap);
char *print_rev(modifier_t *, va_list ap);
char *print_big_s(modifier_t *, va_list);
char *print_pointer(modifier_t *, va_list);
char *rot13(char *s);
int _strlen(char *s);
char *print_rot(modifier_t *, va_list ap);

void free_modifier(modifier_t *);
char *get_flags(const char *, unsigned int *);
int get_width(const char *, unsigned int *);
int get_precision(const char *, unsigned int *);
char *get_length(const char *, unsigned int *);
char get_specifier(const char *, unsigned int *);
modifier_t *get_modifier(const char *, unsigned int *);
char *treat_format(const char *, unsigned int *, va_list);
int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src);
void array_rev(char *arr, int len);
int int_len(int num);
char *ito(int n);
char *reverse(char *s);

/**
 * struct print - multiple choice print
 * @f: char Type of print
 * @func: funct
 */
typedef struct print
{
	char f;
	char *(*func)(modifier_t *, va_list);
} t_print;


#endif
