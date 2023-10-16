#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_dec(va_list d);
int print_hex(va_list x);
int print_HEX(va_list X);
int print_octal(va_list o);
int print_bin(va_list b);
int print_unsigned(va_list u);
int print_rot13(va_list R);
int print_rev(va_list r);
int print_int(va_list i);
int print_S(va_list S);
int print_p(va_list p);
int _strlen(char *str);
int _strlenc(const char *str)
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int printf exclusive string (va_list val);
int printf HEX (va_list val);
int printf hex (va_list val);
int printf oct (va_list val);
int printf unsigned (va_list args);
int printf bin(va_list val);
int printf srev (va_list args);
int printf rotl3(va_list args;
int printf int (va_list args);
int printf dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string (char *s);
int _strlenc(const char *s);
int printf 37 (void);
int printf char (va_list val);
int printf _string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37 (void);
int print _int (va_list args);
int print _dec(va_list args);
int print _bin(va_list val);
int _putchar (char c);
int printf (const char *format, ...);


/**
 * struct code_format - structure format
 * @sc: specifier
 * @f: function associated
 */

typedef struct code_format
{
  char *sc;
  int (*f)(va_list);
} code_f;

#endif MAIN_H
