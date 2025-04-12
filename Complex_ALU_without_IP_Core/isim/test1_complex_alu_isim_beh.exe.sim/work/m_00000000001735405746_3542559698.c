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
static const char *ng0 = "C:/Users/mahbod/Desktop/Complex_ALU_withoutip/complex_mul.v";
static int ng1[] = {1, 0};
static int ng2[] = {23, 0};
static int ng3[] = {0, 0};
static int ng4[] = {47, 0};
static int ng5[] = {24, 0};



static void Always_39_0(char *t0)
{
    char t6[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t98[8];
    char t108[8];
    char t118[8];
    char t119[8];
    char t129[8];
    char t139[8];
    char t140[8];
    char t142[8];
    char t143[8];
    char t144[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t141;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    int t152;
    char *t153;
    unsigned int t154;
    int t155;
    int t156;
    char *t157;
    unsigned int t158;
    int t159;
    int t160;
    unsigned int t161;
    int t162;
    unsigned int t163;
    unsigned int t164;
    int t165;
    int t166;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(45, ng0);

LAB36:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 1824U);
    t7 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t22) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t19 & 255U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 255U);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_multiply(t36, 24, t6, 24, t22, 24);
    t21 = (t0 + 1664U);
    t23 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t29 = (t23 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (t24 >> 8);
    *((unsigned int *)t52) = t25;
    t26 = *((unsigned int *)t29);
    t27 = (t26 >> 8);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t28 & 255U);
    t31 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t31 & 255U);
    t30 = (t0 + 1824U);
    t34 = *((char **)t30);
    memset(t60, 0, 8);
    t30 = (t60 + 4);
    t35 = (t34 + 4);
    t32 = *((unsigned int *)t34);
    t33 = (t32 >> 8);
    *((unsigned int *)t60) = t33;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 8);
    *((unsigned int *)t30) = t40;
    t41 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t41 & 255U);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t42 & 255U);
    memset(t98, 0, 8);
    xsi_vlog_unsigned_multiply(t98, 24, t52, 24, t60, 24);
    memset(t108, 0, 8);
    xsi_vlog_unsigned_minus(t108, 24, t36, 24, t98, 24);
    t37 = (t0 + 2384);
    t38 = (t0 + 2384);
    t51 = (t38 + 72U);
    t53 = *((char **)t51);
    t59 = ((char*)((ng2)));
    t64 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t118, t119, t129, ((int*)(t53)), 2, t59, 32, 1, t64, 32, 1);
    t65 = (t118 + 4);
    t43 = *((unsigned int *)t65);
    t84 = (!(t43));
    t66 = (t119 + 4);
    t44 = *((unsigned int *)t66);
    t85 = (!(t44));
    t152 = (t84 && t85);
    t74 = (t129 + 4);
    t45 = *((unsigned int *)t74);
    t155 = (!(t45));
    t156 = (t152 && t155);
    if (t156 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 1824U);
    t7 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 8);
    *((unsigned int *)t22) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 8);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t19 & 255U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 255U);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_multiply(t36, 24, t6, 24, t22, 24);
    t21 = (t0 + 1664U);
    t23 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t29 = (t23 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (t24 >> 8);
    *((unsigned int *)t52) = t25;
    t26 = *((unsigned int *)t29);
    t27 = (t26 >> 8);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t28 & 255U);
    t31 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t31 & 255U);
    t30 = (t0 + 1824U);
    t34 = *((char **)t30);
    memset(t60, 0, 8);
    t30 = (t60 + 4);
    t35 = (t34 + 4);
    t32 = *((unsigned int *)t34);
    t33 = (t32 >> 0);
    *((unsigned int *)t60) = t33;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 0);
    *((unsigned int *)t30) = t40;
    t41 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t41 & 255U);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t42 & 255U);
    memset(t98, 0, 8);
    xsi_vlog_unsigned_multiply(t98, 24, t52, 24, t60, 24);
    memset(t108, 0, 8);
    xsi_vlog_unsigned_add(t108, 24, t36, 24, t98, 24);
    t37 = (t0 + 2384);
    t38 = (t0 + 2384);
    t51 = (t38 + 72U);
    t53 = *((char **)t51);
    t59 = ((char*)((ng4)));
    t64 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t118, t119, t129, ((int*)(t53)), 2, t59, 32, 1, t64, 32, 1);
    t65 = (t118 + 4);
    t43 = *((unsigned int *)t65);
    t84 = (!(t43));
    t66 = (t119 + 4);
    t44 = *((unsigned int *)t66);
    t85 = (!(t44));
    t152 = (t84 && t85);
    t74 = (t129 + 4);
    t45 = *((unsigned int *)t74);
    t155 = (!(t45));
    t156 = (t152 && t155);
    if (t156 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB30:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 1504U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB20;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t36) = 1;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    xsi_set_current_line(40, ng0);

