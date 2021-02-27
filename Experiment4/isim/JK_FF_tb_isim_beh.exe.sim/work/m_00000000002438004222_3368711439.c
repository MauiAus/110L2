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
static const char *ng0 = "C:/Users/110L/Desktop/110/Experiment4/JK_FF.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void NetDecl_26_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0U);

LAB1:    return;
}

static void Always_27_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(28, ng0);

LAB6:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB7:    t6 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t7) == 0)
        goto LAB23;

LAB25:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;

LAB26:    t15 = (t4 + 4);
    t16 = (t6 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    *((unsigned int *)t4) = t19;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB28;

LAB27:    t24 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t24 & 1U);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 1U);
    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 1);
    goto LAB2;

LAB8:    xsi_set_current_line(30, ng0);
    t7 = (t0 + 1528U);
    t9 = *((char **)t7);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 1);
    goto LAB16;

LAB10:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    goto LAB16;

LAB12:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    goto LAB16;

LAB14:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1928);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t9) == 0)
        goto LAB17;

LAB19:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;

LAB20:    t16 = (t4 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    *((unsigned int *)t4) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB22;

LAB21:    t24 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 1);
    goto LAB16;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB22:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t4) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB21;

LAB23:    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB28:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t20 | t21);
    t22 = *((unsigned int *)t15);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t22 | t23);
    goto LAB27;

}


extern void work_m_00000000002438004222_3368711439_init()
{
	static char *pe[] = {(void *)NetDecl_26_0,(void *)Always_27_1};
	xsi_register_didat("work_m_00000000002438004222_3368711439", "isim/JK_FF_tb_isim_beh.exe.sim/work/m_00000000002438004222_3368711439.didat");
	xsi_register_executes(pe);
}
