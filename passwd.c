/*
 
  Crypt::Passwd, ufc-crypt extension for Perl5

  This code provides the glue between a perl class, namely 
  Crypt::Passwd and the UFC Crypt library written by Michael
  Glad.

  This code is subject to the same licensing restrictions that
  this library and perl itself.

  lem@cantv.net

  */

char *crypt();			/* Prototype to standard crypt() */
char *crypt16();		/* Prototype to extended crypt16() */

char *unix_std_crypt(password, salt)
char *password,
char *salt
{
  return crypt(password, salt);
}

char *unix_ext_crypt (password, salt)
char *password,
char *salt
{
  return crypt16(password, salt);
}
