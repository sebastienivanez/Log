#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

FILE *logfp = NULL;

/* Initialize the log with a pathname */
int init_log(const char *pathname)
{
	logfp = fopen(pathname, "ab");
	if (logfp == NULL) {
	  printf("init_log:fopen:KO:[%s]\n", strerror(errno));
	  return -1;
	}

	return 0;
}

/* Write log on STDOUT and in a file opened by init_log */
int put_log(const char *format, ...)
{
	va_list ap;

	if (logfp == NULL) {
	  printf("put_log:The log file is not open. Call init_log before printing log\n");
	  return -1;
	}
	
	/* Print logs on STDIN */
	va_start(ap, format);
	vprintf(format, ap);

	/* Print logs in a file */
	va_start(ap, format);
	vfprintf(logfp, format, ap);

	va_end(ap);

	return 0;
}

/* Write log in a FILE  */
int put_log_to_file(FILE *fp, const char *format, ...)
{
	va_list ap;

	if (fp == NULL) {
	  printf("put_log:The log file is not open. Call init_log before printing log\n");
	  return -1;
	}

	/* Print logs in a file */
	va_start(ap, format);
	vfprintf(fp, format, ap);

	va_end(ap);

	return 0;
}

/* Close the file opened by init_log */
int clean_log()
{
	int ret = -1;

	if (logfp == NULL) {
	  printf("put_log:Call init_log before printing log\n");
	  return -1;
	}
	
	ret = fclose(logfp);
	if (ret == EOF) {
	  printf("clean_log:fclose:KO:[%s]\n", strerror(errno));
	  return -1;
	}

	return 0;
}
