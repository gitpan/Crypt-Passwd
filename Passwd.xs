#ifdef __cplusplus
extern "C" {
#endif
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"
#ifdef __cplusplus
}
#endif

#include "passwd.h"

static int
not_here(s)
char *s;
{
    croak("%s not implemented on this architecture", s);
    return -1;
}

static double
constant(name, arg)
char *name;
int arg;
{
    errno = 0;
    switch (*name) {
    }
    errno = EINVAL;
    return 0;

not_there:
    errno = ENOENT;
    return 0;
}


MODULE = Crypt::Passwd		PACKAGE = Crypt::Passwd		


double
constant(name,arg)
	char *		name
	int		arg

char*
unix_std_crypt(passwd, salt)
	char* passwd
	char* salt
  CODE:
	RETVAL = crypt(passwd, salt);
  OUTPUT:
	RETVAL

char*
unix_ext_crypt(passwd, salt)
	char* passwd
	char* salt
  CODE:
	RETVAL = crypt16(passwd, salt);
  OUTPUT:
	RETVAL








