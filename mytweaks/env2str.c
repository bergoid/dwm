#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "env2str.h"

void copy_string(char* dest, const char* src, size_t nmax)
{
    strncpy(dest, src, nmax);

    if (nmax > 0)
        dest[nmax-1] = '\0';
}

void copy_env_var(char* dest, const char* var_name, const char* default_value, size_t nmax)
{
    char* env_value = getenv(var_name);
    copy_string(dest, ((env_value) && (strlen(env_value) > 0)) ? env_value : default_value, nmax);
}
