/*
 
  Crypt::Passwd, ufc-crypt extension for Perl5

  This code provides the glue between a perl class, namely 
  Crypt::Passwd and the UFC Crypt library written by Michael
  Glad.

  This code is subject to the same licensing restrictions that
  this library and perl itself.

  lem@cantv.net

  */

#include "config.h"


#ifdef STD_CRYPT
char *STD_CRYPT();			/* Prototype to standard crypt() */
#endif /* STD_CRYPT */

#ifdef EXT_CRYPT
char *EXT_CRYPT();		/* Prototype to extended crypt16() */
#endif /* EXT_CRYPT */

char *unix_std_crypt(password, salt)
char *password,
char *salt
{
#ifdef STD_CRYPT
  return crypt(password, salt);
#else /* STD_CRYPT */
  return (char *) NULL;
#endif /* STD_CRYPT */
}

char *unix_ext_crypt (password, salt)
char *password,
char *salt
{
#ifdef EXT_CRYPT
  return crypt16(password, salt);
#else /* EXT_CRYPT */
  return (char *) NULL;
#endif /* EXT_CRYPT */
}
