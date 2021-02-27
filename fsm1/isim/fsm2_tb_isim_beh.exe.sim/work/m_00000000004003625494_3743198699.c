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
static const char *ng0 = "C:/Users/110L/Desktop/110/fsm1/fsm2.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {15U, 0U};

static void NetReassign_83_1(char *);


static void Always_26_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t14;
    char *t15;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t13, 4, 4, 2U, t5, 3, t3, 1);

LAB10:    t11 = ((char*)((ng1)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t11, 4);
    if (t14 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng11)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng12)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng13)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng14)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng15)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng16)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t14 == 1)
        goto LAB41;

LAB42:
LAB43:
LAB8:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1768);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 4956);
    *((int *)t3) = 1;
    NetReassign_83_1(t0);
    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(33, ng0);

LAB44:    xsi_set_current_line(34, ng0);
    t12 = ((char*)((ng1)));
    t15 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t15, t12, 0, 0, 3, 0LL);
    goto LAB43;

LAB13:    xsi_set_current_line(36, ng0);

LAB45:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB15:    xsi_set_current_line(39, ng0);

LAB46:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB17:    xsi_set_current_line(42, ng0);

LAB47:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB19:    xsi_set_current_line(45, ng0);

LAB48:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB21:    xsi_set_current_line(48, ng0);

LAB49:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB23:    xsi_set_current_line(51, ng0);

LAB50:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB25:    xsi_set_current_line(54, ng0);

LAB51:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB27:    xsi_set_current_line(57, ng0);

LAB52:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB29:    xsi_set_current_line(60, ng0);

LAB53:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB31:    xsi_set_current_line(63, ng0);

LAB54:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB33:    xsi_set_current_line(66, ng0);

LAB55:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB35:    xsi_set_current_line(69, ng0);

LAB56:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB37:    xsi_set_current_line(72, ng0);

LAB57:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB39:    xsi_set_current_line(75, ng0);

LAB58:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB41:    xsi_set_current_line(78, ng0);

LAB59:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

}

static void NetReassign_83_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t6[8];
    char t11[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t3 = 0;
    t2 = (t0 + 1368U);
    t7 = *((char **)t2);
    t2 = (t0 + 1928);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    xsi_vlogtype_concat(t6, 4, 4, 2U, t9, 3, t7, 1);
    t10 = ((char*)((ng16)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB7;

LAB4:    if (t23 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t11) = 1;

LAB7:    memset(t5, 0, 8);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t27) != 0)
        goto LAB10;

LAB11:    t34 = (t5 + 4);
    t35 = *((unsigned int *)t5);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB12;

LAB13:    t39 = *((unsigned int *)t5);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t34) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) > 0)
        goto LAB18;

LAB19:    memcpy(t4, t43, 8);

LAB20:    t44 = (t0 + 4956);
    if (*((int *)t44) > 0)
        goto LAB21;

LAB22:    if (t3 > 0)
        goto LAB23;

LAB24:    t47 = (t0 + 3432);
    *((int *)t47) = 0;

LAB25:
LAB1:    return;
LAB6:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t5) = 1;
    goto LAB11;

LAB10:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB11;

LAB12:    t38 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t43 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t4, 1, t38, 1, t43, 1);
    goto LAB20;

LAB18:    memcpy(t4, t38, 8);
    goto LAB20;

LAB21:    t45 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t45, t4, 0, 0, 0, 1, ((int*)(t44)));
    t3 = 1;
    goto LAB22;

LAB23:    t46 = (t0 + 3432);
    *((int *)t46) = 1;
    goto LAB25;

}


extern void work_m_00000000004003625494_3743198699_init()
{
	static char *pe[] = {(void *)Always_26_0,(void *)NetReassign_83_1};
	xsi_register_didat("work_m_00000000004003625494_3743198699", "isim/fsm2_tb_isim_beh.exe.sim/work/m_00000000004003625494_3743198699.didat");
	xsi_register_executes(pe);
}
