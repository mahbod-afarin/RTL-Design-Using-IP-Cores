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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_00000000003405408344_3841093685_init();
    unisims_ver_m_00000000004221170615_0679316750_init();
    unisims_ver_m_00000000001773747898_0257217429_init();
    unisims_ver_m_00000000001773747898_2336946039_init();
    unisims_ver_m_00000000001773747898_0374334164_init();
    unisims_ver_m_00000000001773747898_2454832694_init();
    unisims_ver_m_00000000001508379050_3852734344_init();
    unisims_ver_m_00000000003848737514_1058825862_init();
    unisims_ver_m_00000000000909115699_2771340377_init();
    unisims_ver_m_00000000003317509437_1759035934_init();
    unisims_ver_m_00000000003927721830_1593237687_init();
    unisims_ver_m_00000000001108370118_1918347995_init();
    unisims_ver_m_00000000001108370118_1185409170_init();
    unisims_ver_m_00000000001784029001_3450768715_init();
    unisims_ver_m_00000000001784029001_1343423062_init();
    unisims_ver_m_00000000001784029001_2199131516_init();
    unisims_ver_m_00000000000129589818_1491383940_init();
    work_m_00000000000076226071_3542559698_init();
    work_m_00000000000405931749_0101469624_init();
    work_m_00000000003709245077_3306615668_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003709245077_3306615668");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
