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
static const char *ng0 = "C:/Users/110L/Desktop/110/Exeperiment3/alu_4bit.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};



static void Always_26_0(char *t0)
{
    char t10[8];
    char t21[8];
    char t28[8];
    char t60[8];
    char t69[8];
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
    unsigned int t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;

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
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 8, t8, 8, t9, 8);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    goto LAB23;

LAB9:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 8, t4, 8, t7, 8);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    goto LAB23;

LAB11:    xsi_set_current_line(31, ng0);
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
        goto LAB24;

LAB25:    if (*((unsigned int *)t3) != 0)
        goto LAB26;

LAB27:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (!(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB28;

LAB29:    memcpy(t28, t10, 8);

LAB30:    t56 = (t0 + 1768);
    xsi_vlogvar_assign_value(t56, t28, 0, 0, 8);
    goto LAB23;

LAB13:    xsi_set_current_line(32, ng0);
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

LAB43:    memcpy(t28, t10, 8);

LAB44:    t56 = (t0 + 1768);
    xsi_vlogvar_assign_value(t56, t28, 0, 0, 8);
    goto LAB23;

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
        goto LAB52;

LAB53:    if (*((unsigned int *)t3) != 0)
        goto LAB54;

LAB55:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t8);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB56;

LAB57:    memcpy(t28, t10, 8);

LAB58:    t56 = (t0 + 1768);
    xsi_vlogvar_assign_value(t56, t28, 0, 0, 8);
    goto LAB23;

LAB17:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 127U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 127U);
    memset(t21, 0, 8);
    t8 = (t10 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t10);
    t22 = (t19 & t18);
    t23 = (t22 & 127U);
    if (t23 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t8) != 0)
        goto LAB68;

LAB69:    t20 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t20);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB70;

LAB71:    memcpy(t60, t21, 8);

LAB72:    t68 = (t0 + 1768);
    xsi_vlogvar_assign_value(t68, t60, 0, 0, 8);
    goto LAB23;

LAB19:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 7U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 7U);
    memset(t21, 0, 8);
    t8 = (t10 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t10);
    t22 = (t19 & t18);
    t23 = (t22 & 7U);
    if (t23 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t8) != 0)
        goto LAB82;

LAB83:    t20 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t20);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB84;

LAB85:    memcpy(t69, t21, 8);

LAB86:    t77 = (t0 + 1768);
    xsi_vlogvar_assign_value(t77, t69, 0, 0, 8);
    goto LAB23;

LAB21:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    memset(t21, 0, 8);
    t8 = (t10 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t10);
    t22 = (t19 & t18);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t8) != 0)
        goto LAB96;

LAB97:    t20 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t20);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB98;

LAB99:    memcpy(t69, t21, 8);

LAB100:    t77 = (t0 + 1768);
    xsi_vlogvar_assign_value(t77, t69, 0, 0, 8);
    goto LAB23;

LAB24:    *((unsigned int *)t10) = 1;
    goto LAB27;

LAB26:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB27;

LAB28:    t9 = (t0 + 1208U);
    t20 = *((char **)t9);
    memset(t21, 0, 8);
    t9 = (t20 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 255U);
    if (t26 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t9) != 0)
        goto LAB33;

LAB34:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = (t10 + 4);
    t33 = (t21 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t21) = 1;
    goto LAB34;

LAB33:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB34;

LAB35:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t10 + 4);
    t43 = (t21 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t10);
    t47 = (t46 & t45);
    t48 = *((unsigned int *)t43);
    t49 = (~(t48));
    t50 = *((unsigned int *)t21);
    t51 = (t50 & t49);
    t52 = (~(t47));
    t53 = (~(t51));
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t52);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    goto LAB37;

LAB38:    *((unsigned int *)t10) = 1;
    goto LAB41;

LAB40:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    t9 = (t0 + 1208U);
    t20 = *((char **)t9);
    memset(t21, 0, 8);
    t9 = (t20 + 4);
    t19 = *((unsigned int *)t9);
    t22 = (~(t19));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 255U);
    if (t25 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t9) != 0)
        goto LAB47;

LAB48:    t26 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t21);
    t30 = (t26 & t29);
    *((unsigned int *)t28) = t30;
    t32 = (t10 + 4);
    t33 = (t21 + 4);
    t34 = (t28 + 4);
    t31 = *((unsigned int *)t32);
    t35 = *((unsigned int *)t33);
    t36 = (t31 | t35);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t21) = 1;
    goto LAB48;

