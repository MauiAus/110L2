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
static const char *ng0 = "C:/Users/110L/Desktop/110/Exeperiment3/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};



static void Always_26_0(char *t0)
{
    char t10[8];
    char t20[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 8, t8, 8, t9, 8);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    goto LAB37;

LAB9:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 8, t4, 8, t7, 8);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    goto LAB37;

LAB11:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 8, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    goto LAB37;

LAB13:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 8, t4, 8, t7, 8);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    goto LAB37;

LAB15:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 255U);
    if (t15 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t3) != 0)
        goto LAB40;

LAB41:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t8);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB42;

LAB43:    memcpy(t27, t10, 8);

LAB44:    t59 = (t0 + 1768);
    xsi_vlogvar_assign_value(t59, t27, 0, 0, 8);
    goto LAB37;

LAB17:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 255U);
    if (t15 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t3) != 0)
        goto LAB54;

LAB55:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (!(t16));
    t18 = *((unsigned int *)t8);
    t21 = (t17 || t18);
    if (t21 > 0)
        goto LAB56;

LAB57:    memcpy(t27, t10, 8);

LAB58:    t59 = (t0 + 1768);
    xsi_vlogvar_assign_value(t59, t27, 0, 0, 8);
    goto LAB37;

LAB19:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 255U);
    if (t15 != 0)
        goto LAB69;

LAB67:    if (*((unsigned int *)t3) == 0)
        goto LAB66;

LAB68:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;

LAB69:    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 8);
    goto LAB37;

LAB21:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB71;

LAB70:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 8);
    goto LAB37;

LAB23:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB72;

LAB73:
LAB74:    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t10, 0, 0, 8);
    goto LAB37;

LAB25:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB75;

LAB76:
LAB77:    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t10, 0, 0, 8);
    goto LAB37;

LAB27:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB78;

LAB79:
LAB80:    t19 = (t0 + 1768);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 8);
    goto LAB37;

LAB29:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 8, t4, 8, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    goto LAB37;

LAB31:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 8, t4, 8, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    goto LAB37;

LAB33:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 8, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    goto LAB37;

LAB35:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 8, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t10) = 1;
    goto LAB41;

LAB40:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    t9 = (t0 + 1208U);
    t19 = *((char **)t9);
    memset(t20, 0, 8);
    t9 = (t19 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 255U);
    if (t25 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t9) != 0)
        goto LAB47;

LAB48:    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t20);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t10 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t20) = 1;
    goto LAB48;

LAB47:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB48;

LAB49:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t10 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t10);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t20);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB51;

LAB52:    *((unsigned int *)t10) = 1;
    goto LAB55;

LAB54:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB56:    t9 = (t0 + 1208U);
    t19 = *((char **)t9);
    memset(t20, 0, 8);
    t9 = (t19 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t25 = (t24 & t23);
    t28 = (t25 & 255U);
    if (t28 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t9) != 0)
        goto LAB61;

LAB62:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t20);
    t34 = (t29 | t30);
    *((unsigned int *)t27) = t34;
    t31 = (t10 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t32);
    t37 = (t35 | t36);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t33);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB58;

LAB59:    *((unsigned int *)t20) = 1;
    goto LAB62;

LAB61:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB62;

LAB63:    t40 = *((unsigned int *)t27);
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t40 | t43);
    t41 = (t10 + 4);
    t42 = (t20 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (~(t44));
    t46 = *((unsigned int *)t10);
    t51 = (t46 & t45);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t52 = (t49 & t48);
    t50 = (~(t51));
    t53 = (~(t52));
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t50);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    goto LAB65;

LAB66:    *((unsigned int *)t10) = 1;
    goto LAB69;

LAB71:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB70;

LAB72:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t19 = (t4 + 4);
    t26 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t19);
    t28 = (~(t25));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t34 = *((unsigned int *)t26);
    t35 = (~(t34));
    t51 = (t24 & t28);
    t52 = (t30 & t35);
    t36 = (~(t51));
    t37 = (~(t52));
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    t43 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t43 & t37);
    goto LAB74;

LAB75:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t19 = (t4 + 4);
    t26 = (t7 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t51 = (t25 & t24);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t52 = (t30 & t29);
    t34 = (~(t51));
    t35 = (~(t52));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    goto LAB77;

LAB78:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB80;

}


extern void work_m_00000000001555021591_2725559894_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000001555021591_2725559894", "isim/alu_tb_isim_beh.exe.sim/work/m_00000000001555021591_2725559894.didat");
	xsi_register_executes(pe);
}