LAB31:    xsi_set_current_line(41, ng0);
    t99 = (t0 + 1664U);
    t100 = *((char **)t99);
    memset(t98, 0, 8);
    t99 = (t98 + 4);
    t101 = (t100 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (t102 >> 0);
    *((unsigned int *)t98) = t103;
    t104 = *((unsigned int *)t101);
    t105 = (t104 >> 0);
    *((unsigned int *)t99) = t105;
    t106 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t106 & 255U);
    t107 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t107 & 255U);
    t109 = (t0 + 1824U);
    t110 = *((char **)t109);
    memset(t108, 0, 8);
    t109 = (t108 + 4);
    t111 = (t110 + 4);
    t112 = *((unsigned int *)t110);
    t113 = (t112 >> 0);
    *((unsigned int *)t108) = t113;
    t114 = *((unsigned int *)t111);
    t115 = (t114 >> 0);
    *((unsigned int *)t109) = t115;
    t116 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t116 & 255U);
    t117 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t117 & 255U);
    memset(t118, 0, 8);
    xsi_vlog_unsigned_multiply(t118, 24, t98, 24, t108, 24);
    t120 = (t0 + 1664U);
    t121 = *((char **)t120);
    memset(t119, 0, 8);
    t120 = (t119 + 4);
    t122 = (t121 + 4);
    t123 = *((unsigned int *)t121);
    t124 = (t123 >> 8);
    *((unsigned int *)t119) = t124;
    t125 = *((unsigned int *)t122);
    t126 = (t125 >> 8);
    *((unsigned int *)t120) = t126;
    t127 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t127 & 255U);
    t128 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t128 & 255U);
    t130 = (t0 + 1824U);
    t131 = *((char **)t130);
    memset(t129, 0, 8);
    t130 = (t129 + 4);
    t132 = (t131 + 4);
    t133 = *((unsigned int *)t131);
    t134 = (t133 >> 8);
    *((unsigned int *)t129) = t134;
    t135 = *((unsigned int *)t132);
    t136 = (t135 >> 8);
    *((unsigned int *)t130) = t136;
    t137 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t137 & 255U);
    t138 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t138 & 255U);
    memset(t139, 0, 8);
    xsi_vlog_unsigned_multiply(t139, 24, t119, 24, t129, 24);
    memset(t140, 0, 8);
    xsi_vlog_unsigned_minus(t140, 24, t118, 24, t139, 24);
    t141 = (t0 + 2384);
    t145 = (t0 + 2384);
    t146 = (t145 + 72U);
    t147 = *((char **)t146);
    t148 = ((char*)((ng2)));
    t149 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t142, t143, t144, ((int*)(t147)), 2, t148, 32, 1, t149, 32, 1);
    t150 = (t142 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (!(t151));
    t153 = (t143 + 4);
    t154 = *((unsigned int *)t153);
    t155 = (!(t154));
    t156 = (t152 && t155);
    t157 = (t144 + 4);
    t158 = *((unsigned int *)t157);
    t159 = (!(t158));
    t160 = (t156 && t159);
    if (t160 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 1824U);
    t7 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 8);
    *((unsigned int *)t22) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 8);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t19 & 255U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 255U);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_multiply(t36, 24, t6, 24, t22, 24);
    t21 = (t0 + 1664U);
    t23 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t29 = (t23 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (t24 >> 8);
    *((unsigned int *)t52) = t25;
    t26 = *((unsigned int *)t29);
    t27 = (t26 >> 8);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t28 & 255U);
    t31 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t31 & 255U);
    t30 = (t0 + 1824U);
    t34 = *((char **)t30);
    memset(t60, 0, 8);
    t30 = (t60 + 4);
    t35 = (t34 + 4);
    t32 = *((unsigned int *)t34);
    t33 = (t32 >> 0);
    *((unsigned int *)t60) = t33;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 0);
    *((unsigned int *)t30) = t40;
    t41 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t41 & 255U);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t42 & 255U);
    memset(t98, 0, 8);
    xsi_vlog_unsigned_multiply(t98, 24, t52, 24, t60, 24);
    memset(t108, 0, 8);
    xsi_vlog_unsigned_add(t108, 24, t36, 24, t98, 24);
    t37 = (t0 + 2384);
    t38 = (t0 + 2384);
    t51 = (t38 + 72U);
    t53 = *((char **)t51);
    t59 = ((char*)((ng4)));
    t64 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t118, t119, t129, ((int*)(t53)), 2, t59, 32, 1, t64, 32, 1);
    t65 = (t118 + 4);
    t43 = *((unsigned int *)t65);
    t84 = (!(t43));
    t66 = (t119 + 4);
    t44 = *((unsigned int *)t66);
    t85 = (!(t44));
    t152 = (t84 && t85);
    t74 = (t129 + 4);
    t45 = *((unsigned int *)t74);
    t155 = (!(t45));
    t156 = (t152 && t155);
    if (t156 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB30;

LAB32:    t161 = *((unsigned int *)t144);
    t162 = (t161 + 0);
    t163 = *((unsigned int *)t142);
    t164 = *((unsigned int *)t143);
    t165 = (t163 - t164);
    t166 = (t165 + 1);
    xsi_vlogvar_assign_value(t141, t140, t162, *((unsigned int *)t143), t166);
    goto LAB33;

LAB34:    t46 = *((unsigned int *)t129);
    t159 = (t46 + 0);
    t47 = *((unsigned int *)t118);
    t48 = *((unsigned int *)t119);
    t160 = (t47 - t48);
    t162 = (t160 + 1);
    xsi_vlogvar_assign_value(t37, t108, t159, *((unsigned int *)t119), t162);
    goto LAB35;

LAB37:    t46 = *((unsigned int *)t129);
    t159 = (t46 + 0);
    t47 = *((unsigned int *)t118);
    t48 = *((unsigned int *)t119);
    t160 = (t47 - t48);
    t162 = (t160 + 1);
    xsi_vlogvar_assign_value(t37, t108, t159, *((unsigned int *)t119), t162);
    goto LAB38;

LAB39:    t46 = *((unsigned int *)t129);
    t159 = (t46 + 0);
    t47 = *((unsigned int *)t118);
    t48 = *((unsigned int *)t119);
    t160 = (t47 - t48);
    t162 = (t160 + 1);
    xsi_vlogvar_assign_value(t37, t108, t159, *((unsigned int *)t119), t162);
    goto LAB40;

}


extern void work_m_00000000001735405746_3542559698_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000001735405746_3542559698", "isim/test1_complex_alu_isim_beh.exe.sim/work/m_00000000001735405746_3542559698.didat");
	xsi_register_executes(pe);
}