LAB47:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB48;

LAB49:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t39 | t40);
    t42 = (t10 + 4);
    t43 = (t21 + 4);
    t41 = *((unsigned int *)t10);
    t44 = (~(t41));
    t45 = *((unsigned int *)t42);
    t46 = (~(t45));
    t48 = *((unsigned int *)t21);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t52 = (~(t50));
    t47 = (t44 & t46);
    t51 = (t49 & t52);
    t53 = (~(t47));
    t54 = (~(t51));
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t54);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t53);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t54);
    goto LAB51;

LAB52:    *((unsigned int *)t10) = 1;
    goto LAB55;

LAB54:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB56:    t9 = ((char*)((ng6)));
    memset(t21, 0, 8);
    t20 = (t9 + 4);
    t19 = *((unsigned int *)t20);
    t22 = (~(t19));
    t23 = *((unsigned int *)t9);
    t24 = (t23 & t22);
    t25 = (t24 & 4294967295U);
    if (t25 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t20) != 0)
        goto LAB61;

LAB62:    t26 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t21);
    t30 = (t26 & t29);
    *((unsigned int *)t28) = t30;
    t32 = (t10 + 4);
    t33 = (t21 + 4);
    t34 = (t28 + 4);
    t31 = *((unsigned int *)t32);
    t35 = *((unsigned int *)t33);
    t36 = (t31 | t35);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB58;

LAB59:    *((unsigned int *)t21) = 1;
    goto LAB62;

LAB61:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB62;

LAB63:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t39 | t40);
    t42 = (t10 + 4);
    t43 = (t21 + 4);
    t41 = *((unsigned int *)t10);
    t44 = (~(t41));
    t45 = *((unsigned int *)t42);
    t46 = (~(t45));
    t48 = *((unsigned int *)t21);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t52 = (~(t50));
    t47 = (t44 & t46);
    t51 = (t49 & t52);
    t53 = (~(t47));
    t54 = (~(t51));
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t54);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t53);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t54);
    goto LAB65;

LAB66:    *((unsigned int *)t21) = 1;
    goto LAB69;

LAB68:    t9 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB69;

LAB70:    t27 = ((char*)((ng6)));
    memset(t28, 0, 8);
    t32 = (t27 + 4);
    t29 = *((unsigned int *)t32);
    t30 = (~(t29));
    t31 = *((unsigned int *)t27);
    t35 = (t31 & t30);
    t36 = (t35 & 4294967295U);
    if (t36 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t32) != 0)
        goto LAB75;

LAB76:    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t60) = t39;
    t34 = (t21 + 4);
    t42 = (t28 + 4);
    t43 = (t60 + 4);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t42);
    t44 = (t40 | t41);
    *((unsigned int *)t43) = t44;
    t45 = *((unsigned int *)t43);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB72;

LAB73:    *((unsigned int *)t28) = 1;
    goto LAB76;

LAB75:    t33 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB76;

LAB77:    t48 = *((unsigned int *)t60);
    t49 = *((unsigned int *)t43);
    *((unsigned int *)t60) = (t48 | t49);
    t56 = (t21 + 4);
    t61 = (t28 + 4);
    t50 = *((unsigned int *)t21);
    t52 = (~(t50));
    t53 = *((unsigned int *)t56);
    t54 = (~(t53));
    t55 = *((unsigned int *)t28);
    t57 = (~(t55));
    t58 = *((unsigned int *)t61);
    t59 = (~(t58));
    t47 = (t52 & t54);
    t51 = (t57 & t59);
    t62 = (~(t47));
    t63 = (~(t51));
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t66 & t62);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 & t63);
    goto LAB79;

LAB80:    *((unsigned int *)t21) = 1;
    goto LAB83;

LAB82:    t9 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB83;

