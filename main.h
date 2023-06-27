#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int handle_format(const char **format, va_list args);
int handle_c(va_list args);
int handle_s(va_list args);
int handle_percent(va_list args);
int handle_d(va_list args);
int handle_i(va_list args);
int print_number(long int n);

#endif /* MAIN_H */
