/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/student2/ahbhuiya/Downloads/Cache/SDRAMController.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


static void work_a_2696732300_3212880686_p_0(char *t0)
{
    char t38[16];
    char t41[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3624);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 == 0);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 8352);
    *((int *)t4) = 0;
    t11 = (t0 + 8356);
    *((int *)t11) = 7;
    t12 = 0;
    t13 = 7;

LAB11:    if (t12 <= t13)
        goto LAB12;

LAB14:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB12:    xsi_set_current_line(28, ng0);
    t14 = (t0 + 8360);
    *((int *)t14) = 0;
    t15 = (t0 + 8364);
    *((int *)t15) = 31;
    t16 = 0;
    t17 = 31;

LAB15:    if (t16 <= t17)
        goto LAB16;

LAB18:
LAB13:    t2 = (t0 + 8352);
    t12 = *((int *)t2);
    t4 = (t0 + 8356);
    t13 = *((int *)t4);
    if (t12 == t13)
        goto LAB14;

LAB22:    t9 = (t12 + 1);
    t12 = t9;
    t5 = (t0 + 8352);
    *((int *)t5) = t12;
    goto LAB11;

LAB16:    xsi_set_current_line(29, ng0);
    t18 = (t0 + 8368);
    t20 = (8U != 8U);
    if (t20 == 1)
        goto LAB19;

LAB20:    t21 = (t0 + 8352);
    t22 = *((int *)t21);
    t23 = (t22 - 7);
    t24 = (t23 * -1);
    t25 = (t24 * 32U);
    t26 = (t0 + 8360);
    t27 = *((int *)t26);
    t28 = (t27 - 31);
    t29 = (t28 * -1);
    t30 = (t25 + t29);
    t31 = (8U * t30);
    t32 = (0U + t31);
    t33 = (t0 + 3704);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t18, 8U);
    xsi_driver_first_trans_delta(t33, t32, 8U, 0LL);

LAB17:    t2 = (t0 + 8360);
    t16 = *((int *)t2);
    t4 = (t0 + 8364);
    t17 = *((int *)t4);
    if (t16 == t17)
        goto LAB18;

LAB21:    t9 = (t16 + 1);
    t16 = t9;
    t5 = (t0 + 8360);
    *((int *)t5) = t16;
    goto LAB15;

LAB19:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB20;

LAB23:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t24 = (15 - 7);
    t25 = (t24 * 1U);
    t29 = (0 + t25);
    t2 = (t5 + t29);
    t8 = (t38 + 0U);
    t11 = (t8 + 0U);
    *((int *)t11) = 7;
    t11 = (t8 + 4U);
    *((int *)t11) = 5;
    t11 = (t8 + 8U);
    *((int *)t11) = -1;
    t9 = (5 - 7);
    t30 = (t9 * -1);
    t30 = (t30 + 1);
    t11 = (t8 + 12U);
    *((unsigned int *)t11) = t30;
    t12 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t38);
    t13 = (t12 - 7);
    t30 = (t13 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t12);
    t31 = (t30 * 32U);
    t11 = (t0 + 1192U);
    t14 = *((char **)t11);
    t32 = (15 - 4);
    t39 = (t32 * 1U);
    t40 = (0 + t39);
    t11 = (t14 + t40);
    t15 = (t41 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 4;
    t18 = (t15 + 4U);
    *((int *)t18) = 0;
    t18 = (t15 + 8U);
    *((int *)t18) = -1;
    t16 = (0 - 4);
    t42 = (t16 * -1);
    t42 = (t42 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t42;
    t17 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t11, t41);
    t22 = (t17 - 31);
    t42 = (t22 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t17);
    t43 = (t31 + t42);
    t44 = (8U * t43);
    t45 = (0 + t44);
    t18 = (t4 + t45);
    t19 = (t0 + 3832);
    t21 = (t19 + 56U);
    t26 = *((char **)t21);
    t33 = (t26 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t18, 8U);
    xsi_driver_first_trans_fast_port(t19);

LAB27:    goto LAB24;

LAB26:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1672U);
    t8 = *((char **)t2);
    t2 = (t0 + 1192U);
    t11 = *((char **)t2);
    t24 = (15 - 7);
    t25 = (t24 * 1U);
    t29 = (0 + t25);
    t2 = (t11 + t29);
    t14 = (t38 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 7;
    t15 = (t14 + 4U);
    *((int *)t15) = 5;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t9 = (5 - 7);
    t30 = (t9 * -1);
    t30 = (t30 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t30;
    t12 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t38);
    t13 = (t12 - 7);
    t30 = (t13 * -1);
    t31 = (t30 * 32U);
    t15 = (t0 + 1192U);
    t18 = *((char **)t15);
    t32 = (15 - 4);
    t39 = (t32 * 1U);
    t40 = (0 + t39);
    t15 = (t18 + t40);
    t19 = (t41 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = 4;
    t21 = (t19 + 4U);
    *((int *)t21) = 0;
    t21 = (t19 + 8U);
    *((int *)t21) = -1;
    t16 = (0 - 4);
    t42 = (t16 * -1);
    t42 = (t42 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t42;
    t17 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t15, t41);
    t22 = (t17 - 31);
    t42 = (t22 * -1);
    t43 = (t31 + t42);
    t44 = (8U * t43);
    t45 = (0U + t44);
    t21 = (t0 + 3704);
    t26 = (t21 + 56U);
    t33 = *((char **)t26);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t8, 8U);
    xsi_driver_first_trans_delta(t21, t45, 8U, 0LL);
    goto LAB27;

}


extern void work_a_2696732300_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2696732300_3212880686_p_0};
	xsi_register_didat("work_a_2696732300_3212880686", "isim/Test2_isim_beh.exe.sim/work/a_2696732300_3212880686.didat");
	xsi_register_executes(pe);
}