LAB84:    t27 = (t0 + 1048U);
    t32 = *((char **)t27);
    memset(t28, 0, 8);
    t27 = (t28 + 4);
    t33 = (t32 + 4);
    t29 = *((unsigned int *)t32);
    t30 = (t29 >> 7);
    t31 = (t30 & 1);
    *((unsigned int *)t28) = t31;
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 7);
    t37 = (t36 & 1);
    *((unsigned int *)t27) = t37;
    memset(t60, 0, 8);
    t34 = (t28 + 4);
    t38 = *((unsigned int *)t34);
    t39 = (~(t38));
    t40 = *((unsigned int *)t28);
    t41 = (t40 & t39);
    t44 = (t41 & 1U);
    if (t44 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t34) != 0)
        goto LAB89;

LAB90:    t45 = *((unsigned int *)t21);
    t46 = *((unsigned int *)t60);
    t48 = (t45 & t46);
    *((unsigned int *)t69) = t48;
    t43 = (t21 + 4);
    t56 = (t60 + 4);
    t61 = (t69 + 4);
    t49 = *((unsigned int *)t43);
    t50 = *((unsigned int *)t56);
    t52 = (t49 | t50);
    *((unsigned int *)t61) = t52;
    t53 = *((unsigned int *)t61);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB91;

LAB92:
LAB93:    goto LAB86;

LAB87:    *((unsigned int *)t60) = 1;
    goto LAB90;

LAB89:    t42 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB90;

LAB91:    t55 = *((unsigned int *)t69);
    t57 = *((unsigned int *)t61);
    *((unsigned int *)t69) = (t55 | t57);
    t68 = (t21 + 4);
    t70 = (t60 + 4);
    t58 = *((unsigned int *)t21);
    t59 = (~(t58));
    t62 = *((unsigned int *)t68);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t70);
    t67 = (~(t66));
    t47 = (t59 & t63);
    t51 = (t65 & t67);
    t71 = (~(t47));
    t72 = (~(t51));
    t73 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t73 & t71);
    t74 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t74 & t72);
    t75 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t75 & t71);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t76 & t72);
    goto LAB93;

LAB94:    *((unsigned int *)t21) = 1;
    goto LAB97;

LAB96:    t9 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB97;

LAB98:    t27 = (t0 + 1048U);
    t32 = *((char **)t27);
    memset(t28, 0, 8);
    t27 = (t28 + 4);
    t33 = (t32 + 4);
    t29 = *((unsigned int *)t32);
    t30 = (t29 >> 1);
    *((unsigned int *)t28) = t30;
    t31 = *((unsigned int *)t33);
    t35 = (t31 >> 1);
    *((unsigned int *)t27) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 127U);
    t37 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t37 & 127U);
    memset(t60, 0, 8);
    t34 = (t28 + 4);
    t38 = *((unsigned int *)t34);
    t39 = (~(t38));
    t40 = *((unsigned int *)t28);
    t41 = (t40 & t39);
    t44 = (t41 & 127U);
    if (t44 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t34) != 0)
        goto LAB103;

LAB104:    t45 = *((unsigned int *)t21);
    t46 = *((unsigned int *)t60);
    t48 = (t45 & t46);
    *((unsigned int *)t69) = t48;
    t43 = (t21 + 4);
    t56 = (t60 + 4);
    t61 = (t69 + 4);
    t49 = *((unsigned int *)t43);
    t50 = *((unsigned int *)t56);
    t52 = (t49 | t50);
    *((unsigned int *)t61) = t52;
    t53 = *((unsigned int *)t61);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB105;

LAB106:
LAB107:    goto LAB100;

LAB101:    *((unsigned int *)t60) = 1;
    goto LAB104;

LAB103:    t42 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB104;

LAB105:    t55 = *((unsigned int *)t69);
    t57 = *((unsigned int *)t61);
    *((unsigned int *)t69) = (t55 | t57);
    t68 = (t21 + 4);
    t70 = (t60 + 4);
    t58 = *((unsigned int *)t21);
    t59 = (~(t58));
    t62 = *((unsigned int *)t68);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t70);
    t67 = (~(t66));
    t47 = (t59 & t63);
    t51 = (t65 & t67);
    t71 = (~(t47));
    t72 = (~(t51));
    t73 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t73 & t71);
    t74 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t74 & t72);
    t75 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t75 & t71);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t76 & t72);
    goto LAB107;

}


extern void work_m_00000000001555021591_3042135066_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000001555021591_3042135066", "isim/alu_4bit_tb_isim_beh.exe.sim/work/m_00000000001555021591_3042135066.didat");
	xsi_register_executes(pe);
}
