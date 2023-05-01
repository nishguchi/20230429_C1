#include <stdio.h>
#include <stdbool.h>



int main(int argc, char *argv[])
{

bool doorClosed = true;

if(!doorClosed)
{
printf("ノックします\n");
printf("１分待ちます\n");
}
else
{
printf("トイレに入りました\n");
}

return 0;
}
 
