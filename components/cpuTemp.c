#include <stdio.h>
#include <time.h>

#include "../util.h"

const char *
cpu_temp(void){

  int temp;
  
  pscanf("/sys/class/thermal/thermal_zone0/temp","%d",&temp);

  //changing format to string
  temp /= 1000;

  return bprintf("%d",temp);


}
