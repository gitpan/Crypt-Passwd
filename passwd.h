/*
  
  unix_std_crypt()	- Native UNIX crypt() function
  unix_ext_crypt()	- Ultrix/D-Unix enhanced crypt() function

  This module requires the ufc-crypt library written by Michael Glad
  and is subject to the same licensing and distribution schemes.

  */

/* This is the traditional UNIX crypt() function */
char*
unix_std_crypt(char* password, char* salt);

/* This is the enhanced crypt() present on Ultrix and Digital Unix */
char*
unix_ext_crypt(char* password, char* salt);


