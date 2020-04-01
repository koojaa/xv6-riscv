#include <stdio.h>
#include "prof.h"

void printstudentid(void)
{
  printf(ANSI_COLOR_MAGENTA "2");
  printf(ANSI_COLOR_YELLOW "0");
  printf(ANSI_COLOR_GREEN "1");
  printf(ANSI_COLOR_RED "4");
  printf(ANSI_COLOR_MAGENTA "-");
  printf(ANSI_COLOR_CYAN "1");
  printf(ANSI_COLOR_RED "8");
  printf(ANSI_COLOR_GREEN "6");
  printf(ANSI_COLOR_YELLOW "4");
  printf(ANSI_COLOR_MAGENTA "8");
  printf(ANSI_COLOR_RESET "\n");
}

void printstudentname(void)
{
  printf("koojaa");
}