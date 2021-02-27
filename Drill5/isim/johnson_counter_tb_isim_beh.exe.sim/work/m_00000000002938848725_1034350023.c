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

/* This file is designed for use with ISim build 0xc4ca3437 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/110L/Desktop/110/Drill5/Johnson_counter.v";
static int ng1[] = {1, 0};
static int ng2[] = {3, 0};
static int ng3[] = {0, 0};
static int ng4[] = {2, 0};



static void Always_24_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    int t40;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(28, ng0);

LAB13:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t21);
    t18 = (t17 & t16);
    t22 = (t18 & 1U);
    if (t22 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t13) == 0)
        goto LAB14;

LAB16:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB17:    t20 = (t4 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    *((unsigned int *)t4) = t25;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB18:    t30 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t30 & 1U);
    t31 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t31 & 1U);
    t32 = (t0 + 1608);
    t34 = (t0 + 1608);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t33, t36, 2, t37, 32, 1);
    t38 = (t33 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    if (t40 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 1608);
    t19 = (t0 + 1608);
    t20 = (t19 + 72U);
    t23 = *((char **)t20);
    t32 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t21, t23, 2, t32, 32, 1);
    t34 = (t21 + 4);
    t15 = *((unsigned int *)t34);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 1608);
    t19 = (t0 + 1608);
    t20 = (t19 + 72U);
    t23 = *((char **)t20);
    t32 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t21, t23, 2, t32, 32, 1);
    t34 = (t21 + 4);
    t15 = *((unsigned int *)t34);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 1608);
    t19 = (t0 + 1608);
    t20 = (t19 + 72U);
    t23 = *((char **)t20);
    t32 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t21, t23, 2, t32, 32, 1);
    t34 = (t21 + 4);
    t15 = *((unsigned int *)t34);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB26;

LAB27:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB19:    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t26 | t27);
    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t20) = (t28 | t29);
    goto LAB18;

LAB20:    xsi_vlogvar_wait_assign_value(t32, t4, 0, *((unsigned int *)t33), 1, 0LL);
    goto LAB21;

LAB22:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB23;

LAB24:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB27;

}


extern void work_m_00000000002938848725_1034350023_init()
{
	static char *pe[] = {(void *)Always_24_0};
	xsi_register_didat("work_m_00000000002938848725_1034350023", "isim/johnson_counter_tb_isim_beh.exe.sim/work/m_00000000002938848725_1034350023.didat");
	xsi_register_executes(pe);
}
