/**
 * @file Investment_Returns.h
 * @author Jayesh Prabakaran
 * @brief Investment returns calculator with 4 different investment options.
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _PROJECT_MAIN_H_
#define _PROJECT_MAIN_H_

#include <stdio.h>
#include <limits.h>

typedef enum fucntion_status
{
    SUCCESS
}
fucntion_status;
/**
 * @brief function to find the returns for FD
 * 
 * @param p the investment amount
 * @param r the rate of interest
 * @param t the time period
 * @param result_fd_amount 
 * @return fucntion_status 
 */

fucntion_status fd_interest(float p, float r, float t, float* result_fd_amount);
/**
 * @brief function to find the returns for RD
 * 
 * @param p the investment amount
 * @param r the rate of interest
 * @param t the time period
 * @param result_fd_amount 
 * @return fucntion_status 
 */

fucntion_status rd_interest(float p, float r, float t, float* result_rd_amount);
/**
 * @brief function to find the returns for SIP
 * 
 * @param p the investment amount
 * @param r the rate of interest
 * @param t the time period
 * @param result_fd_amount 
 * @return fucntion_status 
 */

fucntion_status sip_interest(float p, float r, float t, float* result_sip_amount);
/**
 * @brief function to find the returns for LP
 * 
 * @param p the investment amount
 * @param r the rate of interest
 * @param t the time period
 * @param result_fd_amount 
 * @return fucntion_status 
 */

fucntion_status lp_interest(float p, float r, float t, float* result_lp_amount);

#endif  