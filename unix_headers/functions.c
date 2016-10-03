#include<errno.h>	/*for definition of err no*/
#include<stdarg.h>	/*ANSI C header file*/
#include "ourhdr.h"

static void err_doit(int, const char *, va_list);

char *pname = NULL;		/*caller can set this from argv[0]*/
/* Non fatal error related to a system call.
	print a message and return. */

void err_sys(const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	err_doit(1, fmt, ap);
	va_end(ap);
	exit(1);
}

void err_quit(const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	err_doit(0, fmt, ap);
	va_end(ap);
	exit(1);
}

static void err_doit(int errnoflag, const char *fmt, va_list ap)
{
	int errno_save;
	char buf[MAXLINE];

	errno_save = errno;		/*value caller might want printed*/
	vsprintf(buf, fmt, ap);
	if(errnoflag)
	{
		sprintf(buf+strlen(buf), ": %s", strerror(errno_save));
	}
	strcat(buf, "\n");
	fflush(stdout);	/* in case stdout and stderr are same */
	fputs(buf, stderr);
	fflush(NULL);	/* flushes all stdio output streams */
	return ;

}
