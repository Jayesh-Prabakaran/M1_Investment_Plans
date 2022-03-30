#ifndef _PROJECT_MAIN_H_
#define _PROJECT_MAIN_H_

#include <stdio.h>
#include <limits.h>

typedef enum fucntion_status
{
    SUCCESS
}
fucntion_status;

fucntion_status fd_interest(float p, float r, float t, float result_fd_amount);
fucntion_status rd_interest(float p, float r, float t);
fucntion_status sip_interest(float p, float r, float t);
fucntion_status lp_interest(float p, float r, float t);

#endif  