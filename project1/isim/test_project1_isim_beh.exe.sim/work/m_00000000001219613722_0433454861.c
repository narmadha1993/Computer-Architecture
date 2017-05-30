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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Narmadha/Desktop/50169758/project1/sorting_part.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};



static void Always_42_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t46[8];
    char t56[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4768);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3528);
    t8 = (t0 + 3528);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3528);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3528);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3528);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3528);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t2);
    t22 = (t16 ^ t19);
    t23 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t23 ^ t26);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t5);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB15;

LAB14:    if (t31 != 0)
        goto LAB16;

LAB17:    t9 = (t6 + 4);
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t7), t25);
    goto LAB7;

LAB8:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), t25);
    goto LAB9;

LAB10:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), t25);
    goto LAB11;

LAB12:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), t25);
    goto LAB13;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB16:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(49, ng0);

LAB21:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);

LAB22:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t8 = (t6 + 4);
    t16 = *((unsigned int *)t8);
    t19 = (~(t16));
    t22 = *((unsigned int *)t6);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3528);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3528);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3528);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3528);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB20;

LAB23:    xsi_set_current_line(51, ng0);

LAB25:    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 3208);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);

LAB26:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t8 = (t6 + 4);
    t16 = *((unsigned int *)t8);
    t19 = (~(t16));
    t22 = *((unsigned int *)t6);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB22;

LAB27:    xsi_set_current_line(53, ng0);

LAB29:    xsi_set_current_line(54, ng0);
    t9 = (t0 + 3528);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 3528);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 3528);
    t18 = (t15 + 64U);
    t39 = *((char **)t18);
    t40 = (t0 + 3048);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_get_array_select_value(t7, 4, t11, t14, t39, 2, 1, t42, 32, 1);
    t43 = (t0 + 3528);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t47 = (t0 + 3528);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 3528);
    t51 = (t50 + 64U);
    t52 = *((char **)t51);
    t53 = (t0 + 3208);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    xsi_vlog_generic_get_array_select_value(t46, 4, t45, t49, t52, 2, 1, t55, 32, 1);
    memset(t56, 0, 8);
    t57 = (t7 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB31;

LAB30:    t58 = (t46 + 4);
    if (*((unsigned int *)t58) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t7) < *((unsigned int *)t46))
        goto LAB32;

LAB33:    t60 = (t56 + 4);
    t27 = *((unsigned int *)t60);
    t28 = (~(t27));
    t29 = *((unsigned int *)t56);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 3208);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB26;

LAB31:    t59 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t56) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(55, ng0);

LAB38:    xsi_set_current_line(56, ng0);
    t61 = (t0 + 3528);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t65 = (t0 + 3528);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = (t0 + 3528);
    t69 = (t68 + 64U);
    t70 = *((char **)t69);
    t71 = (t0 + 3048);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    xsi_vlog_generic_get_array_select_value(t64, 4, t63, t67, t70, 2, 1, t73, 32, 1);
    t74 = (t0 + 3368);
    xsi_vlogvar_assign_value(t74, t64, 0, 0, 4);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3528);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 3208);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t9, t12, 2, 1, t15, 32, 1);
    t18 = (t0 + 3528);
    t39 = (t0 + 3528);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 3528);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 3048);
    t47 = (t45 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_array_indices(t7, t46, t41, t44, 2, 1, t48, 32, 1);
    t49 = (t7 + 4);
    t16 = *((unsigned int *)t49);
    t17 = (!(t16));
    t50 = (t46 + 4);
    t19 = *((unsigned int *)t50);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t8 = (t0 + 3528);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3528);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 3208);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t18, 32, 1);
    t39 = (t6 + 4);
    t16 = *((unsigned int *)t39);
    t17 = (!(t16));
    t40 = (t7 + 4);
    t19 = *((unsigned int *)t40);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB41;

LAB42:    goto LAB37;

LAB39:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t46);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t18, t6, 0, *((unsigned int *)t46), t25);
    goto LAB40;

LAB41:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t25);
    goto LAB42;

}


extern void work_m_00000000001219613722_0433454861_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_00000000001219613722_0433454861", "isim/test_project1_isim_beh.exe.sim/work/m_00000000001219613722_0433454861.didat");
	xsi_register_executes(pe);
}
