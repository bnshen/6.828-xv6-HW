#include "types.h"
#include "user.h"
#include "date.h"

int
main(int argc, char *argv[])
{
  struct rtcdate r;

  if (time(&r)) {
    printf(2, "date failed\n");
    exit();
  }

  printf(1,"year: %d, month: %d, day: %d ... \n",r.year,r.month,r.day);

  exit();
}