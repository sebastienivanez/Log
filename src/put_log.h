#ifndef PUT_LOG_H
#define PUT_LOG_H

#include <stdio.h>

extern FILE *logfp;

/* Initialize the log with a pathname */
int init_log(const char *pathname);

/* Write log on STDOUT and in a file opened by init_log */
int put_log(const char *format, ...);
int put_log_to_file(FILE *fp, const char *format, ...);

/* Close the file opened by init_log */
int clean_log();

#endif /* PUT_LOG_H */
