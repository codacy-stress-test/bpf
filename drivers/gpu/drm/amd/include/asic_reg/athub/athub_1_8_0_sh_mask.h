/*
 * Copyright 2022 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */
#ifndef _athub_1_8_0_SH_MASK_HEADER
#define _athub_1_8_0_SH_MASK_HEADER


// addressBlock: aid_athub_atsdec
//ATC_ATS_CNTL
#define ATC_ATS_CNTL__DISABLE_ATC__SHIFT                                                                      0x0
#define ATC_ATS_CNTL__DISABLE_PRI__SHIFT                                                                      0x1
#define ATC_ATS_CNTL__DISABLE_PASID__SHIFT                                                                    0x2
#define ATC_ATS_CNTL__CREDITS_ATS_RPB__SHIFT                                                                  0x8
#define ATC_ATS_CNTL__DEBUG_ECO__SHIFT                                                                        0x10
#define ATC_ATS_CNTL__TRANS_EXE_RETURN__SHIFT                                                                 0x16
#define ATC_ATS_CNTL__DISABLE_ATC_MASK                                                                        0x00000001L
#define ATC_ATS_CNTL__DISABLE_PRI_MASK                                                                        0x00000002L
#define ATC_ATS_CNTL__DISABLE_PASID_MASK                                                                      0x00000004L
#define ATC_ATS_CNTL__CREDITS_ATS_RPB_MASK                                                                    0x00003F00L
#define ATC_ATS_CNTL__DEBUG_ECO_MASK                                                                          0x000F0000L
#define ATC_ATS_CNTL__TRANS_EXE_RETURN_MASK                                                                   0x00C00000L
//ATC_ATS_CNTL2
#define ATC_ATS_CNTL2__CREDITS_ATS_RPB_VC5TR__SHIFT                                                           0x0
#define ATC_ATS_CNTL2__CREDITS_ATS_RPB_VC0TR__SHIFT                                                           0x8
#define ATC_ATS_CNTL2__CREDITS_ATS_RPB_PRINV__SHIFT                                                           0x10
#define ATC_ATS_CNTL2__TRANSLATION_STALL__SHIFT                                                               0x18
#define ATC_ATS_CNTL2__GC_TRANS_VC5_ENABLE__SHIFT                                                             0x19
#define ATC_ATS_CNTL2__MM_TRANS_VC5_ENABLE__SHIFT                                                             0x1a
#define ATC_ATS_CNTL2__RESERVED__SHIFT                                                                        0x1b
#define ATC_ATS_CNTL2__CREDITS_ATS_RPB_VC5TR_MASK                                                             0x000000FFL
#define ATC_ATS_CNTL2__CREDITS_ATS_RPB_VC0TR_MASK                                                             0x0000FF00L
#define ATC_ATS_CNTL2__CREDITS_ATS_RPB_PRINV_MASK                                                             0x00FF0000L
#define ATC_ATS_CNTL2__TRANSLATION_STALL_MASK                                                                 0x01000000L
#define ATC_ATS_CNTL2__GC_TRANS_VC5_ENABLE_MASK                                                               0x02000000L
#define ATC_ATS_CNTL2__MM_TRANS_VC5_ENABLE_MASK                                                               0x04000000L
#define ATC_ATS_CNTL2__RESERVED_MASK                                                                          0xF8000000L
//ATC_ATS_CNTL3
#define ATC_ATS_CNTL3__RESERVED__SHIFT                                                                        0x0
#define ATC_ATS_CNTL3__RESERVED_MASK                                                                          0xFFFFFFFFL
//ATC_ATS_CNTL4
#define ATC_ATS_CNTL4__RESERVED__SHIFT                                                                        0x0
#define ATC_ATS_CNTL4__RESERVED_MASK                                                                          0xFFFFFFFFL
//ATC_ATS_MISC_CNTL
#define ATC_ATS_MISC_CNTL__TRANS_RESP_IN_INV_COLLISION_HOST__SHIFT                                            0x10
#define ATC_ATS_MISC_CNTL__TRANS_RESP_IN_INV_COLLISION_GUEST__SHIFT                                           0x11
#define ATC_ATS_MISC_CNTL__DEBUG_COLLISION__SHIFT                                                             0x12
#define ATC_ATS_MISC_CNTL__EFFECTIVE_TRANS_WORK_QUEUE__SHIFT                                                  0x13
#define ATC_ATS_MISC_CNTL__TRANS_RESP_NULL_PASID_SEL__SHIFT                                                   0x1d
#define ATC_ATS_MISC_CNTL__RESERVED__SHIFT                                                                    0x1e
#define ATC_ATS_MISC_CNTL__TRANS_RESP_IN_INV_COLLISION_HOST_MASK                                              0x00010000L
#define ATC_ATS_MISC_CNTL__TRANS_RESP_IN_INV_COLLISION_GUEST_MASK                                             0x00020000L
#define ATC_ATS_MISC_CNTL__DEBUG_COLLISION_MASK                                                               0x00040000L
#define ATC_ATS_MISC_CNTL__EFFECTIVE_TRANS_WORK_QUEUE_MASK                                                    0x1FF80000L
#define ATC_ATS_MISC_CNTL__TRANS_RESP_NULL_PASID_SEL_MASK                                                     0x20000000L
#define ATC_ATS_MISC_CNTL__RESERVED_MASK                                                                      0xC0000000L
//ATC_ATS_STATUS
#define ATC_ATS_STATUS__BUSY__SHIFT                                                                           0x0
#define ATC_ATS_STATUS__CRASHED__SHIFT                                                                        0x1
#define ATC_ATS_STATUS__DEADLOCK_DETECTION__SHIFT                                                             0x2
#define ATC_ATS_STATUS__FED_IND__SHIFT                                                                        0x3
#define ATC_ATS_STATUS__BUSY_MASK                                                                             0x00000001L
#define ATC_ATS_STATUS__CRASHED_MASK                                                                          0x00000002L
#define ATC_ATS_STATUS__DEADLOCK_DETECTION_MASK                                                               0x00000004L
#define ATC_ATS_STATUS__FED_IND_MASK                                                                          0x00000008L
//ATC_PERFCOUNTER0_CFG
#define ATC_PERFCOUNTER0_CFG__PERF_SEL__SHIFT                                                                 0x0
#define ATC_PERFCOUNTER0_CFG__PERF_SEL_END__SHIFT                                                             0x8
#define ATC_PERFCOUNTER0_CFG__PERF_MODE__SHIFT                                                                0x18
#define ATC_PERFCOUNTER0_CFG__ENABLE__SHIFT                                                                   0x1c
#define ATC_PERFCOUNTER0_CFG__CLEAR__SHIFT                                                                    0x1d
#define ATC_PERFCOUNTER0_CFG__PERF_SEL_MASK                                                                   0x000000FFL
#define ATC_PERFCOUNTER0_CFG__PERF_SEL_END_MASK                                                               0x0000FF00L
#define ATC_PERFCOUNTER0_CFG__PERF_MODE_MASK                                                                  0x0F000000L
#define ATC_PERFCOUNTER0_CFG__ENABLE_MASK                                                                     0x10000000L
#define ATC_PERFCOUNTER0_CFG__CLEAR_MASK                                                                      0x20000000L
//ATC_PERFCOUNTER1_CFG
#define ATC_PERFCOUNTER1_CFG__PERF_SEL__SHIFT                                                                 0x0
#define ATC_PERFCOUNTER1_CFG__PERF_SEL_END__SHIFT                                                             0x8
#define ATC_PERFCOUNTER1_CFG__PERF_MODE__SHIFT                                                                0x18
#define ATC_PERFCOUNTER1_CFG__ENABLE__SHIFT                                                                   0x1c
#define ATC_PERFCOUNTER1_CFG__CLEAR__SHIFT                                                                    0x1d
#define ATC_PERFCOUNTER1_CFG__PERF_SEL_MASK                                                                   0x000000FFL
#define ATC_PERFCOUNTER1_CFG__PERF_SEL_END_MASK                                                               0x0000FF00L
#define ATC_PERFCOUNTER1_CFG__PERF_MODE_MASK                                                                  0x0F000000L
#define ATC_PERFCOUNTER1_CFG__ENABLE_MASK                                                                     0x10000000L
#define ATC_PERFCOUNTER1_CFG__CLEAR_MASK                                                                      0x20000000L
//ATC_PERFCOUNTER2_CFG
#define ATC_PERFCOUNTER2_CFG__PERF_SEL__SHIFT                                                                 0x0
#define ATC_PERFCOUNTER2_CFG__PERF_SEL_END__SHIFT                                                             0x8
#define ATC_PERFCOUNTER2_CFG__PERF_MODE__SHIFT                                                                0x18
#define ATC_PERFCOUNTER2_CFG__ENABLE__SHIFT                                                                   0x1c
#define ATC_PERFCOUNTER2_CFG__CLEAR__SHIFT                                                                    0x1d
#define ATC_PERFCOUNTER2_CFG__PERF_SEL_MASK                                                                   0x000000FFL
#define ATC_PERFCOUNTER2_CFG__PERF_SEL_END_MASK                                                               0x0000FF00L
#define ATC_PERFCOUNTER2_CFG__PERF_MODE_MASK                                                                  0x0F000000L
#define ATC_PERFCOUNTER2_CFG__ENABLE_MASK                                                                     0x10000000L
#define ATC_PERFCOUNTER2_CFG__CLEAR_MASK                                                                      0x20000000L
//ATC_PERFCOUNTER3_CFG
#define ATC_PERFCOUNTER3_CFG__PERF_SEL__SHIFT                                                                 0x0
#define ATC_PERFCOUNTER3_CFG__PERF_SEL_END__SHIFT                                                             0x8
#define ATC_PERFCOUNTER3_CFG__PERF_MODE__SHIFT                                                                0x18
#define ATC_PERFCOUNTER3_CFG__ENABLE__SHIFT                                                                   0x1c
#define ATC_PERFCOUNTER3_CFG__CLEAR__SHIFT                                                                    0x1d
#define ATC_PERFCOUNTER3_CFG__PERF_SEL_MASK                                                                   0x000000FFL
#define ATC_PERFCOUNTER3_CFG__PERF_SEL_END_MASK                                                               0x0000FF00L
#define ATC_PERFCOUNTER3_CFG__PERF_MODE_MASK                                                                  0x0F000000L
#define ATC_PERFCOUNTER3_CFG__ENABLE_MASK                                                                     0x10000000L
#define ATC_PERFCOUNTER3_CFG__CLEAR_MASK                                                                      0x20000000L
//ATC_PERFCOUNTER_RSLT_CNTL
#define ATC_PERFCOUNTER_RSLT_CNTL__PERF_COUNTER_SELECT__SHIFT                                                 0x0
#define ATC_PERFCOUNTER_RSLT_CNTL__START_TRIGGER__SHIFT                                                       0x8
#define ATC_PERFCOUNTER_RSLT_CNTL__STOP_TRIGGER__SHIFT                                                        0x10
#define ATC_PERFCOUNTER_RSLT_CNTL__ENABLE_ANY__SHIFT                                                          0x18
#define ATC_PERFCOUNTER_RSLT_CNTL__CLEAR_ALL__SHIFT                                                           0x19
#define ATC_PERFCOUNTER_RSLT_CNTL__STOP_ALL_ON_SATURATE__SHIFT                                                0x1a
#define ATC_PERFCOUNTER_RSLT_CNTL__PERF_COUNTER_SELECT_MASK                                                   0x0000000FL
#define ATC_PERFCOUNTER_RSLT_CNTL__START_TRIGGER_MASK                                                         0x0000FF00L
#define ATC_PERFCOUNTER_RSLT_CNTL__STOP_TRIGGER_MASK                                                          0x00FF0000L
#define ATC_PERFCOUNTER_RSLT_CNTL__ENABLE_ANY_MASK                                                            0x01000000L
#define ATC_PERFCOUNTER_RSLT_CNTL__CLEAR_ALL_MASK                                                             0x02000000L
#define ATC_PERFCOUNTER_RSLT_CNTL__STOP_ALL_ON_SATURATE_MASK                                                  0x04000000L
//ATC_PERFCOUNTER_LO
#define ATC_PERFCOUNTER_LO__COUNTER_LO__SHIFT                                                                 0x0
#define ATC_PERFCOUNTER_LO__COUNTER_LO_MASK                                                                   0xFFFFFFFFL
//ATC_PERFCOUNTER_HI
#define ATC_PERFCOUNTER_HI__COUNTER_HI__SHIFT                                                                 0x0
#define ATC_PERFCOUNTER_HI__COMPARE_VALUE__SHIFT                                                              0x10
#define ATC_PERFCOUNTER_HI__COUNTER_HI_MASK                                                                   0x0000FFFFL
#define ATC_PERFCOUNTER_HI__COMPARE_VALUE_MASK                                                                0xFFFF0000L
//ATC_ATS_FAULT_CNTL
#define ATC_ATS_FAULT_CNTL__FAULT_REGISTER_LOG__SHIFT                                                         0x0
#define ATC_ATS_FAULT_CNTL__FAULT_INTERRUPT_TABLE__SHIFT                                                      0xa
#define ATC_ATS_FAULT_CNTL__FAULT_CRASH_TABLE__SHIFT                                                          0x14
#define ATC_ATS_FAULT_CNTL__FAULT_REGISTER_LOG_MASK                                                           0x000001FFL
#define ATC_ATS_FAULT_CNTL__FAULT_INTERRUPT_TABLE_MASK                                                        0x0007FC00L
#define ATC_ATS_FAULT_CNTL__FAULT_CRASH_TABLE_MASK                                                            0x1FF00000L
//ATC_ATS_FAULT_STATUS_INFO
#define ATC_ATS_FAULT_STATUS_INFO__FAULT_TYPE__SHIFT                                                          0x0
#define ATC_ATS_FAULT_STATUS_INFO__VMID_ALL__SHIFT                                                            0x9
#define ATC_ATS_FAULT_STATUS_INFO__VMID__SHIFT                                                                0xa
#define ATC_ATS_FAULT_STATUS_INFO__EXTRA_INFO__SHIFT                                                          0xf
#define ATC_ATS_FAULT_STATUS_INFO__EXTRA_INFO2__SHIFT                                                         0x10
#define ATC_ATS_FAULT_STATUS_INFO__INVALIDATION__SHIFT                                                        0x11
#define ATC_ATS_FAULT_STATUS_INFO__PAGE_REQUEST__SHIFT                                                        0x12
#define ATC_ATS_FAULT_STATUS_INFO__STATUS__SHIFT                                                              0x13
#define ATC_ATS_FAULT_STATUS_INFO__PAGE_ADDR_HIGH__SHIFT                                                      0x18
#define ATC_ATS_FAULT_STATUS_INFO__PHYSICAL_ADDR_HIGH__SHIFT                                                  0x1c
#define ATC_ATS_FAULT_STATUS_INFO__FAULT_TYPE_MASK                                                            0x000001FFL
#define ATC_ATS_FAULT_STATUS_INFO__VMID_ALL_MASK                                                              0x00000200L
#define ATC_ATS_FAULT_STATUS_INFO__VMID_MASK                                                                  0x00007C00L
#define ATC_ATS_FAULT_STATUS_INFO__EXTRA_INFO_MASK                                                            0x00008000L
#define ATC_ATS_FAULT_STATUS_INFO__EXTRA_INFO2_MASK                                                           0x00010000L
#define ATC_ATS_FAULT_STATUS_INFO__INVALIDATION_MASK                                                          0x00020000L
#define ATC_ATS_FAULT_STATUS_INFO__PAGE_REQUEST_MASK                                                          0x00040000L
#define ATC_ATS_FAULT_STATUS_INFO__STATUS_MASK                                                                0x00F80000L
#define ATC_ATS_FAULT_STATUS_INFO__PAGE_ADDR_HIGH_MASK                                                        0x0F000000L
#define ATC_ATS_FAULT_STATUS_INFO__PHYSICAL_ADDR_HIGH_MASK                                                    0xF0000000L
//ATC_ATS_FAULT_STATUS_INFO2
#define ATC_ATS_FAULT_STATUS_INFO2__VF__SHIFT                                                                 0x0
#define ATC_ATS_FAULT_STATUS_INFO2__VFID__SHIFT                                                               0x1
#define ATC_ATS_FAULT_STATUS_INFO2__L2NUM__SHIFT                                                              0x9
#define ATC_ATS_FAULT_STATUS_INFO2__INV_VMID_GFX1__SHIFT                                                      0xd
#define ATC_ATS_FAULT_STATUS_INFO2__INV_VMID_GFX2__SHIFT                                                      0x13
#define ATC_ATS_FAULT_STATUS_INFO2__INV_VMID_GFX3__SHIFT                                                      0x19
#define ATC_ATS_FAULT_STATUS_INFO2__VF_MASK                                                                   0x00000001L
#define ATC_ATS_FAULT_STATUS_INFO2__VFID_MASK                                                                 0x0000001EL
#define ATC_ATS_FAULT_STATUS_INFO2__L2NUM_MASK                                                                0x00001E00L
#define ATC_ATS_FAULT_STATUS_INFO2__INV_VMID_GFX1_MASK                                                        0x0007E000L
#define ATC_ATS_FAULT_STATUS_INFO2__INV_VMID_GFX2_MASK                                                        0x01F80000L
#define ATC_ATS_FAULT_STATUS_INFO2__INV_VMID_GFX3_MASK                                                        0x7E000000L
//ATC_ATS_FAULT_STATUS_INFO3
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_GFX4__SHIFT                                                      0x0
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_GFX5__SHIFT                                                      0x6
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_GFX6__SHIFT                                                      0xc
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_GFX7__SHIFT                                                      0x12
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_MM0__SHIFT                                                       0x18
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_GFX4_MASK                                                        0x0000003FL
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_GFX5_MASK                                                        0x00000FC0L
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_GFX6_MASK                                                        0x0003F000L
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_GFX7_MASK                                                        0x00FC0000L
#define ATC_ATS_FAULT_STATUS_INFO3__INV_VMID_MM0_MASK                                                         0x3F000000L
//ATC_ATS_FAULT_STATUS_INFO4
#define ATC_ATS_FAULT_STATUS_INFO4__INV_VMID_MM1__SHIFT                                                       0x0
#define ATC_ATS_FAULT_STATUS_INFO4__INV_VMID_MM2__SHIFT                                                       0x6
#define ATC_ATS_FAULT_STATUS_INFO4__INV_VMID_MM3__SHIFT                                                       0xc
#define ATC_ATS_FAULT_STATUS_INFO4__INV_VMID_MM1_MASK                                                         0x0000003FL
#define ATC_ATS_FAULT_STATUS_INFO4__INV_VMID_MM2_MASK                                                         0x00000FC0L
#define ATC_ATS_FAULT_STATUS_INFO4__INV_VMID_MM3_MASK                                                         0x0003F000L
//ATC_ATS_FAULT_STATUS_ADDR
#define ATC_ATS_FAULT_STATUS_ADDR__PAGE_ADDR__SHIFT                                                           0x0
#define ATC_ATS_FAULT_STATUS_ADDR__PAGE_ADDR_MASK                                                             0xFFFFFFFFL
//ATC_ATS_DEFAULT_PAGE_LOW
#define ATC_ATS_DEFAULT_PAGE_LOW__DEFAULT_PAGE__SHIFT                                                         0x0
#define ATC_ATS_DEFAULT_PAGE_LOW__DEFAULT_PAGE_MASK                                                           0xFFFFFFFFL
//ATHUB_PCIE_ATS_CNTL
#define ATHUB_PCIE_ATS_CNTL__STU__SHIFT                                                                       0x10
#define ATHUB_PCIE_ATS_CNTL__ATC_ENABLE__SHIFT                                                                0x1f
#define ATHUB_PCIE_ATS_CNTL__STU_MASK                                                                         0x001F0000L
#define ATHUB_PCIE_ATS_CNTL__ATC_ENABLE_MASK                                                                  0x80000000L
//ATHUB_PCIE_PASID_CNTL
#define ATHUB_PCIE_PASID_CNTL__PASID_EN__SHIFT                                                                0x10
#define ATHUB_PCIE_PASID_CNTL__PASID_EXE_PERMISSION_ENABLE__SHIFT                                             0x11
#define ATHUB_PCIE_PASID_CNTL__PASID_PRIV_MODE_SUPPORTED_ENABLE__SHIFT                                        0x12
#define ATHUB_PCIE_PASID_CNTL__PASID_EN_MASK                                                                  0x00010000L
#define ATHUB_PCIE_PASID_CNTL__PASID_EXE_PERMISSION_ENABLE_MASK                                               0x00020000L
#define ATHUB_PCIE_PASID_CNTL__PASID_PRIV_MODE_SUPPORTED_ENABLE_MASK                                          0x00040000L
//ATHUB_PCIE_PAGE_REQ_CNTL
#define ATHUB_PCIE_PAGE_REQ_CNTL__PRI_ENABLE__SHIFT                                                           0x0
#define ATHUB_PCIE_PAGE_REQ_CNTL__PRI_RESET__SHIFT                                                            0x1
#define ATHUB_PCIE_PAGE_REQ_CNTL__PRI_ENABLE_MASK                                                             0x00000001L
#define ATHUB_PCIE_PAGE_REQ_CNTL__PRI_RESET_MASK                                                              0x00000002L
//ATHUB_PCIE_OUTSTAND_PAGE_REQ_ALLOC
#define ATHUB_PCIE_OUTSTAND_PAGE_REQ_ALLOC__OUTSTAND_PAGE_REQ_ALLOC__SHIFT                                    0x0
#define ATHUB_PCIE_OUTSTAND_PAGE_REQ_ALLOC__OUTSTAND_PAGE_REQ_ALLOC_MASK                                      0xFFFFFFFFL
//ATHUB_COMMAND
#define ATHUB_COMMAND__BUS_MASTER_EN__SHIFT                                                                   0x2
#define ATHUB_COMMAND__BUS_MASTER_EN_MASK                                                                     0x00000004L
//ATHUB_PCIE_ATS_CNTL_VF_0
#define ATHUB_PCIE_ATS_CNTL_VF_0__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_0__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_1
#define ATHUB_PCIE_ATS_CNTL_VF_1__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_1__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_2
#define ATHUB_PCIE_ATS_CNTL_VF_2__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_2__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_3
#define ATHUB_PCIE_ATS_CNTL_VF_3__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_3__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_4
#define ATHUB_PCIE_ATS_CNTL_VF_4__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_4__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_5
#define ATHUB_PCIE_ATS_CNTL_VF_5__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_5__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_6
#define ATHUB_PCIE_ATS_CNTL_VF_6__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_6__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_7
#define ATHUB_PCIE_ATS_CNTL_VF_7__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_7__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_8
#define ATHUB_PCIE_ATS_CNTL_VF_8__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_8__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_9
#define ATHUB_PCIE_ATS_CNTL_VF_9__ATC_ENABLE__SHIFT                                                           0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_9__ATC_ENABLE_MASK                                                             0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_10
#define ATHUB_PCIE_ATS_CNTL_VF_10__ATC_ENABLE__SHIFT                                                          0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_10__ATC_ENABLE_MASK                                                            0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_11
#define ATHUB_PCIE_ATS_CNTL_VF_11__ATC_ENABLE__SHIFT                                                          0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_11__ATC_ENABLE_MASK                                                            0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_12
#define ATHUB_PCIE_ATS_CNTL_VF_12__ATC_ENABLE__SHIFT                                                          0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_12__ATC_ENABLE_MASK                                                            0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_13
#define ATHUB_PCIE_ATS_CNTL_VF_13__ATC_ENABLE__SHIFT                                                          0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_13__ATC_ENABLE_MASK                                                            0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_14
#define ATHUB_PCIE_ATS_CNTL_VF_14__ATC_ENABLE__SHIFT                                                          0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_14__ATC_ENABLE_MASK                                                            0x80000000L
//ATHUB_PCIE_ATS_CNTL_VF_15
#define ATHUB_PCIE_ATS_CNTL_VF_15__ATC_ENABLE__SHIFT                                                          0x1f
#define ATHUB_PCIE_ATS_CNTL_VF_15__ATC_ENABLE_MASK                                                            0x80000000L
//ATHUB_SHARED_VIRT_RESET_REQ
#define ATHUB_SHARED_VIRT_RESET_REQ__VF__SHIFT                                                                0x0
#define ATHUB_SHARED_VIRT_RESET_REQ__PF__SHIFT                                                                0x1f
#define ATHUB_SHARED_VIRT_RESET_REQ__VF_MASK                                                                  0x0000FFFFL
#define ATHUB_SHARED_VIRT_RESET_REQ__PF_MASK                                                                  0x80000000L
//ATHUB_SHARED_ACTIVE_FCN_ID
#define ATHUB_SHARED_ACTIVE_FCN_ID__VFID__SHIFT                                                               0x0
#define ATHUB_SHARED_ACTIVE_FCN_ID__VF__SHIFT                                                                 0x1f
#define ATHUB_SHARED_ACTIVE_FCN_ID__VFID_MASK                                                                 0x0000000FL
#define ATHUB_SHARED_ACTIVE_FCN_ID__VF_MASK                                                                   0x80000000L
//ATC_ATS_SDPPORT_CNTL
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_SELF_ACTIVATE__SHIFT                                                    0x0
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_CFG_MODE__SHIFT                                                         0x1
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_HALT_THRESHOLD__SHIFT                                                   0x3
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_REISSUE_CREDIT__SHIFT                                                   0x7
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_ENABLE_DISRUPT_FULLDIS__SHIFT                                           0x8
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_SELF_ACTIVATE__SHIFT                                                0x9
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_QUICK_COMACK__SHIFT                                                 0xa
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_HALT_THRESHOLD__SHIFT                                               0xb
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_PASSIVE_MODE__SHIFT                                                 0xf
#define ATC_ATS_SDPPORT_CNTL__UTCL2_RDY_MODE__SHIFT                                                           0x10
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_REISSUE_CREDIT__SHIFT                                               0x11
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_ENABLE_DISRUPT_FULLDIS__SHIFT                                       0x12
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_INVALREQ_RDRSPSTATUS_CNTL__SHIFT                                    0x13
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_RDRSPCKEN__SHIFT                                              0x16
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_RDRSPCKENRCV__SHIFT                                           0x17
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_RDRSPDATACKEN__SHIFT                                          0x18
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_RDRSPDATACKENRCV__SHIFT                                       0x19
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_WRRSPCKEN__SHIFT                                              0x1a
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_WRRSPCKENRCV__SHIFT                                           0x1b
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_REQCKEN__SHIFT                                                0x1c
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_REQCKENRCV__SHIFT                                             0x1d
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_ORIGDATACKEN__SHIFT                                           0x1e
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_ORIGDATACKENRCV__SHIFT                                        0x1f
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_SELF_ACTIVATE_MASK                                                      0x00000001L
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_CFG_MODE_MASK                                                           0x00000006L
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_HALT_THRESHOLD_MASK                                                     0x00000078L
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_REISSUE_CREDIT_MASK                                                     0x00000080L
#define ATC_ATS_SDPPORT_CNTL__ATS_INV_ENABLE_DISRUPT_FULLDIS_MASK                                             0x00000100L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_SELF_ACTIVATE_MASK                                                  0x00000200L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_QUICK_COMACK_MASK                                                   0x00000400L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_HALT_THRESHOLD_MASK                                                 0x00007800L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_PASSIVE_MODE_MASK                                                   0x00008000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_RDY_MODE_MASK                                                             0x00010000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_REISSUE_CREDIT_MASK                                                 0x00020000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_ENABLE_DISRUPT_FULLDIS_MASK                                         0x00040000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_TRANS_INVALREQ_RDRSPSTATUS_CNTL_MASK                                      0x00380000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_RDRSPCKEN_MASK                                                0x00400000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_RDRSPCKENRCV_MASK                                             0x00800000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_RDRSPDATACKEN_MASK                                            0x01000000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_RDRSPDATACKENRCV_MASK                                         0x02000000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_WRRSPCKEN_MASK                                                0x04000000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_WRRSPCKENRCV_MASK                                             0x08000000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_REQCKEN_MASK                                                  0x10000000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_REQCKENRCV_MASK                                               0x20000000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_ORIGDATACKEN_MASK                                             0x40000000L
#define ATC_ATS_SDPPORT_CNTL__UTCL2_GFX_SDPVDCI_ORIGDATACKENRCV_MASK                                          0x80000000L
//ATC_VMID_PASID_MAPPING_UPDATE_STATUS
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID0_REMAPPING_FINISHED__SHIFT                                 0x0
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID1_REMAPPING_FINISHED__SHIFT                                 0x1
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID2_REMAPPING_FINISHED__SHIFT                                 0x2
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID3_REMAPPING_FINISHED__SHIFT                                 0x3
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID4_REMAPPING_FINISHED__SHIFT                                 0x4
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID5_REMAPPING_FINISHED__SHIFT                                 0x5
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID6_REMAPPING_FINISHED__SHIFT                                 0x6
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID7_REMAPPING_FINISHED__SHIFT                                 0x7
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID8_REMAPPING_FINISHED__SHIFT                                 0x8
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID9_REMAPPING_FINISHED__SHIFT                                 0x9
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID10_REMAPPING_FINISHED__SHIFT                                0xa
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID11_REMAPPING_FINISHED__SHIFT                                0xb
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID12_REMAPPING_FINISHED__SHIFT                                0xc
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID13_REMAPPING_FINISHED__SHIFT                                0xd
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID14_REMAPPING_FINISHED__SHIFT                                0xe
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID15_REMAPPING_FINISHED__SHIFT                                0xf
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID0_REMAPPING_FINISHED_MASK                                   0x00000001L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID1_REMAPPING_FINISHED_MASK                                   0x00000002L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID2_REMAPPING_FINISHED_MASK                                   0x00000004L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID3_REMAPPING_FINISHED_MASK                                   0x00000008L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID4_REMAPPING_FINISHED_MASK                                   0x00000010L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID5_REMAPPING_FINISHED_MASK                                   0x00000020L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID6_REMAPPING_FINISHED_MASK                                   0x00000040L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID7_REMAPPING_FINISHED_MASK                                   0x00000080L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID8_REMAPPING_FINISHED_MASK                                   0x00000100L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID9_REMAPPING_FINISHED_MASK                                   0x00000200L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID10_REMAPPING_FINISHED_MASK                                  0x00000400L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID11_REMAPPING_FINISHED_MASK                                  0x00000800L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID12_REMAPPING_FINISHED_MASK                                  0x00001000L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID13_REMAPPING_FINISHED_MASK                                  0x00002000L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID14_REMAPPING_FINISHED_MASK                                  0x00004000L
#define ATC_VMID_PASID_MAPPING_UPDATE_STATUS__VMID15_REMAPPING_FINISHED_MASK                                  0x00008000L
//ATC_VMID0_PASID_MAPPING
#define ATC_VMID0_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID0_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID0_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID0_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID0_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID0_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID1_PASID_MAPPING
#define ATC_VMID1_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID1_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID1_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID1_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID1_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID1_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID2_PASID_MAPPING
#define ATC_VMID2_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID2_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID2_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID2_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID2_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID2_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID3_PASID_MAPPING
#define ATC_VMID3_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID3_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID3_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID3_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID3_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID3_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID4_PASID_MAPPING
#define ATC_VMID4_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID4_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID4_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID4_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID4_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID4_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID5_PASID_MAPPING
#define ATC_VMID5_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID5_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID5_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID5_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID5_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID5_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID6_PASID_MAPPING
#define ATC_VMID6_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID6_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID6_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID6_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID6_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID6_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID7_PASID_MAPPING
#define ATC_VMID7_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID7_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID7_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID7_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID7_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID7_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID8_PASID_MAPPING
#define ATC_VMID8_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID8_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID8_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID8_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID8_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID8_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID9_PASID_MAPPING
#define ATC_VMID9_PASID_MAPPING__PASID__SHIFT                                                                 0x0
#define ATC_VMID9_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                       0x1e
#define ATC_VMID9_PASID_MAPPING__VALID__SHIFT                                                                 0x1f
#define ATC_VMID9_PASID_MAPPING__PASID_MASK                                                                   0x0000FFFFL
#define ATC_VMID9_PASID_MAPPING__NO_INVALIDATION_MASK                                                         0x40000000L
#define ATC_VMID9_PASID_MAPPING__VALID_MASK                                                                   0x80000000L
//ATC_VMID10_PASID_MAPPING
#define ATC_VMID10_PASID_MAPPING__PASID__SHIFT                                                                0x0
#define ATC_VMID10_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                      0x1e
#define ATC_VMID10_PASID_MAPPING__VALID__SHIFT                                                                0x1f
#define ATC_VMID10_PASID_MAPPING__PASID_MASK                                                                  0x0000FFFFL
#define ATC_VMID10_PASID_MAPPING__NO_INVALIDATION_MASK                                                        0x40000000L
#define ATC_VMID10_PASID_MAPPING__VALID_MASK                                                                  0x80000000L
//ATC_VMID11_PASID_MAPPING
#define ATC_VMID11_PASID_MAPPING__PASID__SHIFT                                                                0x0
#define ATC_VMID11_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                      0x1e
#define ATC_VMID11_PASID_MAPPING__VALID__SHIFT                                                                0x1f
#define ATC_VMID11_PASID_MAPPING__PASID_MASK                                                                  0x0000FFFFL
#define ATC_VMID11_PASID_MAPPING__NO_INVALIDATION_MASK                                                        0x40000000L
#define ATC_VMID11_PASID_MAPPING__VALID_MASK                                                                  0x80000000L
//ATC_VMID12_PASID_MAPPING
#define ATC_VMID12_PASID_MAPPING__PASID__SHIFT                                                                0x0
#define ATC_VMID12_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                      0x1e
#define ATC_VMID12_PASID_MAPPING__VALID__SHIFT                                                                0x1f
#define ATC_VMID12_PASID_MAPPING__PASID_MASK                                                                  0x0000FFFFL
#define ATC_VMID12_PASID_MAPPING__NO_INVALIDATION_MASK                                                        0x40000000L
#define ATC_VMID12_PASID_MAPPING__VALID_MASK                                                                  0x80000000L
//ATC_VMID13_PASID_MAPPING
#define ATC_VMID13_PASID_MAPPING__PASID__SHIFT                                                                0x0
#define ATC_VMID13_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                      0x1e
#define ATC_VMID13_PASID_MAPPING__VALID__SHIFT                                                                0x1f
#define ATC_VMID13_PASID_MAPPING__PASID_MASK                                                                  0x0000FFFFL
#define ATC_VMID13_PASID_MAPPING__NO_INVALIDATION_MASK                                                        0x40000000L
#define ATC_VMID13_PASID_MAPPING__VALID_MASK                                                                  0x80000000L
//ATC_VMID14_PASID_MAPPING
#define ATC_VMID14_PASID_MAPPING__PASID__SHIFT                                                                0x0
#define ATC_VMID14_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                      0x1e
#define ATC_VMID14_PASID_MAPPING__VALID__SHIFT                                                                0x1f
#define ATC_VMID14_PASID_MAPPING__PASID_MASK                                                                  0x0000FFFFL
#define ATC_VMID14_PASID_MAPPING__NO_INVALIDATION_MASK                                                        0x40000000L
#define ATC_VMID14_PASID_MAPPING__VALID_MASK                                                                  0x80000000L
//ATC_VMID15_PASID_MAPPING
#define ATC_VMID15_PASID_MAPPING__PASID__SHIFT                                                                0x0
#define ATC_VMID15_PASID_MAPPING__NO_INVALIDATION__SHIFT                                                      0x1e
#define ATC_VMID15_PASID_MAPPING__VALID__SHIFT                                                                0x1f
#define ATC_VMID15_PASID_MAPPING__PASID_MASK                                                                  0x0000FFFFL
#define ATC_VMID15_PASID_MAPPING__NO_INVALIDATION_MASK                                                        0x40000000L
#define ATC_VMID15_PASID_MAPPING__VALID_MASK                                                                  0x80000000L
//ATC_TRANS_FAULT_RSPCNTRL
#define ATC_TRANS_FAULT_RSPCNTRL__VMID0__SHIFT                                                                0x0
#define ATC_TRANS_FAULT_RSPCNTRL__VMID1__SHIFT                                                                0x1
#define ATC_TRANS_FAULT_RSPCNTRL__VMID2__SHIFT                                                                0x2
#define ATC_TRANS_FAULT_RSPCNTRL__VMID3__SHIFT                                                                0x3
#define ATC_TRANS_FAULT_RSPCNTRL__VMID4__SHIFT                                                                0x4
#define ATC_TRANS_FAULT_RSPCNTRL__VMID5__SHIFT                                                                0x5
#define ATC_TRANS_FAULT_RSPCNTRL__VMID6__SHIFT                                                                0x6
#define ATC_TRANS_FAULT_RSPCNTRL__VMID7__SHIFT                                                                0x7
#define ATC_TRANS_FAULT_RSPCNTRL__VMID8__SHIFT                                                                0x8
#define ATC_TRANS_FAULT_RSPCNTRL__VMID9__SHIFT                                                                0x9
#define ATC_TRANS_FAULT_RSPCNTRL__VMID10__SHIFT                                                               0xa
#define ATC_TRANS_FAULT_RSPCNTRL__VMID11__SHIFT                                                               0xb
#define ATC_TRANS_FAULT_RSPCNTRL__VMID12__SHIFT                                                               0xc
#define ATC_TRANS_FAULT_RSPCNTRL__VMID13__SHIFT                                                               0xd
#define ATC_TRANS_FAULT_RSPCNTRL__VMID14__SHIFT                                                               0xe
#define ATC_TRANS_FAULT_RSPCNTRL__VMID15__SHIFT                                                               0xf
#define ATC_TRANS_FAULT_RSPCNTRL__VMID0_MASK                                                                  0x00000001L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID1_MASK                                                                  0x00000002L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID2_MASK                                                                  0x00000004L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID3_MASK                                                                  0x00000008L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID4_MASK                                                                  0x00000010L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID5_MASK                                                                  0x00000020L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID6_MASK                                                                  0x00000040L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID7_MASK                                                                  0x00000080L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID8_MASK                                                                  0x00000100L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID9_MASK                                                                  0x00000200L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID10_MASK                                                                 0x00000400L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID11_MASK                                                                 0x00000800L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID12_MASK                                                                 0x00001000L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID13_MASK                                                                 0x00002000L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID14_MASK                                                                 0x00004000L
#define ATC_TRANS_FAULT_RSPCNTRL__VMID15_MASK                                                                 0x00008000L
//ATC_ATS_VMID_STATUS
#define ATC_ATS_VMID_STATUS__VMID0_OUTSTANDING__SHIFT                                                         0x0
#define ATC_ATS_VMID_STATUS__VMID1_OUTSTANDING__SHIFT                                                         0x1
#define ATC_ATS_VMID_STATUS__VMID2_OUTSTANDING__SHIFT                                                         0x2
#define ATC_ATS_VMID_STATUS__VMID3_OUTSTANDING__SHIFT                                                         0x3
#define ATC_ATS_VMID_STATUS__VMID4_OUTSTANDING__SHIFT                                                         0x4
#define ATC_ATS_VMID_STATUS__VMID5_OUTSTANDING__SHIFT                                                         0x5
#define ATC_ATS_VMID_STATUS__VMID6_OUTSTANDING__SHIFT                                                         0x6
#define ATC_ATS_VMID_STATUS__VMID7_OUTSTANDING__SHIFT                                                         0x7
#define ATC_ATS_VMID_STATUS__VMID8_OUTSTANDING__SHIFT                                                         0x8
#define ATC_ATS_VMID_STATUS__VMID9_OUTSTANDING__SHIFT                                                         0x9
#define ATC_ATS_VMID_STATUS__VMID10_OUTSTANDING__SHIFT                                                        0xa
#define ATC_ATS_VMID_STATUS__VMID11_OUTSTANDING__SHIFT                                                        0xb
#define ATC_ATS_VMID_STATUS__VMID12_OUTSTANDING__SHIFT                                                        0xc
#define ATC_ATS_VMID_STATUS__VMID13_OUTSTANDING__SHIFT                                                        0xd
#define ATC_ATS_VMID_STATUS__VMID14_OUTSTANDING__SHIFT                                                        0xe
#define ATC_ATS_VMID_STATUS__VMID15_OUTSTANDING__SHIFT                                                        0xf
#define ATC_ATS_VMID_STATUS__VMID0_OUTSTANDING_MASK                                                           0x00000001L
#define ATC_ATS_VMID_STATUS__VMID1_OUTSTANDING_MASK                                                           0x00000002L
#define ATC_ATS_VMID_STATUS__VMID2_OUTSTANDING_MASK                                                           0x00000004L
#define ATC_ATS_VMID_STATUS__VMID3_OUTSTANDING_MASK                                                           0x00000008L
#define ATC_ATS_VMID_STATUS__VMID4_OUTSTANDING_MASK                                                           0x00000010L
#define ATC_ATS_VMID_STATUS__VMID5_OUTSTANDING_MASK                                                           0x00000020L
#define ATC_ATS_VMID_STATUS__VMID6_OUTSTANDING_MASK                                                           0x00000040L
#define ATC_ATS_VMID_STATUS__VMID7_OUTSTANDING_MASK                                                           0x00000080L
#define ATC_ATS_VMID_STATUS__VMID8_OUTSTANDING_MASK                                                           0x00000100L
#define ATC_ATS_VMID_STATUS__VMID9_OUTSTANDING_MASK                                                           0x00000200L
#define ATC_ATS_VMID_STATUS__VMID10_OUTSTANDING_MASK                                                          0x00000400L
#define ATC_ATS_VMID_STATUS__VMID11_OUTSTANDING_MASK                                                          0x00000800L
#define ATC_ATS_VMID_STATUS__VMID12_OUTSTANDING_MASK                                                          0x00001000L
#define ATC_ATS_VMID_STATUS__VMID13_OUTSTANDING_MASK                                                          0x00002000L
#define ATC_ATS_VMID_STATUS__VMID14_OUTSTANDING_MASK                                                          0x00004000L
#define ATC_ATS_VMID_STATUS__VMID15_OUTSTANDING_MASK                                                          0x00008000L
//ATHUB_MISC_CNTL
#define ATHUB_MISC_CNTL__CG_OFFDLY__SHIFT                                                                     0x6
#define ATHUB_MISC_CNTL__CG_ENABLE__SHIFT                                                                     0x12
#define ATHUB_MISC_CNTL__CG_MEM_LS_ENABLE__SHIFT                                                              0x13
#define ATHUB_MISC_CNTL__PG_ENABLE__SHIFT                                                                     0x14
#define ATHUB_MISC_CNTL__PG_OFFDLY__SHIFT                                                                     0x15
#define ATHUB_MISC_CNTL__CG_STATUS__SHIFT                                                                     0x1b
#define ATHUB_MISC_CNTL__PG_STATUS__SHIFT                                                                     0x1c
#define ATHUB_MISC_CNTL__SRAM_FGCG_ENABLE__SHIFT                                                              0x1d
#define ATHUB_MISC_CNTL__CG_OFFDLY_MASK                                                                       0x00000FC0L
#define ATHUB_MISC_CNTL__CG_ENABLE_MASK                                                                       0x00040000L
#define ATHUB_MISC_CNTL__CG_MEM_LS_ENABLE_MASK                                                                0x00080000L
#define ATHUB_MISC_CNTL__PG_ENABLE_MASK                                                                       0x00100000L
#define ATHUB_MISC_CNTL__PG_OFFDLY_MASK                                                                       0x07E00000L
#define ATHUB_MISC_CNTL__CG_STATUS_MASK                                                                       0x08000000L
#define ATHUB_MISC_CNTL__PG_STATUS_MASK                                                                       0x10000000L
#define ATHUB_MISC_CNTL__SRAM_FGCG_ENABLE_MASK                                                                0x20000000L
//ATHUB_MEM_POWER_LS
#define ATHUB_MEM_POWER_LS__LS_SETUP__SHIFT                                                                   0x0
#define ATHUB_MEM_POWER_LS__LS_HOLD__SHIFT                                                                    0x6
#define ATHUB_MEM_POWER_LS__LS_DELAY_ENABLE__SHIFT                                                            0x13
#define ATHUB_MEM_POWER_LS__LS_DELAY_TIME__SHIFT                                                              0x14
#define ATHUB_MEM_POWER_LS__LS_SETUP_MASK                                                                     0x0000003FL
#define ATHUB_MEM_POWER_LS__LS_HOLD_MASK                                                                      0x0007FFC0L
#define ATHUB_MEM_POWER_LS__LS_DELAY_ENABLE_MASK                                                              0x00080000L
#define ATHUB_MEM_POWER_LS__LS_DELAY_TIME_MASK                                                                0x03F00000L
//ATHUB_IH_CREDIT
#define ATHUB_IH_CREDIT__CREDIT_VALUE__SHIFT                                                                  0x0
#define ATHUB_IH_CREDIT__IH_CLIENT_ID__SHIFT                                                                  0x10
#define ATHUB_IH_CREDIT__CREDIT_VALUE_MASK                                                                    0x00000003L
#define ATHUB_IH_CREDIT__IH_CLIENT_ID_MASK                                                                    0x00FF0000L


// addressBlock: aid_athub_xpbdec
//XPB_RTR_SRC_APRTR0
#define XPB_RTR_SRC_APRTR0__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR0__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_RTR_SRC_APRTR1
#define XPB_RTR_SRC_APRTR1__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR1__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_RTR_SRC_APRTR2
#define XPB_RTR_SRC_APRTR2__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR2__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_RTR_SRC_APRTR3
#define XPB_RTR_SRC_APRTR3__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR3__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_RTR_SRC_APRTR4
#define XPB_RTR_SRC_APRTR4__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR4__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_RTR_SRC_APRTR5
#define XPB_RTR_SRC_APRTR5__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR5__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_RTR_SRC_APRTR6
#define XPB_RTR_SRC_APRTR6__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR6__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_RTR_SRC_APRTR7
#define XPB_RTR_SRC_APRTR7__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR7__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_RTR_SRC_APRTR8
#define XPB_RTR_SRC_APRTR8__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR8__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_RTR_SRC_APRTR9
#define XPB_RTR_SRC_APRTR9__BASE_ADDR__SHIFT                                                                  0x0
#define XPB_RTR_SRC_APRTR9__BASE_ADDR_MASK                                                                    0x7FFFFFFFL
//XPB_XDMA_RTR_SRC_APRTR0
#define XPB_XDMA_RTR_SRC_APRTR0__BASE_ADDR__SHIFT                                                             0x0
#define XPB_XDMA_RTR_SRC_APRTR0__BASE_ADDR_MASK                                                               0x7FFFFFFFL
//XPB_XDMA_RTR_SRC_APRTR1
#define XPB_XDMA_RTR_SRC_APRTR1__BASE_ADDR__SHIFT                                                             0x0
#define XPB_XDMA_RTR_SRC_APRTR1__BASE_ADDR_MASK                                                               0x7FFFFFFFL
//XPB_XDMA_RTR_SRC_APRTR2
#define XPB_XDMA_RTR_SRC_APRTR2__BASE_ADDR__SHIFT                                                             0x0
#define XPB_XDMA_RTR_SRC_APRTR2__BASE_ADDR_MASK                                                               0x7FFFFFFFL
//XPB_XDMA_RTR_SRC_APRTR3
#define XPB_XDMA_RTR_SRC_APRTR3__BASE_ADDR__SHIFT                                                             0x0
#define XPB_XDMA_RTR_SRC_APRTR3__BASE_ADDR_MASK                                                               0x7FFFFFFFL
//XPB_RTR_DEST_MAP0
#define XPB_RTR_DEST_MAP0__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP0__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP0__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP0__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP0__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP0__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP0__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP0__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP0__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP0__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP0__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP0__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_RTR_DEST_MAP1
#define XPB_RTR_DEST_MAP1__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP1__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP1__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP1__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP1__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP1__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP1__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP1__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP1__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP1__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP1__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP1__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_RTR_DEST_MAP2
#define XPB_RTR_DEST_MAP2__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP2__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP2__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP2__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP2__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP2__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP2__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP2__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP2__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP2__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP2__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP2__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_RTR_DEST_MAP3
#define XPB_RTR_DEST_MAP3__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP3__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP3__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP3__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP3__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP3__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP3__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP3__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP3__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP3__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP3__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP3__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_RTR_DEST_MAP4
#define XPB_RTR_DEST_MAP4__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP4__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP4__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP4__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP4__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP4__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP4__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP4__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP4__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP4__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP4__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP4__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_RTR_DEST_MAP5
#define XPB_RTR_DEST_MAP5__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP5__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP5__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP5__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP5__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP5__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP5__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP5__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP5__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP5__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP5__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP5__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_RTR_DEST_MAP6
#define XPB_RTR_DEST_MAP6__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP6__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP6__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP6__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP6__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP6__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP6__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP6__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP6__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP6__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP6__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP6__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_RTR_DEST_MAP7
#define XPB_RTR_DEST_MAP7__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP7__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP7__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP7__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP7__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP7__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP7__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP7__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP7__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP7__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP7__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP7__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_RTR_DEST_MAP8
#define XPB_RTR_DEST_MAP8__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP8__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP8__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP8__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP8__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP8__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP8__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP8__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP8__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP8__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP8__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP8__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_RTR_DEST_MAP9
#define XPB_RTR_DEST_MAP9__NMR__SHIFT                                                                         0x0
#define XPB_RTR_DEST_MAP9__DEST_OFFSET__SHIFT                                                                 0x1
#define XPB_RTR_DEST_MAP9__DEST_SEL__SHIFT                                                                    0x14
#define XPB_RTR_DEST_MAP9__DEST_SEL_RPB__SHIFT                                                                0x18
#define XPB_RTR_DEST_MAP9__SIDE_OK__SHIFT                                                                     0x19
#define XPB_RTR_DEST_MAP9__APRTR_SIZE__SHIFT                                                                  0x1a
#define XPB_RTR_DEST_MAP9__NMR_MASK                                                                           0x00000001L
#define XPB_RTR_DEST_MAP9__DEST_OFFSET_MASK                                                                   0x000FFFFEL
#define XPB_RTR_DEST_MAP9__DEST_SEL_MASK                                                                      0x00F00000L
#define XPB_RTR_DEST_MAP9__DEST_SEL_RPB_MASK                                                                  0x01000000L
#define XPB_RTR_DEST_MAP9__SIDE_OK_MASK                                                                       0x02000000L
#define XPB_RTR_DEST_MAP9__APRTR_SIZE_MASK                                                                    0x7C000000L
//XPB_XDMA_RTR_DEST_MAP0
#define XPB_XDMA_RTR_DEST_MAP0__NMR__SHIFT                                                                    0x0
#define XPB_XDMA_RTR_DEST_MAP0__DEST_OFFSET__SHIFT                                                            0x1
#define XPB_XDMA_RTR_DEST_MAP0__DEST_SEL__SHIFT                                                               0x14
#define XPB_XDMA_RTR_DEST_MAP0__DEST_SEL_RPB__SHIFT                                                           0x18
#define XPB_XDMA_RTR_DEST_MAP0__SIDE_OK__SHIFT                                                                0x19
#define XPB_XDMA_RTR_DEST_MAP0__APRTR_SIZE__SHIFT                                                             0x1a
#define XPB_XDMA_RTR_DEST_MAP0__NMR_MASK                                                                      0x00000001L
#define XPB_XDMA_RTR_DEST_MAP0__DEST_OFFSET_MASK                                                              0x000FFFFEL
#define XPB_XDMA_RTR_DEST_MAP0__DEST_SEL_MASK                                                                 0x00F00000L
#define XPB_XDMA_RTR_DEST_MAP0__DEST_SEL_RPB_MASK                                                             0x01000000L
#define XPB_XDMA_RTR_DEST_MAP0__SIDE_OK_MASK                                                                  0x02000000L
#define XPB_XDMA_RTR_DEST_MAP0__APRTR_SIZE_MASK                                                               0x7C000000L
//XPB_XDMA_RTR_DEST_MAP1
#define XPB_XDMA_RTR_DEST_MAP1__NMR__SHIFT                                                                    0x0
#define XPB_XDMA_RTR_DEST_MAP1__DEST_OFFSET__SHIFT                                                            0x1
#define XPB_XDMA_RTR_DEST_MAP1__DEST_SEL__SHIFT                                                               0x14
#define XPB_XDMA_RTR_DEST_MAP1__DEST_SEL_RPB__SHIFT                                                           0x18
#define XPB_XDMA_RTR_DEST_MAP1__SIDE_OK__SHIFT                                                                0x19
#define XPB_XDMA_RTR_DEST_MAP1__APRTR_SIZE__SHIFT                                                             0x1a
#define XPB_XDMA_RTR_DEST_MAP1__NMR_MASK                                                                      0x00000001L
#define XPB_XDMA_RTR_DEST_MAP1__DEST_OFFSET_MASK                                                              0x000FFFFEL
#define XPB_XDMA_RTR_DEST_MAP1__DEST_SEL_MASK                                                                 0x00F00000L
#define XPB_XDMA_RTR_DEST_MAP1__DEST_SEL_RPB_MASK                                                             0x01000000L
#define XPB_XDMA_RTR_DEST_MAP1__SIDE_OK_MASK                                                                  0x02000000L
#define XPB_XDMA_RTR_DEST_MAP1__APRTR_SIZE_MASK                                                               0x7C000000L
//XPB_XDMA_RTR_DEST_MAP2
#define XPB_XDMA_RTR_DEST_MAP2__NMR__SHIFT                                                                    0x0
#define XPB_XDMA_RTR_DEST_MAP2__DEST_OFFSET__SHIFT                                                            0x1
#define XPB_XDMA_RTR_DEST_MAP2__DEST_SEL__SHIFT                                                               0x14
#define XPB_XDMA_RTR_DEST_MAP2__DEST_SEL_RPB__SHIFT                                                           0x18
#define XPB_XDMA_RTR_DEST_MAP2__SIDE_OK__SHIFT                                                                0x19
#define XPB_XDMA_RTR_DEST_MAP2__APRTR_SIZE__SHIFT                                                             0x1a
#define XPB_XDMA_RTR_DEST_MAP2__NMR_MASK                                                                      0x00000001L
#define XPB_XDMA_RTR_DEST_MAP2__DEST_OFFSET_MASK                                                              0x000FFFFEL
#define XPB_XDMA_RTR_DEST_MAP2__DEST_SEL_MASK                                                                 0x00F00000L
#define XPB_XDMA_RTR_DEST_MAP2__DEST_SEL_RPB_MASK                                                             0x01000000L
#define XPB_XDMA_RTR_DEST_MAP2__SIDE_OK_MASK                                                                  0x02000000L
#define XPB_XDMA_RTR_DEST_MAP2__APRTR_SIZE_MASK                                                               0x7C000000L
//XPB_XDMA_RTR_DEST_MAP3
#define XPB_XDMA_RTR_DEST_MAP3__NMR__SHIFT                                                                    0x0
#define XPB_XDMA_RTR_DEST_MAP3__DEST_OFFSET__SHIFT                                                            0x1
#define XPB_XDMA_RTR_DEST_MAP3__DEST_SEL__SHIFT                                                               0x14
#define XPB_XDMA_RTR_DEST_MAP3__DEST_SEL_RPB__SHIFT                                                           0x18
#define XPB_XDMA_RTR_DEST_MAP3__SIDE_OK__SHIFT                                                                0x19
#define XPB_XDMA_RTR_DEST_MAP3__APRTR_SIZE__SHIFT                                                             0x1a
#define XPB_XDMA_RTR_DEST_MAP3__NMR_MASK                                                                      0x00000001L
#define XPB_XDMA_RTR_DEST_MAP3__DEST_OFFSET_MASK                                                              0x000FFFFEL
#define XPB_XDMA_RTR_DEST_MAP3__DEST_SEL_MASK                                                                 0x00F00000L
#define XPB_XDMA_RTR_DEST_MAP3__DEST_SEL_RPB_MASK                                                             0x01000000L
#define XPB_XDMA_RTR_DEST_MAP3__SIDE_OK_MASK                                                                  0x02000000L
#define XPB_XDMA_RTR_DEST_MAP3__APRTR_SIZE_MASK                                                               0x7C000000L
//XPB_CLG_CFG0
#define XPB_CLG_CFG0__WCB_NUM__SHIFT                                                                          0x0
#define XPB_CLG_CFG0__LB_TYPE__SHIFT                                                                          0x4
#define XPB_CLG_CFG0__P2P_BAR__SHIFT                                                                          0x7
#define XPB_CLG_CFG0__HOST_FLUSH__SHIFT                                                                       0xa
#define XPB_CLG_CFG0__SIDE_FLUSH__SHIFT                                                                       0xe
#define XPB_CLG_CFG0__WCB_NUM_MASK                                                                            0x0000000FL
#define XPB_CLG_CFG0__LB_TYPE_MASK                                                                            0x00000070L
#define XPB_CLG_CFG0__P2P_BAR_MASK                                                                            0x00000380L
#define XPB_CLG_CFG0__HOST_FLUSH_MASK                                                                         0x00003C00L
#define XPB_CLG_CFG0__SIDE_FLUSH_MASK                                                                         0x0003C000L
//XPB_CLG_CFG1
#define XPB_CLG_CFG1__WCB_NUM__SHIFT                                                                          0x0
#define XPB_CLG_CFG1__LB_TYPE__SHIFT                                                                          0x4
#define XPB_CLG_CFG1__P2P_BAR__SHIFT                                                                          0x7
#define XPB_CLG_CFG1__HOST_FLUSH__SHIFT                                                                       0xa
#define XPB_CLG_CFG1__SIDE_FLUSH__SHIFT                                                                       0xe
#define XPB_CLG_CFG1__WCB_NUM_MASK                                                                            0x0000000FL
#define XPB_CLG_CFG1__LB_TYPE_MASK                                                                            0x00000070L
#define XPB_CLG_CFG1__P2P_BAR_MASK                                                                            0x00000380L
#define XPB_CLG_CFG1__HOST_FLUSH_MASK                                                                         0x00003C00L
#define XPB_CLG_CFG1__SIDE_FLUSH_MASK                                                                         0x0003C000L
//XPB_CLG_CFG2
#define XPB_CLG_CFG2__WCB_NUM__SHIFT                                                                          0x0
#define XPB_CLG_CFG2__LB_TYPE__SHIFT                                                                          0x4
#define XPB_CLG_CFG2__P2P_BAR__SHIFT                                                                          0x7
#define XPB_CLG_CFG2__HOST_FLUSH__SHIFT                                                                       0xa
#define XPB_CLG_CFG2__SIDE_FLUSH__SHIFT                                                                       0xe
#define XPB_CLG_CFG2__WCB_NUM_MASK                                                                            0x0000000FL
#define XPB_CLG_CFG2__LB_TYPE_MASK                                                                            0x00000070L
#define XPB_CLG_CFG2__P2P_BAR_MASK                                                                            0x00000380L
#define XPB_CLG_CFG2__HOST_FLUSH_MASK                                                                         0x00003C00L
#define XPB_CLG_CFG2__SIDE_FLUSH_MASK                                                                         0x0003C000L
//XPB_CLG_CFG3
#define XPB_CLG_CFG3__WCB_NUM__SHIFT                                                                          0x0
#define XPB_CLG_CFG3__LB_TYPE__SHIFT                                                                          0x4
#define XPB_CLG_CFG3__P2P_BAR__SHIFT                                                                          0x7
#define XPB_CLG_CFG3__HOST_FLUSH__SHIFT                                                                       0xa
#define XPB_CLG_CFG3__SIDE_FLUSH__SHIFT                                                                       0xe
#define XPB_CLG_CFG3__WCB_NUM_MASK                                                                            0x0000000FL
#define XPB_CLG_CFG3__LB_TYPE_MASK                                                                            0x00000070L
#define XPB_CLG_CFG3__P2P_BAR_MASK                                                                            0x00000380L
#define XPB_CLG_CFG3__HOST_FLUSH_MASK                                                                         0x00003C00L
#define XPB_CLG_CFG3__SIDE_FLUSH_MASK                                                                         0x0003C000L
//XPB_CLG_CFG4
#define XPB_CLG_CFG4__WCB_NUM__SHIFT                                                                          0x0
#define XPB_CLG_CFG4__LB_TYPE__SHIFT                                                                          0x4
#define XPB_CLG_CFG4__P2P_BAR__SHIFT                                                                          0x7
#define XPB_CLG_CFG4__HOST_FLUSH__SHIFT                                                                       0xa
#define XPB_CLG_CFG4__SIDE_FLUSH__SHIFT                                                                       0xe
#define XPB_CLG_CFG4__WCB_NUM_MASK                                                                            0x0000000FL
#define XPB_CLG_CFG4__LB_TYPE_MASK                                                                            0x00000070L
#define XPB_CLG_CFG4__P2P_BAR_MASK                                                                            0x00000380L
#define XPB_CLG_CFG4__HOST_FLUSH_MASK                                                                         0x00003C00L
#define XPB_CLG_CFG4__SIDE_FLUSH_MASK                                                                         0x0003C000L
//XPB_CLG_CFG5
#define XPB_CLG_CFG5__WCB_NUM__SHIFT                                                                          0x0
#define XPB_CLG_CFG5__LB_TYPE__SHIFT                                                                          0x4
#define XPB_CLG_CFG5__P2P_BAR__SHIFT                                                                          0x7
#define XPB_CLG_CFG5__HOST_FLUSH__SHIFT                                                                       0xa
#define XPB_CLG_CFG5__SIDE_FLUSH__SHIFT                                                                       0xe
#define XPB_CLG_CFG5__WCB_NUM_MASK                                                                            0x0000000FL
#define XPB_CLG_CFG5__LB_TYPE_MASK                                                                            0x00000070L
#define XPB_CLG_CFG5__P2P_BAR_MASK                                                                            0x00000380L
#define XPB_CLG_CFG5__HOST_FLUSH_MASK                                                                         0x00003C00L
#define XPB_CLG_CFG5__SIDE_FLUSH_MASK                                                                         0x0003C000L
//XPB_CLG_CFG6
#define XPB_CLG_CFG6__WCB_NUM__SHIFT                                                                          0x0
#define XPB_CLG_CFG6__LB_TYPE__SHIFT                                                                          0x4
#define XPB_CLG_CFG6__P2P_BAR__SHIFT                                                                          0x7
#define XPB_CLG_CFG6__HOST_FLUSH__SHIFT                                                                       0xa
#define XPB_CLG_CFG6__SIDE_FLUSH__SHIFT                                                                       0xe
#define XPB_CLG_CFG6__WCB_NUM_MASK                                                                            0x0000000FL
#define XPB_CLG_CFG6__LB_TYPE_MASK                                                                            0x00000070L
#define XPB_CLG_CFG6__P2P_BAR_MASK                                                                            0x00000380L
#define XPB_CLG_CFG6__HOST_FLUSH_MASK                                                                         0x00003C00L
#define XPB_CLG_CFG6__SIDE_FLUSH_MASK                                                                         0x0003C000L
//XPB_CLG_CFG7
#define XPB_CLG_CFG7__WCB_NUM__SHIFT                                                                          0x0
#define XPB_CLG_CFG7__LB_TYPE__SHIFT                                                                          0x4
#define XPB_CLG_CFG7__P2P_BAR__SHIFT                                                                          0x7
#define XPB_CLG_CFG7__HOST_FLUSH__SHIFT                                                                       0xa
#define XPB_CLG_CFG7__SIDE_FLUSH__SHIFT                                                                       0xe
#define XPB_CLG_CFG7__WCB_NUM_MASK                                                                            0x0000000FL
#define XPB_CLG_CFG7__LB_TYPE_MASK                                                                            0x00000070L
#define XPB_CLG_CFG7__P2P_BAR_MASK                                                                            0x00000380L
#define XPB_CLG_CFG7__HOST_FLUSH_MASK                                                                         0x00003C00L
#define XPB_CLG_CFG7__SIDE_FLUSH_MASK                                                                         0x0003C000L
//XPB_CLG_EXTRA0
#define XPB_CLG_EXTRA0__CMP0_HIGH__SHIFT                                                                      0x0
#define XPB_CLG_EXTRA0__CMP0_LOW__SHIFT                                                                       0x8
#define XPB_CLG_EXTRA0__VLD0__SHIFT                                                                           0xd
#define XPB_CLG_EXTRA0__CLG0_NUM__SHIFT                                                                       0xe
#define XPB_CLG_EXTRA0__CMP0_HIGH_MASK                                                                        0x000000FFL
#define XPB_CLG_EXTRA0__CMP0_LOW_MASK                                                                         0x00001F00L
#define XPB_CLG_EXTRA0__VLD0_MASK                                                                             0x00002000L
#define XPB_CLG_EXTRA0__CLG0_NUM_MASK                                                                         0x0001C000L
//XPB_CLG_EXTRA1
#define XPB_CLG_EXTRA1__CMP1_HIGH__SHIFT                                                                      0x0
#define XPB_CLG_EXTRA1__CMP1_LOW__SHIFT                                                                       0x8
#define XPB_CLG_EXTRA1__VLD1__SHIFT                                                                           0xd
#define XPB_CLG_EXTRA1__CLG1_NUM__SHIFT                                                                       0xe
#define XPB_CLG_EXTRA1__CMP1_HIGH_MASK                                                                        0x000000FFL
#define XPB_CLG_EXTRA1__CMP1_LOW_MASK                                                                         0x00001F00L
#define XPB_CLG_EXTRA1__VLD1_MASK                                                                             0x00002000L
#define XPB_CLG_EXTRA1__CLG1_NUM_MASK                                                                         0x0001C000L
//XPB_CLG_EXTRA_MSK
#define XPB_CLG_EXTRA_MSK__MSK0_HIGH__SHIFT                                                                   0x0
#define XPB_CLG_EXTRA_MSK__MSK0_LOW__SHIFT                                                                    0x8
#define XPB_CLG_EXTRA_MSK__MSK1_HIGH__SHIFT                                                                   0xd
#define XPB_CLG_EXTRA_MSK__MSK1_LOW__SHIFT                                                                    0x15
#define XPB_CLG_EXTRA_MSK__MSK0_HIGH_MASK                                                                     0x000000FFL
#define XPB_CLG_EXTRA_MSK__MSK0_LOW_MASK                                                                      0x00001F00L
#define XPB_CLG_EXTRA_MSK__MSK1_HIGH_MASK                                                                     0x001FE000L
#define XPB_CLG_EXTRA_MSK__MSK1_LOW_MASK                                                                      0x03E00000L
//XPB_LB_ADDR
#define XPB_LB_ADDR__CMP0__SHIFT                                                                              0x0
#define XPB_LB_ADDR__MASK0__SHIFT                                                                             0xa
#define XPB_LB_ADDR__CMP1__SHIFT                                                                              0x14
#define XPB_LB_ADDR__MASK1__SHIFT                                                                             0x1a
#define XPB_LB_ADDR__CMP0_MASK                                                                                0x000003FFL
#define XPB_LB_ADDR__MASK0_MASK                                                                               0x000FFC00L
#define XPB_LB_ADDR__CMP1_MASK                                                                                0x03F00000L
#define XPB_LB_ADDR__MASK1_MASK                                                                               0xFC000000L
//XPB_WCB_STS
#define XPB_WCB_STS__PBUF_VLD__SHIFT                                                                          0x0
#define XPB_WCB_STS__WCB_HST_DATA_BUF_CNT__SHIFT                                                              0x10
#define XPB_WCB_STS__WCB_SID_DATA_BUF_CNT__SHIFT                                                              0x17
#define XPB_WCB_STS__PBUF_VLD_MASK                                                                            0x0000FFFFL
#define XPB_WCB_STS__WCB_HST_DATA_BUF_CNT_MASK                                                                0x007F0000L
#define XPB_WCB_STS__WCB_SID_DATA_BUF_CNT_MASK                                                                0x3F800000L
//XPB_HST_CFG
#define XPB_HST_CFG__BAR_UP_WR_CMD__SHIFT                                                                     0x0
#define XPB_HST_CFG__BAR_UP_WR_CMD_MASK                                                                       0x00000001L
//XPB_P2P_BAR_CFG
#define XPB_P2P_BAR_CFG__ADDR_SIZE__SHIFT                                                                     0x0
#define XPB_P2P_BAR_CFG__SEND_BAR__SHIFT                                                                      0x4
#define XPB_P2P_BAR_CFG__SNOOP__SHIFT                                                                         0x6
#define XPB_P2P_BAR_CFG__SEND_DIS__SHIFT                                                                      0x7
#define XPB_P2P_BAR_CFG__COMPRESS_DIS__SHIFT                                                                  0x8
#define XPB_P2P_BAR_CFG__UPDATE_DIS__SHIFT                                                                    0x9
#define XPB_P2P_BAR_CFG__REGBAR_FROM_SYSBAR__SHIFT                                                            0xa
#define XPB_P2P_BAR_CFG__RD_EN__SHIFT                                                                         0xb
#define XPB_P2P_BAR_CFG__ATC_TRANSLATED__SHIFT                                                                0xc
#define XPB_P2P_BAR_CFG__ADDR_SIZE_MASK                                                                       0x0000000FL
#define XPB_P2P_BAR_CFG__SEND_BAR_MASK                                                                        0x00000030L
#define XPB_P2P_BAR_CFG__SNOOP_MASK                                                                           0x00000040L
#define XPB_P2P_BAR_CFG__SEND_DIS_MASK                                                                        0x00000080L
#define XPB_P2P_BAR_CFG__COMPRESS_DIS_MASK                                                                    0x00000100L
#define XPB_P2P_BAR_CFG__UPDATE_DIS_MASK                                                                      0x00000200L
#define XPB_P2P_BAR_CFG__REGBAR_FROM_SYSBAR_MASK                                                              0x00000400L
#define XPB_P2P_BAR_CFG__RD_EN_MASK                                                                           0x00000800L
#define XPB_P2P_BAR_CFG__ATC_TRANSLATED_MASK                                                                  0x00001000L
//XPB_P2P_BAR0
#define XPB_P2P_BAR0__HOST_FLUSH__SHIFT                                                                       0x0
#define XPB_P2P_BAR0__REG_SYS_BAR__SHIFT                                                                      0x4
#define XPB_P2P_BAR0__MEM_SYS_BAR__SHIFT                                                                      0x8
#define XPB_P2P_BAR0__VALID__SHIFT                                                                            0xc
#define XPB_P2P_BAR0__SEND_DIS__SHIFT                                                                         0xd
#define XPB_P2P_BAR0__COMPRESS_DIS__SHIFT                                                                     0xe
#define XPB_P2P_BAR0__RESERVED__SHIFT                                                                         0xf
#define XPB_P2P_BAR0__ADDRESS__SHIFT                                                                          0x10
#define XPB_P2P_BAR0__HOST_FLUSH_MASK                                                                         0x0000000FL
#define XPB_P2P_BAR0__REG_SYS_BAR_MASK                                                                        0x000000F0L
#define XPB_P2P_BAR0__MEM_SYS_BAR_MASK                                                                        0x00000F00L
#define XPB_P2P_BAR0__VALID_MASK                                                                              0x00001000L
#define XPB_P2P_BAR0__SEND_DIS_MASK                                                                           0x00002000L
#define XPB_P2P_BAR0__COMPRESS_DIS_MASK                                                                       0x00004000L
#define XPB_P2P_BAR0__RESERVED_MASK                                                                           0x00008000L
#define XPB_P2P_BAR0__ADDRESS_MASK                                                                            0xFFFF0000L
//XPB_P2P_BAR1
#define XPB_P2P_BAR1__HOST_FLUSH__SHIFT                                                                       0x0
#define XPB_P2P_BAR1__REG_SYS_BAR__SHIFT                                                                      0x4
#define XPB_P2P_BAR1__MEM_SYS_BAR__SHIFT                                                                      0x8
#define XPB_P2P_BAR1__VALID__SHIFT                                                                            0xc
#define XPB_P2P_BAR1__SEND_DIS__SHIFT                                                                         0xd
#define XPB_P2P_BAR1__COMPRESS_DIS__SHIFT                                                                     0xe
#define XPB_P2P_BAR1__RESERVED__SHIFT                                                                         0xf
#define XPB_P2P_BAR1__ADDRESS__SHIFT                                                                          0x10
#define XPB_P2P_BAR1__HOST_FLUSH_MASK                                                                         0x0000000FL
#define XPB_P2P_BAR1__REG_SYS_BAR_MASK                                                                        0x000000F0L
#define XPB_P2P_BAR1__MEM_SYS_BAR_MASK                                                                        0x00000F00L
#define XPB_P2P_BAR1__VALID_MASK                                                                              0x00001000L
#define XPB_P2P_BAR1__SEND_DIS_MASK                                                                           0x00002000L
#define XPB_P2P_BAR1__COMPRESS_DIS_MASK                                                                       0x00004000L
#define XPB_P2P_BAR1__RESERVED_MASK                                                                           0x00008000L
#define XPB_P2P_BAR1__ADDRESS_MASK                                                                            0xFFFF0000L
//XPB_P2P_BAR2
#define XPB_P2P_BAR2__HOST_FLUSH__SHIFT                                                                       0x0
#define XPB_P2P_BAR2__REG_SYS_BAR__SHIFT                                                                      0x4
#define XPB_P2P_BAR2__MEM_SYS_BAR__SHIFT                                                                      0x8
#define XPB_P2P_BAR2__VALID__SHIFT                                                                            0xc
#define XPB_P2P_BAR2__SEND_DIS__SHIFT                                                                         0xd
#define XPB_P2P_BAR2__COMPRESS_DIS__SHIFT                                                                     0xe
#define XPB_P2P_BAR2__RESERVED__SHIFT                                                                         0xf
#define XPB_P2P_BAR2__ADDRESS__SHIFT                                                                          0x10
#define XPB_P2P_BAR2__HOST_FLUSH_MASK                                                                         0x0000000FL
#define XPB_P2P_BAR2__REG_SYS_BAR_MASK                                                                        0x000000F0L
#define XPB_P2P_BAR2__MEM_SYS_BAR_MASK                                                                        0x00000F00L
#define XPB_P2P_BAR2__VALID_MASK                                                                              0x00001000L
#define XPB_P2P_BAR2__SEND_DIS_MASK                                                                           0x00002000L
#define XPB_P2P_BAR2__COMPRESS_DIS_MASK                                                                       0x00004000L
#define XPB_P2P_BAR2__RESERVED_MASK                                                                           0x00008000L
#define XPB_P2P_BAR2__ADDRESS_MASK                                                                            0xFFFF0000L
//XPB_P2P_BAR3
#define XPB_P2P_BAR3__HOST_FLUSH__SHIFT                                                                       0x0
#define XPB_P2P_BAR3__REG_SYS_BAR__SHIFT                                                                      0x4
#define XPB_P2P_BAR3__MEM_SYS_BAR__SHIFT                                                                      0x8
#define XPB_P2P_BAR3__VALID__SHIFT                                                                            0xc
#define XPB_P2P_BAR3__SEND_DIS__SHIFT                                                                         0xd
#define XPB_P2P_BAR3__COMPRESS_DIS__SHIFT                                                                     0xe
#define XPB_P2P_BAR3__RESERVED__SHIFT                                                                         0xf
#define XPB_P2P_BAR3__ADDRESS__SHIFT                                                                          0x10
#define XPB_P2P_BAR3__HOST_FLUSH_MASK                                                                         0x0000000FL
#define XPB_P2P_BAR3__REG_SYS_BAR_MASK                                                                        0x000000F0L
#define XPB_P2P_BAR3__MEM_SYS_BAR_MASK                                                                        0x00000F00L
#define XPB_P2P_BAR3__VALID_MASK                                                                              0x00001000L
#define XPB_P2P_BAR3__SEND_DIS_MASK                                                                           0x00002000L
#define XPB_P2P_BAR3__COMPRESS_DIS_MASK                                                                       0x00004000L
#define XPB_P2P_BAR3__RESERVED_MASK                                                                           0x00008000L
#define XPB_P2P_BAR3__ADDRESS_MASK                                                                            0xFFFF0000L
//XPB_P2P_BAR4
#define XPB_P2P_BAR4__HOST_FLUSH__SHIFT                                                                       0x0
#define XPB_P2P_BAR4__REG_SYS_BAR__SHIFT                                                                      0x4
#define XPB_P2P_BAR4__MEM_SYS_BAR__SHIFT                                                                      0x8
#define XPB_P2P_BAR4__VALID__SHIFT                                                                            0xc
#define XPB_P2P_BAR4__SEND_DIS__SHIFT                                                                         0xd
#define XPB_P2P_BAR4__COMPRESS_DIS__SHIFT                                                                     0xe
#define XPB_P2P_BAR4__RESERVED__SHIFT                                                                         0xf
#define XPB_P2P_BAR4__ADDRESS__SHIFT                                                                          0x10
#define XPB_P2P_BAR4__HOST_FLUSH_MASK                                                                         0x0000000FL
#define XPB_P2P_BAR4__REG_SYS_BAR_MASK                                                                        0x000000F0L
#define XPB_P2P_BAR4__MEM_SYS_BAR_MASK                                                                        0x00000F00L
#define XPB_P2P_BAR4__VALID_MASK                                                                              0x00001000L
#define XPB_P2P_BAR4__SEND_DIS_MASK                                                                           0x00002000L
#define XPB_P2P_BAR4__COMPRESS_DIS_MASK                                                                       0x00004000L
#define XPB_P2P_BAR4__RESERVED_MASK                                                                           0x00008000L
#define XPB_P2P_BAR4__ADDRESS_MASK                                                                            0xFFFF0000L
//XPB_P2P_BAR5
#define XPB_P2P_BAR5__HOST_FLUSH__SHIFT                                                                       0x0
#define XPB_P2P_BAR5__REG_SYS_BAR__SHIFT                                                                      0x4
#define XPB_P2P_BAR5__MEM_SYS_BAR__SHIFT                                                                      0x8
#define XPB_P2P_BAR5__VALID__SHIFT                                                                            0xc
#define XPB_P2P_BAR5__SEND_DIS__SHIFT                                                                         0xd
#define XPB_P2P_BAR5__COMPRESS_DIS__SHIFT                                                                     0xe
#define XPB_P2P_BAR5__RESERVED__SHIFT                                                                         0xf
#define XPB_P2P_BAR5__ADDRESS__SHIFT                                                                          0x10
#define XPB_P2P_BAR5__HOST_FLUSH_MASK                                                                         0x0000000FL
#define XPB_P2P_BAR5__REG_SYS_BAR_MASK                                                                        0x000000F0L
#define XPB_P2P_BAR5__MEM_SYS_BAR_MASK                                                                        0x00000F00L
#define XPB_P2P_BAR5__VALID_MASK                                                                              0x00001000L
#define XPB_P2P_BAR5__SEND_DIS_MASK                                                                           0x00002000L
#define XPB_P2P_BAR5__COMPRESS_DIS_MASK                                                                       0x00004000L
#define XPB_P2P_BAR5__RESERVED_MASK                                                                           0x00008000L
#define XPB_P2P_BAR5__ADDRESS_MASK                                                                            0xFFFF0000L
//XPB_P2P_BAR6
#define XPB_P2P_BAR6__HOST_FLUSH__SHIFT                                                                       0x0
#define XPB_P2P_BAR6__REG_SYS_BAR__SHIFT                                                                      0x4
#define XPB_P2P_BAR6__MEM_SYS_BAR__SHIFT                                                                      0x8
#define XPB_P2P_BAR6__VALID__SHIFT                                                                            0xc
#define XPB_P2P_BAR6__SEND_DIS__SHIFT                                                                         0xd
#define XPB_P2P_BAR6__COMPRESS_DIS__SHIFT                                                                     0xe
#define XPB_P2P_BAR6__RESERVED__SHIFT                                                                         0xf
#define XPB_P2P_BAR6__ADDRESS__SHIFT                                                                          0x10
#define XPB_P2P_BAR6__HOST_FLUSH_MASK                                                                         0x0000000FL
#define XPB_P2P_BAR6__REG_SYS_BAR_MASK                                                                        0x000000F0L
#define XPB_P2P_BAR6__MEM_SYS_BAR_MASK                                                                        0x00000F00L
#define XPB_P2P_BAR6__VALID_MASK                                                                              0x00001000L
#define XPB_P2P_BAR6__SEND_DIS_MASK                                                                           0x00002000L
#define XPB_P2P_BAR6__COMPRESS_DIS_MASK                                                                       0x00004000L
#define XPB_P2P_BAR6__RESERVED_MASK                                                                           0x00008000L
#define XPB_P2P_BAR6__ADDRESS_MASK                                                                            0xFFFF0000L
//XPB_P2P_BAR7
#define XPB_P2P_BAR7__HOST_FLUSH__SHIFT                                                                       0x0
#define XPB_P2P_BAR7__REG_SYS_BAR__SHIFT                                                                      0x4
#define XPB_P2P_BAR7__MEM_SYS_BAR__SHIFT                                                                      0x8
#define XPB_P2P_BAR7__VALID__SHIFT                                                                            0xc
#define XPB_P2P_BAR7__SEND_DIS__SHIFT                                                                         0xd
#define XPB_P2P_BAR7__COMPRESS_DIS__SHIFT                                                                     0xe
#define XPB_P2P_BAR7__RESERVED__SHIFT                                                                         0xf
#define XPB_P2P_BAR7__ADDRESS__SHIFT                                                                          0x10
#define XPB_P2P_BAR7__HOST_FLUSH_MASK                                                                         0x0000000FL
#define XPB_P2P_BAR7__REG_SYS_BAR_MASK                                                                        0x000000F0L
#define XPB_P2P_BAR7__MEM_SYS_BAR_MASK                                                                        0x00000F00L
#define XPB_P2P_BAR7__VALID_MASK                                                                              0x00001000L
#define XPB_P2P_BAR7__SEND_DIS_MASK                                                                           0x00002000L
#define XPB_P2P_BAR7__COMPRESS_DIS_MASK                                                                       0x00004000L
#define XPB_P2P_BAR7__RESERVED_MASK                                                                           0x00008000L
#define XPB_P2P_BAR7__ADDRESS_MASK                                                                            0xFFFF0000L
//XPB_P2P_BAR_SETUP
#define XPB_P2P_BAR_SETUP__SEL__SHIFT                                                                         0x0
#define XPB_P2P_BAR_SETUP__REG_SYS_BAR__SHIFT                                                                 0x8
#define XPB_P2P_BAR_SETUP__VALID__SHIFT                                                                       0xc
#define XPB_P2P_BAR_SETUP__SEND_DIS__SHIFT                                                                    0xd
#define XPB_P2P_BAR_SETUP__COMPRESS_DIS__SHIFT                                                                0xe
#define XPB_P2P_BAR_SETUP__RESERVED__SHIFT                                                                    0xf
#define XPB_P2P_BAR_SETUP__ADDRESS__SHIFT                                                                     0x10
#define XPB_P2P_BAR_SETUP__SEL_MASK                                                                           0x000000FFL
#define XPB_P2P_BAR_SETUP__REG_SYS_BAR_MASK                                                                   0x00000F00L
#define XPB_P2P_BAR_SETUP__VALID_MASK                                                                         0x00001000L
#define XPB_P2P_BAR_SETUP__SEND_DIS_MASK                                                                      0x00002000L
#define XPB_P2P_BAR_SETUP__COMPRESS_DIS_MASK                                                                  0x00004000L
#define XPB_P2P_BAR_SETUP__RESERVED_MASK                                                                      0x00008000L
#define XPB_P2P_BAR_SETUP__ADDRESS_MASK                                                                       0xFFFF0000L
//XPB_P2P_BAR_DELTA_ABOVE
#define XPB_P2P_BAR_DELTA_ABOVE__EN__SHIFT                                                                    0x0
#define XPB_P2P_BAR_DELTA_ABOVE__DELTA__SHIFT                                                                 0x8
#define XPB_P2P_BAR_DELTA_ABOVE__EN_MASK                                                                      0x000000FFL
#define XPB_P2P_BAR_DELTA_ABOVE__DELTA_MASK                                                                   0x0FFFFF00L
//XPB_P2P_BAR_DELTA_BELOW
#define XPB_P2P_BAR_DELTA_BELOW__EN__SHIFT                                                                    0x0
#define XPB_P2P_BAR_DELTA_BELOW__DELTA__SHIFT                                                                 0x8
#define XPB_P2P_BAR_DELTA_BELOW__EN_MASK                                                                      0x000000FFL
#define XPB_P2P_BAR_DELTA_BELOW__DELTA_MASK                                                                   0x0FFFFF00L
//XPB_PEER_SYS_BAR0
#define XPB_PEER_SYS_BAR0__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR0__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR0__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR0__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_PEER_SYS_BAR1
#define XPB_PEER_SYS_BAR1__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR1__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR1__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR1__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_PEER_SYS_BAR2
#define XPB_PEER_SYS_BAR2__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR2__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR2__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR2__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_PEER_SYS_BAR3
#define XPB_PEER_SYS_BAR3__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR3__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR3__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR3__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_PEER_SYS_BAR4
#define XPB_PEER_SYS_BAR4__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR4__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR4__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR4__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_PEER_SYS_BAR5
#define XPB_PEER_SYS_BAR5__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR5__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR5__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR5__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_PEER_SYS_BAR6
#define XPB_PEER_SYS_BAR6__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR6__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR6__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR6__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_PEER_SYS_BAR7
#define XPB_PEER_SYS_BAR7__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR7__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR7__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR7__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_PEER_SYS_BAR8
#define XPB_PEER_SYS_BAR8__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR8__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR8__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR8__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_PEER_SYS_BAR9
#define XPB_PEER_SYS_BAR9__VALID__SHIFT                                                                       0x0
#define XPB_PEER_SYS_BAR9__ADDR__SHIFT                                                                        0x1
#define XPB_PEER_SYS_BAR9__VALID_MASK                                                                         0x00000001L
#define XPB_PEER_SYS_BAR9__ADDR_MASK                                                                          0xFFFFFFFEL
//XPB_XDMA_PEER_SYS_BAR0
#define XPB_XDMA_PEER_SYS_BAR0__VALID__SHIFT                                                                  0x0
#define XPB_XDMA_PEER_SYS_BAR0__ADDR__SHIFT                                                                   0x1
#define XPB_XDMA_PEER_SYS_BAR0__VALID_MASK                                                                    0x00000001L
#define XPB_XDMA_PEER_SYS_BAR0__ADDR_MASK                                                                     0xFFFFFFFEL
//XPB_XDMA_PEER_SYS_BAR1
#define XPB_XDMA_PEER_SYS_BAR1__VALID__SHIFT                                                                  0x0
#define XPB_XDMA_PEER_SYS_BAR1__ADDR__SHIFT                                                                   0x1
#define XPB_XDMA_PEER_SYS_BAR1__VALID_MASK                                                                    0x00000001L
#define XPB_XDMA_PEER_SYS_BAR1__ADDR_MASK                                                                     0xFFFFFFFEL
//XPB_XDMA_PEER_SYS_BAR2
#define XPB_XDMA_PEER_SYS_BAR2__VALID__SHIFT                                                                  0x0
#define XPB_XDMA_PEER_SYS_BAR2__ADDR__SHIFT                                                                   0x1
#define XPB_XDMA_PEER_SYS_BAR2__VALID_MASK                                                                    0x00000001L
#define XPB_XDMA_PEER_SYS_BAR2__ADDR_MASK                                                                     0xFFFFFFFEL
//XPB_XDMA_PEER_SYS_BAR3
#define XPB_XDMA_PEER_SYS_BAR3__VALID__SHIFT                                                                  0x0
#define XPB_XDMA_PEER_SYS_BAR3__ADDR__SHIFT                                                                   0x1
#define XPB_XDMA_PEER_SYS_BAR3__VALID_MASK                                                                    0x00000001L
#define XPB_XDMA_PEER_SYS_BAR3__ADDR_MASK                                                                     0xFFFFFFFEL
//XPB_CLK_GAT
#define XPB_CLK_GAT__ONDLY__SHIFT                                                                             0x0
#define XPB_CLK_GAT__OFFDLY__SHIFT                                                                            0x6
#define XPB_CLK_GAT__RDYDLY__SHIFT                                                                            0xc
#define XPB_CLK_GAT__ENABLE__SHIFT                                                                            0x12
#define XPB_CLK_GAT__MEM_LS_ENABLE__SHIFT                                                                     0x13
#define XPB_CLK_GAT__ONDLY_MASK                                                                               0x0000003FL
#define XPB_CLK_GAT__OFFDLY_MASK                                                                              0x00000FC0L
#define XPB_CLK_GAT__RDYDLY_MASK                                                                              0x0003F000L
#define XPB_CLK_GAT__ENABLE_MASK                                                                              0x00040000L
#define XPB_CLK_GAT__MEM_LS_ENABLE_MASK                                                                       0x00080000L
//XPB_INTF_CFG
#define XPB_INTF_CFG__RPB_WRREQ_CRD__SHIFT                                                                    0x0
#define XPB_INTF_CFG__MC_WRRET_ASK__SHIFT                                                                     0x8
#define XPB_INTF_CFG__XSP_REQ_CRD__SHIFT                                                                      0x10
#define XPB_INTF_CFG__BIF_REG_SNOOP_SEL__SHIFT                                                                0x17
#define XPB_INTF_CFG__BIF_REG_SNOOP_VAL__SHIFT                                                                0x18
#define XPB_INTF_CFG__BIF_MEM_SNOOP_SEL__SHIFT                                                                0x19
#define XPB_INTF_CFG__BIF_MEM_SNOOP_VAL__SHIFT                                                                0x1a
#define XPB_INTF_CFG__XSP_SNOOP_SEL__SHIFT                                                                    0x1b
#define XPB_INTF_CFG__XSP_SNOOP_VAL__SHIFT                                                                    0x1d
#define XPB_INTF_CFG__XSP_ORDERING_SEL__SHIFT                                                                 0x1e
#define XPB_INTF_CFG__QUALIFY_P2P_FOR_GPA__SHIFT                                                              0x1f
#define XPB_INTF_CFG__RPB_WRREQ_CRD_MASK                                                                      0x000000FFL
#define XPB_INTF_CFG__MC_WRRET_ASK_MASK                                                                       0x0000FF00L
#define XPB_INTF_CFG__XSP_REQ_CRD_MASK                                                                        0x007F0000L
#define XPB_INTF_CFG__BIF_REG_SNOOP_SEL_MASK                                                                  0x00800000L
#define XPB_INTF_CFG__BIF_REG_SNOOP_VAL_MASK                                                                  0x01000000L
#define XPB_INTF_CFG__BIF_MEM_SNOOP_SEL_MASK                                                                  0x02000000L
#define XPB_INTF_CFG__BIF_MEM_SNOOP_VAL_MASK                                                                  0x04000000L
#define XPB_INTF_CFG__XSP_SNOOP_SEL_MASK                                                                      0x18000000L
#define XPB_INTF_CFG__XSP_SNOOP_VAL_MASK                                                                      0x20000000L
#define XPB_INTF_CFG__XSP_ORDERING_SEL_MASK                                                                   0x40000000L
#define XPB_INTF_CFG__QUALIFY_P2P_FOR_GPA_MASK                                                                0x80000000L
//XPB_INTF_STS
#define XPB_INTF_STS__RPB_WRREQ_CRD__SHIFT                                                                    0x0
#define XPB_INTF_STS__XSP_REQ_CRD__SHIFT                                                                      0x8
#define XPB_INTF_STS__HOP_DATA_BUF_FULL__SHIFT                                                                0xf
#define XPB_INTF_STS__HOP_ATTR_BUF_FULL__SHIFT                                                                0x10
#define XPB_INTF_STS__CNS_BUF_FULL__SHIFT                                                                     0x11
#define XPB_INTF_STS__CNS_BUF_BUSY__SHIFT                                                                     0x12
#define XPB_INTF_STS__RPB_RDREQ_CRD__SHIFT                                                                    0x13
#define XPB_INTF_STS__RPB_WRREQ_CRD_MASK                                                                      0x000000FFL
#define XPB_INTF_STS__XSP_REQ_CRD_MASK                                                                        0x00007F00L
#define XPB_INTF_STS__HOP_DATA_BUF_FULL_MASK                                                                  0x00008000L
#define XPB_INTF_STS__HOP_ATTR_BUF_FULL_MASK                                                                  0x00010000L
#define XPB_INTF_STS__CNS_BUF_FULL_MASK                                                                       0x00020000L
#define XPB_INTF_STS__CNS_BUF_BUSY_MASK                                                                       0x00040000L
#define XPB_INTF_STS__RPB_RDREQ_CRD_MASK                                                                      0x07F80000L
//XPB_PIPE_STS
#define XPB_PIPE_STS__WCB_ANY_PBUF__SHIFT                                                                     0x0
#define XPB_PIPE_STS__WCB_HST_DATA_BUF_CNT__SHIFT                                                             0x1
#define XPB_PIPE_STS__WCB_SID_DATA_BUF_CNT__SHIFT                                                             0x8
#define XPB_PIPE_STS__WCB_HST_RD_PTR_BUF_FULL__SHIFT                                                          0xf
#define XPB_PIPE_STS__WCB_SID_RD_PTR_BUF_FULL__SHIFT                                                          0x10
#define XPB_PIPE_STS__WCB_HST_REQ_FIFO_FULL__SHIFT                                                            0x11
#define XPB_PIPE_STS__WCB_SID_REQ_FIFO_FULL__SHIFT                                                            0x12
#define XPB_PIPE_STS__WCB_HST_REQ_OBUF_FULL__SHIFT                                                            0x13
#define XPB_PIPE_STS__WCB_SID_REQ_OBUF_FULL__SHIFT                                                            0x14
#define XPB_PIPE_STS__WCB_HST_DATA_OBUF_FULL__SHIFT                                                           0x15
#define XPB_PIPE_STS__WCB_SID_DATA_OBUF_FULL__SHIFT                                                           0x16
#define XPB_PIPE_STS__RET_BUF_FULL__SHIFT                                                                     0x17
#define XPB_PIPE_STS__XPB_CLK_BUSY_BITS__SHIFT                                                                0x18
#define XPB_PIPE_STS__WCB_ANY_PBUF_MASK                                                                       0x00000001L
#define XPB_PIPE_STS__WCB_HST_DATA_BUF_CNT_MASK                                                               0x000000FEL
#define XPB_PIPE_STS__WCB_SID_DATA_BUF_CNT_MASK                                                               0x00007F00L
#define XPB_PIPE_STS__WCB_HST_RD_PTR_BUF_FULL_MASK                                                            0x00008000L
#define XPB_PIPE_STS__WCB_SID_RD_PTR_BUF_FULL_MASK                                                            0x00010000L
#define XPB_PIPE_STS__WCB_HST_REQ_FIFO_FULL_MASK                                                              0x00020000L
#define XPB_PIPE_STS__WCB_SID_REQ_FIFO_FULL_MASK                                                              0x00040000L
#define XPB_PIPE_STS__WCB_HST_REQ_OBUF_FULL_MASK                                                              0x00080000L
#define XPB_PIPE_STS__WCB_SID_REQ_OBUF_FULL_MASK                                                              0x00100000L
#define XPB_PIPE_STS__WCB_HST_DATA_OBUF_FULL_MASK                                                             0x00200000L
#define XPB_PIPE_STS__WCB_SID_DATA_OBUF_FULL_MASK                                                             0x00400000L
#define XPB_PIPE_STS__RET_BUF_FULL_MASK                                                                       0x00800000L
#define XPB_PIPE_STS__XPB_CLK_BUSY_BITS_MASK                                                                  0xFF000000L
//XPB_SUB_CTRL
#define XPB_SUB_CTRL__WRREQ_BYPASS_XPB__SHIFT                                                                 0x0
#define XPB_SUB_CTRL__STALL_CNS_RTR_REQ__SHIFT                                                                0x1
#define XPB_SUB_CTRL__STALL_RTR_RPB_WRREQ__SHIFT                                                              0x2
#define XPB_SUB_CTRL__STALL_RTR_MAP_REQ__SHIFT                                                                0x3
#define XPB_SUB_CTRL__STALL_MAP_WCB_REQ__SHIFT                                                                0x4
#define XPB_SUB_CTRL__STALL_WCB_SID_REQ__SHIFT                                                                0x5
#define XPB_SUB_CTRL__STALL_MC_XSP_REQ_SEND__SHIFT                                                            0x6
#define XPB_SUB_CTRL__STALL_WCB_HST_REQ__SHIFT                                                                0x7
#define XPB_SUB_CTRL__STALL_HST_HOP_REQ__SHIFT                                                                0x8
#define XPB_SUB_CTRL__STALL_XPB_RPB_REQ_ATTR__SHIFT                                                           0x9
#define XPB_SUB_CTRL__RESET_CNS__SHIFT                                                                        0xa
#define XPB_SUB_CTRL__RESET_RTR__SHIFT                                                                        0xb
#define XPB_SUB_CTRL__RESET_RET__SHIFT                                                                        0xc
#define XPB_SUB_CTRL__RESET_MAP__SHIFT                                                                        0xd
#define XPB_SUB_CTRL__RESET_WCB__SHIFT                                                                        0xe
#define XPB_SUB_CTRL__RESET_HST__SHIFT                                                                        0xf
#define XPB_SUB_CTRL__RESET_HOP__SHIFT                                                                        0x10
#define XPB_SUB_CTRL__RESET_SID__SHIFT                                                                        0x11
#define XPB_SUB_CTRL__RESET_SRB__SHIFT                                                                        0x12
#define XPB_SUB_CTRL__RESET_CGR__SHIFT                                                                        0x13
#define XPB_SUB_CTRL__WRREQ_BYPASS_XPB_MASK                                                                   0x00000001L
#define XPB_SUB_CTRL__STALL_CNS_RTR_REQ_MASK                                                                  0x00000002L
#define XPB_SUB_CTRL__STALL_RTR_RPB_WRREQ_MASK                                                                0x00000004L
#define XPB_SUB_CTRL__STALL_RTR_MAP_REQ_MASK                                                                  0x00000008L
#define XPB_SUB_CTRL__STALL_MAP_WCB_REQ_MASK                                                                  0x00000010L
#define XPB_SUB_CTRL__STALL_WCB_SID_REQ_MASK                                                                  0x00000020L
#define XPB_SUB_CTRL__STALL_MC_XSP_REQ_SEND_MASK                                                              0x00000040L
#define XPB_SUB_CTRL__STALL_WCB_HST_REQ_MASK                                                                  0x00000080L
#define XPB_SUB_CTRL__STALL_HST_HOP_REQ_MASK                                                                  0x00000100L
#define XPB_SUB_CTRL__STALL_XPB_RPB_REQ_ATTR_MASK                                                             0x00000200L
#define XPB_SUB_CTRL__RESET_CNS_MASK                                                                          0x00000400L
#define XPB_SUB_CTRL__RESET_RTR_MASK                                                                          0x00000800L
#define XPB_SUB_CTRL__RESET_RET_MASK                                                                          0x00001000L
#define XPB_SUB_CTRL__RESET_MAP_MASK                                                                          0x00002000L
#define XPB_SUB_CTRL__RESET_WCB_MASK                                                                          0x00004000L
#define XPB_SUB_CTRL__RESET_HST_MASK                                                                          0x00008000L
#define XPB_SUB_CTRL__RESET_HOP_MASK                                                                          0x00010000L
#define XPB_SUB_CTRL__RESET_SID_MASK                                                                          0x00020000L
#define XPB_SUB_CTRL__RESET_SRB_MASK                                                                          0x00040000L
#define XPB_SUB_CTRL__RESET_CGR_MASK                                                                          0x00080000L
//XPB_MAP_INVERT_FLUSH_NUM_LSB
#define XPB_MAP_INVERT_FLUSH_NUM_LSB__ALTER_FLUSH_NUM__SHIFT                                                  0x0
#define XPB_MAP_INVERT_FLUSH_NUM_LSB__ALTER_FLUSH_NUM_MASK                                                    0x0000FFFFL
//XPB_PERF_KNOBS
#define XPB_PERF_KNOBS__CNS_FIFO_DEPTH__SHIFT                                                                 0x0
#define XPB_PERF_KNOBS__WCB_HST_FIFO_DEPTH__SHIFT                                                             0x6
#define XPB_PERF_KNOBS__WCB_SID_FIFO_DEPTH__SHIFT                                                             0xc
#define XPB_PERF_KNOBS__CNS_FIFO_DEPTH_MASK                                                                   0x0000003FL
#define XPB_PERF_KNOBS__WCB_HST_FIFO_DEPTH_MASK                                                               0x00000FC0L
#define XPB_PERF_KNOBS__WCB_SID_FIFO_DEPTH_MASK                                                               0x0003F000L
//XPB_STICKY
#define XPB_STICKY__BITS__SHIFT                                                                               0x0
#define XPB_STICKY__BITS_MASK                                                                                 0xFFFFFFFFL
//XPB_STICKY_W1C
#define XPB_STICKY_W1C__BITS__SHIFT                                                                           0x0
#define XPB_STICKY_W1C__BITS_MASK                                                                             0xFFFFFFFFL
//XPB_MISC_CFG
#define XPB_MISC_CFG__FIELDNAME0__SHIFT                                                                       0x0
#define XPB_MISC_CFG__FIELDNAME1__SHIFT                                                                       0x8
#define XPB_MISC_CFG__FIELDNAME2__SHIFT                                                                       0x10
#define XPB_MISC_CFG__FIELDNAME3__SHIFT                                                                       0x18
#define XPB_MISC_CFG__TRIGGERNAME__SHIFT                                                                      0x1f
#define XPB_MISC_CFG__FIELDNAME0_MASK                                                                         0x000000FFL
#define XPB_MISC_CFG__FIELDNAME1_MASK                                                                         0x0000FF00L
#define XPB_MISC_CFG__FIELDNAME2_MASK                                                                         0x00FF0000L
#define XPB_MISC_CFG__FIELDNAME3_MASK                                                                         0x7F000000L
#define XPB_MISC_CFG__TRIGGERNAME_MASK                                                                        0x80000000L
//XPB_INTF_CFG2
#define XPB_INTF_CFG2__RPB_RDREQ_CRD__SHIFT                                                                   0x0
#define XPB_INTF_CFG2__RPB_RDREQ_CRD_MASK                                                                     0x000000FFL
//XPB_CLG_EXTRA_RD
#define XPB_CLG_EXTRA_RD__CMP0_HIGH__SHIFT                                                                    0x0
#define XPB_CLG_EXTRA_RD__CMP0_LOW__SHIFT                                                                     0x6
#define XPB_CLG_EXTRA_RD__VLD0__SHIFT                                                                         0xb
#define XPB_CLG_EXTRA_RD__CLG0_NUM__SHIFT                                                                     0xc
#define XPB_CLG_EXTRA_RD__CMP1_HIGH__SHIFT                                                                    0xf
#define XPB_CLG_EXTRA_RD__CMP1_LOW__SHIFT                                                                     0x15
#define XPB_CLG_EXTRA_RD__VLD1__SHIFT                                                                         0x1a
#define XPB_CLG_EXTRA_RD__CLG1_NUM__SHIFT                                                                     0x1b
#define XPB_CLG_EXTRA_RD__CMP0_HIGH_MASK                                                                      0x0000003FL
#define XPB_CLG_EXTRA_RD__CMP0_LOW_MASK                                                                       0x000007C0L
#define XPB_CLG_EXTRA_RD__VLD0_MASK                                                                           0x00000800L
#define XPB_CLG_EXTRA_RD__CLG0_NUM_MASK                                                                       0x00007000L
#define XPB_CLG_EXTRA_RD__CMP1_HIGH_MASK                                                                      0x001F8000L
#define XPB_CLG_EXTRA_RD__CMP1_LOW_MASK                                                                       0x03E00000L
#define XPB_CLG_EXTRA_RD__VLD1_MASK                                                                           0x04000000L
#define XPB_CLG_EXTRA_RD__CLG1_NUM_MASK                                                                       0x38000000L
//XPB_CLG_EXTRA_MSK_RD
#define XPB_CLG_EXTRA_MSK_RD__MSK0_HIGH__SHIFT                                                                0x0
#define XPB_CLG_EXTRA_MSK_RD__MSK0_LOW__SHIFT                                                                 0x6
#define XPB_CLG_EXTRA_MSK_RD__MSK1_HIGH__SHIFT                                                                0xb
#define XPB_CLG_EXTRA_MSK_RD__MSK1_LOW__SHIFT                                                                 0x11
#define XPB_CLG_EXTRA_MSK_RD__MSK0_HIGH_MASK                                                                  0x0000003FL
#define XPB_CLG_EXTRA_MSK_RD__MSK0_LOW_MASK                                                                   0x000007C0L
#define XPB_CLG_EXTRA_MSK_RD__MSK1_HIGH_MASK                                                                  0x0001F800L
#define XPB_CLG_EXTRA_MSK_RD__MSK1_LOW_MASK                                                                   0x003E0000L
//XPB_CLG_GFX_MATCH
#define XPB_CLG_GFX_MATCH__FARBIRC0_ID__SHIFT                                                                 0x0
#define XPB_CLG_GFX_MATCH__FARBIRC1_ID__SHIFT                                                                 0x8
#define XPB_CLG_GFX_MATCH__FARBIRC2_ID__SHIFT                                                                 0x10
#define XPB_CLG_GFX_MATCH__FARBIRC3_ID__SHIFT                                                                 0x18
#define XPB_CLG_GFX_MATCH__FARBIRC0_ID_MASK                                                                   0x000000FFL
#define XPB_CLG_GFX_MATCH__FARBIRC1_ID_MASK                                                                   0x0000FF00L
#define XPB_CLG_GFX_MATCH__FARBIRC2_ID_MASK                                                                   0x00FF0000L
#define XPB_CLG_GFX_MATCH__FARBIRC3_ID_MASK                                                                   0xFF000000L
//XPB_CLG_GFX_MATCH_VLD
#define XPB_CLG_GFX_MATCH_VLD__FARBIRC0_VLD__SHIFT                                                            0x0
#define XPB_CLG_GFX_MATCH_VLD__FARBIRC1_VLD__SHIFT                                                            0x1
#define XPB_CLG_GFX_MATCH_VLD__FARBIRC2_VLD__SHIFT                                                            0x2
#define XPB_CLG_GFX_MATCH_VLD__FARBIRC3_VLD__SHIFT                                                            0x3
#define XPB_CLG_GFX_MATCH_VLD__FARBIRC0_VLD_MASK                                                              0x00000001L
#define XPB_CLG_GFX_MATCH_VLD__FARBIRC1_VLD_MASK                                                              0x00000002L
#define XPB_CLG_GFX_MATCH_VLD__FARBIRC2_VLD_MASK                                                              0x00000004L
#define XPB_CLG_GFX_MATCH_VLD__FARBIRC3_VLD_MASK                                                              0x00000008L
//XPB_CLG_GFX_MATCH_MSK
#define XPB_CLG_GFX_MATCH_MSK__FARBIRC0_ID_MSK__SHIFT                                                         0x0
#define XPB_CLG_GFX_MATCH_MSK__FARBIRC1_ID_MSK__SHIFT                                                         0x8
#define XPB_CLG_GFX_MATCH_MSK__FARBIRC2_ID_MSK__SHIFT                                                         0x10
#define XPB_CLG_GFX_MATCH_MSK__FARBIRC3_ID_MSK__SHIFT                                                         0x18
#define XPB_CLG_GFX_MATCH_MSK__FARBIRC0_ID_MSK_MASK                                                           0x000000FFL
#define XPB_CLG_GFX_MATCH_MSK__FARBIRC1_ID_MSK_MASK                                                           0x0000FF00L
#define XPB_CLG_GFX_MATCH_MSK__FARBIRC2_ID_MSK_MASK                                                           0x00FF0000L
#define XPB_CLG_GFX_MATCH_MSK__FARBIRC3_ID_MSK_MASK                                                           0xFF000000L
//XPB_CLG_MM_MATCH
#define XPB_CLG_MM_MATCH__FARBIRC0_ID__SHIFT                                                                  0x0
#define XPB_CLG_MM_MATCH__FARBIRC1_ID__SHIFT                                                                  0x8
#define XPB_CLG_MM_MATCH__FARBIRC2_ID__SHIFT                                                                  0x10
#define XPB_CLG_MM_MATCH__FARBIRC3_ID__SHIFT                                                                  0x18
#define XPB_CLG_MM_MATCH__FARBIRC0_ID_MASK                                                                    0x000000FFL
#define XPB_CLG_MM_MATCH__FARBIRC1_ID_MASK                                                                    0x0000FF00L
#define XPB_CLG_MM_MATCH__FARBIRC2_ID_MASK                                                                    0x00FF0000L
#define XPB_CLG_MM_MATCH__FARBIRC3_ID_MASK                                                                    0xFF000000L
//XPB_CLG_MM_MATCH_VLD
#define XPB_CLG_MM_MATCH_VLD__FARBIRC0_VLD__SHIFT                                                             0x0
#define XPB_CLG_MM_MATCH_VLD__FARBIRC1_VLD__SHIFT                                                             0x1
#define XPB_CLG_MM_MATCH_VLD__FARBIRC2_VLD__SHIFT                                                             0x2
#define XPB_CLG_MM_MATCH_VLD__FARBIRC3_VLD__SHIFT                                                             0x3
#define XPB_CLG_MM_MATCH_VLD__FARBIRC0_VLD_MASK                                                               0x00000001L
#define XPB_CLG_MM_MATCH_VLD__FARBIRC1_VLD_MASK                                                               0x00000002L
#define XPB_CLG_MM_MATCH_VLD__FARBIRC2_VLD_MASK                                                               0x00000004L
#define XPB_CLG_MM_MATCH_VLD__FARBIRC3_VLD_MASK                                                               0x00000008L
//XPB_CLG_MM_MATCH_MSK
#define XPB_CLG_MM_MATCH_MSK__FARBIRC0_ID_MSK__SHIFT                                                          0x0
#define XPB_CLG_MM_MATCH_MSK__FARBIRC1_ID_MSK__SHIFT                                                          0x8
#define XPB_CLG_MM_MATCH_MSK__FARBIRC2_ID_MSK__SHIFT                                                          0x10
#define XPB_CLG_MM_MATCH_MSK__FARBIRC3_ID_MSK__SHIFT                                                          0x18
#define XPB_CLG_MM_MATCH_MSK__FARBIRC0_ID_MSK_MASK                                                            0x000000FFL
#define XPB_CLG_MM_MATCH_MSK__FARBIRC1_ID_MSK_MASK                                                            0x0000FF00L
#define XPB_CLG_MM_MATCH_MSK__FARBIRC2_ID_MSK_MASK                                                            0x00FF0000L
#define XPB_CLG_MM_MATCH_MSK__FARBIRC3_ID_MSK_MASK                                                            0xFF000000L
//XPB_CLG_GFX_UNITID_MAPPING0
#define XPB_CLG_GFX_UNITID_MAPPING0__UNITID_LOW__SHIFT                                                        0x0
#define XPB_CLG_GFX_UNITID_MAPPING0__UNITID_VLD__SHIFT                                                        0x5
#define XPB_CLG_GFX_UNITID_MAPPING0__DEST_CLG_NUM__SHIFT                                                      0x6
#define XPB_CLG_GFX_UNITID_MAPPING0__UNITID_LOW_MASK                                                          0x0000001FL
#define XPB_CLG_GFX_UNITID_MAPPING0__UNITID_VLD_MASK                                                          0x00000020L
#define XPB_CLG_GFX_UNITID_MAPPING0__DEST_CLG_NUM_MASK                                                        0x000001C0L
//XPB_CLG_GFX_UNITID_MAPPING1
#define XPB_CLG_GFX_UNITID_MAPPING1__UNITID_LOW__SHIFT                                                        0x0
#define XPB_CLG_GFX_UNITID_MAPPING1__UNITID_VLD__SHIFT                                                        0x5
#define XPB_CLG_GFX_UNITID_MAPPING1__DEST_CLG_NUM__SHIFT                                                      0x6
#define XPB_CLG_GFX_UNITID_MAPPING1__UNITID_LOW_MASK                                                          0x0000001FL
#define XPB_CLG_GFX_UNITID_MAPPING1__UNITID_VLD_MASK                                                          0x00000020L
#define XPB_CLG_GFX_UNITID_MAPPING1__DEST_CLG_NUM_MASK                                                        0x000001C0L
//XPB_CLG_GFX_UNITID_MAPPING2
#define XPB_CLG_GFX_UNITID_MAPPING2__UNITID_LOW__SHIFT                                                        0x0
#define XPB_CLG_GFX_UNITID_MAPPING2__UNITID_VLD__SHIFT                                                        0x5
#define XPB_CLG_GFX_UNITID_MAPPING2__DEST_CLG_NUM__SHIFT                                                      0x6
#define XPB_CLG_GFX_UNITID_MAPPING2__UNITID_LOW_MASK                                                          0x0000001FL
#define XPB_CLG_GFX_UNITID_MAPPING2__UNITID_VLD_MASK                                                          0x00000020L
#define XPB_CLG_GFX_UNITID_MAPPING2__DEST_CLG_NUM_MASK                                                        0x000001C0L
//XPB_CLG_GFX_UNITID_MAPPING3
#define XPB_CLG_GFX_UNITID_MAPPING3__UNITID_LOW__SHIFT                                                        0x0
#define XPB_CLG_GFX_UNITID_MAPPING3__UNITID_VLD__SHIFT                                                        0x5
#define XPB_CLG_GFX_UNITID_MAPPING3__DEST_CLG_NUM__SHIFT                                                      0x6
#define XPB_CLG_GFX_UNITID_MAPPING3__UNITID_LOW_MASK                                                          0x0000001FL
#define XPB_CLG_GFX_UNITID_MAPPING3__UNITID_VLD_MASK                                                          0x00000020L
#define XPB_CLG_GFX_UNITID_MAPPING3__DEST_CLG_NUM_MASK                                                        0x000001C0L
//XPB_CLG_GFX_UNITID_MAPPING4
#define XPB_CLG_GFX_UNITID_MAPPING4__UNITID_LOW__SHIFT                                                        0x0
#define XPB_CLG_GFX_UNITID_MAPPING4__UNITID_VLD__SHIFT                                                        0x5
#define XPB_CLG_GFX_UNITID_MAPPING4__DEST_CLG_NUM__SHIFT                                                      0x6
#define XPB_CLG_GFX_UNITID_MAPPING4__UNITID_LOW_MASK                                                          0x0000001FL
#define XPB_CLG_GFX_UNITID_MAPPING4__UNITID_VLD_MASK                                                          0x00000020L
#define XPB_CLG_GFX_UNITID_MAPPING4__DEST_CLG_NUM_MASK                                                        0x000001C0L
//XPB_CLG_GFX_UNITID_MAPPING5
#define XPB_CLG_GFX_UNITID_MAPPING5__UNITID_LOW__SHIFT                                                        0x0
#define XPB_CLG_GFX_UNITID_MAPPING5__UNITID_VLD__SHIFT                                                        0x5
#define XPB_CLG_GFX_UNITID_MAPPING5__DEST_CLG_NUM__SHIFT                                                      0x6
#define XPB_CLG_GFX_UNITID_MAPPING5__UNITID_LOW_MASK                                                          0x0000001FL
#define XPB_CLG_GFX_UNITID_MAPPING5__UNITID_VLD_MASK                                                          0x00000020L
#define XPB_CLG_GFX_UNITID_MAPPING5__DEST_CLG_NUM_MASK                                                        0x000001C0L
//XPB_CLG_GFX_UNITID_MAPPING6
#define XPB_CLG_GFX_UNITID_MAPPING6__UNITID_LOW__SHIFT                                                        0x0
#define XPB_CLG_GFX_UNITID_MAPPING6__UNITID_VLD__SHIFT                                                        0x5
#define XPB_CLG_GFX_UNITID_MAPPING6__DEST_CLG_NUM__SHIFT                                                      0x6
#define XPB_CLG_GFX_UNITID_MAPPING6__UNITID_LOW_MASK                                                          0x0000001FL
#define XPB_CLG_GFX_UNITID_MAPPING6__UNITID_VLD_MASK                                                          0x00000020L
#define XPB_CLG_GFX_UNITID_MAPPING6__DEST_CLG_NUM_MASK                                                        0x000001C0L
//XPB_CLG_GFX_UNITID_MAPPING7
#define XPB_CLG_GFX_UNITID_MAPPING7__UNITID_LOW__SHIFT                                                        0x0
#define XPB_CLG_GFX_UNITID_MAPPING7__UNITID_VLD__SHIFT                                                        0x5
#define XPB_CLG_GFX_UNITID_MAPPING7__DEST_CLG_NUM__SHIFT                                                      0x6
#define XPB_CLG_GFX_UNITID_MAPPING7__UNITID_LOW_MASK                                                          0x0000001FL
#define XPB_CLG_GFX_UNITID_MAPPING7__UNITID_VLD_MASK                                                          0x00000020L
#define XPB_CLG_GFX_UNITID_MAPPING7__DEST_CLG_NUM_MASK                                                        0x000001C0L
//XPB_CLG_MM_UNITID_MAPPING0
#define XPB_CLG_MM_UNITID_MAPPING0__UNITID_LOW__SHIFT                                                         0x0
#define XPB_CLG_MM_UNITID_MAPPING0__UNITID_VLD__SHIFT                                                         0x5
#define XPB_CLG_MM_UNITID_MAPPING0__DEST_CLG_NUM__SHIFT                                                       0x6
#define XPB_CLG_MM_UNITID_MAPPING0__UNITID_LOW_MASK                                                           0x0000001FL
#define XPB_CLG_MM_UNITID_MAPPING0__UNITID_VLD_MASK                                                           0x00000020L
#define XPB_CLG_MM_UNITID_MAPPING0__DEST_CLG_NUM_MASK                                                         0x000001C0L
//XPB_CLG_MM_UNITID_MAPPING1
#define XPB_CLG_MM_UNITID_MAPPING1__UNITID_LOW__SHIFT                                                         0x0
#define XPB_CLG_MM_UNITID_MAPPING1__UNITID_VLD__SHIFT                                                         0x5
#define XPB_CLG_MM_UNITID_MAPPING1__DEST_CLG_NUM__SHIFT                                                       0x6
#define XPB_CLG_MM_UNITID_MAPPING1__UNITID_LOW_MASK                                                           0x0000001FL
#define XPB_CLG_MM_UNITID_MAPPING1__UNITID_VLD_MASK                                                           0x00000020L
#define XPB_CLG_MM_UNITID_MAPPING1__DEST_CLG_NUM_MASK                                                         0x000001C0L
//XPB_CLG_MM_UNITID_MAPPING2
#define XPB_CLG_MM_UNITID_MAPPING2__UNITID_LOW__SHIFT                                                         0x0
#define XPB_CLG_MM_UNITID_MAPPING2__UNITID_VLD__SHIFT                                                         0x5
#define XPB_CLG_MM_UNITID_MAPPING2__DEST_CLG_NUM__SHIFT                                                       0x6
#define XPB_CLG_MM_UNITID_MAPPING2__UNITID_LOW_MASK                                                           0x0000001FL
#define XPB_CLG_MM_UNITID_MAPPING2__UNITID_VLD_MASK                                                           0x00000020L
#define XPB_CLG_MM_UNITID_MAPPING2__DEST_CLG_NUM_MASK                                                         0x000001C0L
//XPB_CLG_MM_UNITID_MAPPING3
#define XPB_CLG_MM_UNITID_MAPPING3__UNITID_LOW__SHIFT                                                         0x0
#define XPB_CLG_MM_UNITID_MAPPING3__UNITID_VLD__SHIFT                                                         0x5
#define XPB_CLG_MM_UNITID_MAPPING3__DEST_CLG_NUM__SHIFT                                                       0x6
#define XPB_CLG_MM_UNITID_MAPPING3__UNITID_LOW_MASK                                                           0x0000001FL
#define XPB_CLG_MM_UNITID_MAPPING3__UNITID_VLD_MASK                                                           0x00000020L
#define XPB_CLG_MM_UNITID_MAPPING3__DEST_CLG_NUM_MASK                                                         0x000001C0L


// addressBlock: aid_athub_rpbdec
//RPB_PASSPW_CONF
#define RPB_PASSPW_CONF__XPB_PASSPW_OVERRIDE__SHIFT                                                           0x0
#define RPB_PASSPW_CONF__XPB_RSPPASSPW_OVERRIDE__SHIFT                                                        0x1
#define RPB_PASSPW_CONF__ATC_TR_PASSPW_OVERRIDE__SHIFT                                                        0x2
#define RPB_PASSPW_CONF__ATC_PAGE_PASSPW_OVERRIDE__SHIFT                                                      0x3
#define RPB_PASSPW_CONF__WR_PASSPW_OVERRIDE__SHIFT                                                            0x4
#define RPB_PASSPW_CONF__RD_PASSPW_OVERRIDE__SHIFT                                                            0x5
#define RPB_PASSPW_CONF__WR_RSPPASSPW_OVERRIDE__SHIFT                                                         0x6
#define RPB_PASSPW_CONF__RD_RSPPASSPW_OVERRIDE__SHIFT                                                         0x7
#define RPB_PASSPW_CONF__ATC_RSPPASSPW_OVERRIDE__SHIFT                                                        0x8
#define RPB_PASSPW_CONF__ATOMIC_PASSPW_OVERRIDE__SHIFT                                                        0x9
#define RPB_PASSPW_CONF__ATOMIC_RSPPASSPW_OVERRIDE__SHIFT                                                     0xa
#define RPB_PASSPW_CONF__ATC_TR_PASSPW_OVERRIDE_EN__SHIFT                                                     0xb
#define RPB_PASSPW_CONF__ATC_PAGE_PASSPW_OVERRIDE_EN__SHIFT                                                   0xc
#define RPB_PASSPW_CONF__ATC_RSPPASSPW_OVERRIDE_EN__SHIFT                                                     0xd
#define RPB_PASSPW_CONF__WRRSP_PASSPW_OVERRIDE__SHIFT                                                         0xe
#define RPB_PASSPW_CONF__WRRSP_PASSPW_OVERRIDE_EN__SHIFT                                                      0xf
#define RPB_PASSPW_CONF__RDRSP_PASSPW_OVERRIDE__SHIFT                                                         0x10
#define RPB_PASSPW_CONF__RDRSP_PASSPW_OVERRIDE_EN__SHIFT                                                      0x11
#define RPB_PASSPW_CONF__XPB_PASSPW_OVERRIDE_MASK                                                             0x00000001L
#define RPB_PASSPW_CONF__XPB_RSPPASSPW_OVERRIDE_MASK                                                          0x00000002L
#define RPB_PASSPW_CONF__ATC_TR_PASSPW_OVERRIDE_MASK                                                          0x00000004L
#define RPB_PASSPW_CONF__ATC_PAGE_PASSPW_OVERRIDE_MASK                                                        0x00000008L
#define RPB_PASSPW_CONF__WR_PASSPW_OVERRIDE_MASK                                                              0x00000010L
#define RPB_PASSPW_CONF__RD_PASSPW_OVERRIDE_MASK                                                              0x00000020L
#define RPB_PASSPW_CONF__WR_RSPPASSPW_OVERRIDE_MASK                                                           0x00000040L
#define RPB_PASSPW_CONF__RD_RSPPASSPW_OVERRIDE_MASK                                                           0x00000080L
#define RPB_PASSPW_CONF__ATC_RSPPASSPW_OVERRIDE_MASK                                                          0x00000100L
#define RPB_PASSPW_CONF__ATOMIC_PASSPW_OVERRIDE_MASK                                                          0x00000200L
#define RPB_PASSPW_CONF__ATOMIC_RSPPASSPW_OVERRIDE_MASK                                                       0x00000400L
#define RPB_PASSPW_CONF__ATC_TR_PASSPW_OVERRIDE_EN_MASK                                                       0x00000800L
#define RPB_PASSPW_CONF__ATC_PAGE_PASSPW_OVERRIDE_EN_MASK                                                     0x00001000L
#define RPB_PASSPW_CONF__ATC_RSPPASSPW_OVERRIDE_EN_MASK                                                       0x00002000L
#define RPB_PASSPW_CONF__WRRSP_PASSPW_OVERRIDE_MASK                                                           0x00004000L
#define RPB_PASSPW_CONF__WRRSP_PASSPW_OVERRIDE_EN_MASK                                                        0x00008000L
#define RPB_PASSPW_CONF__RDRSP_PASSPW_OVERRIDE_MASK                                                           0x00010000L
#define RPB_PASSPW_CONF__RDRSP_PASSPW_OVERRIDE_EN_MASK                                                        0x00020000L
//RPB_BLOCKLEVEL_CONF
#define RPB_BLOCKLEVEL_CONF__XPB_BLOCKLEVEL_OVERRIDE__SHIFT                                                   0x0
#define RPB_BLOCKLEVEL_CONF__ATC_VC0_TR_BLOCKLEVEL__SHIFT                                                     0x2
#define RPB_BLOCKLEVEL_CONF__ATC_VC5_TR_BLOCKLEVEL__SHIFT                                                     0x4
#define RPB_BLOCKLEVEL_CONF__ATC_PAGE_BLOCKLEVEL__SHIFT                                                       0x6
#define RPB_BLOCKLEVEL_CONF__ATC_INV_BLOCKLEVEL__SHIFT                                                        0x8
#define RPB_BLOCKLEVEL_CONF__IO_WR_BLOCKLEVEL_OVERRIDE__SHIFT                                                 0xa
#define RPB_BLOCKLEVEL_CONF__IO_RD_BLOCKLEVEL_OVERRIDE__SHIFT                                                 0xc
#define RPB_BLOCKLEVEL_CONF__ATOMIC_BLOCKLEVEL_OVERRIDE__SHIFT                                                0xe
#define RPB_BLOCKLEVEL_CONF__XPB_BLOCKLEVEL_OVERRIDE_EN__SHIFT                                                0x10
#define RPB_BLOCKLEVEL_CONF__IO_WR_BLOCKLEVEL_OVERRIDE_EN__SHIFT                                              0x11
#define RPB_BLOCKLEVEL_CONF__IO_RD_BLOCKLEVEL_OVERRIDE_EN__SHIFT                                              0x12
#define RPB_BLOCKLEVEL_CONF__ATOMIC_BLOCKLEVEL_OVERRIDE_EN__SHIFT                                             0x13
#define RPB_BLOCKLEVEL_CONF__XPB_BLOCKLEVEL_OVERRIDE_MASK                                                     0x00000003L
#define RPB_BLOCKLEVEL_CONF__ATC_VC0_TR_BLOCKLEVEL_MASK                                                       0x0000000CL
#define RPB_BLOCKLEVEL_CONF__ATC_VC5_TR_BLOCKLEVEL_MASK                                                       0x00000030L
#define RPB_BLOCKLEVEL_CONF__ATC_PAGE_BLOCKLEVEL_MASK                                                         0x000000C0L
#define RPB_BLOCKLEVEL_CONF__ATC_INV_BLOCKLEVEL_MASK                                                          0x00000300L
#define RPB_BLOCKLEVEL_CONF__IO_WR_BLOCKLEVEL_OVERRIDE_MASK                                                   0x00000C00L
#define RPB_BLOCKLEVEL_CONF__IO_RD_BLOCKLEVEL_OVERRIDE_MASK                                                   0x00003000L
#define RPB_BLOCKLEVEL_CONF__ATOMIC_BLOCKLEVEL_OVERRIDE_MASK                                                  0x0000C000L
#define RPB_BLOCKLEVEL_CONF__XPB_BLOCKLEVEL_OVERRIDE_EN_MASK                                                  0x00010000L
#define RPB_BLOCKLEVEL_CONF__IO_WR_BLOCKLEVEL_OVERRIDE_EN_MASK                                                0x00020000L
#define RPB_BLOCKLEVEL_CONF__IO_RD_BLOCKLEVEL_OVERRIDE_EN_MASK                                                0x00040000L
#define RPB_BLOCKLEVEL_CONF__ATOMIC_BLOCKLEVEL_OVERRIDE_EN_MASK                                               0x00080000L
//RPB_TAG_CONF
#define RPB_TAG_CONF__RPB_ATS_VC0_TR__SHIFT                                                                   0x0
#define RPB_TAG_CONF__RPB_ATS_VC5_TR__SHIFT                                                                   0xa
#define RPB_TAG_CONF__RPB_ATS_PR__SHIFT                                                                       0x14
#define RPB_TAG_CONF__RPB_ATS_VC0_TR_MASK                                                                     0x000003FFL
#define RPB_TAG_CONF__RPB_ATS_VC5_TR_MASK                                                                     0x000FFC00L
#define RPB_TAG_CONF__RPB_ATS_PR_MASK                                                                         0x3FF00000L
//RPB_TAG_CONF2
#define RPB_TAG_CONF2__RPB_IO_WR__SHIFT                                                                       0x0
#define RPB_TAG_CONF2__RPB_IO_MAX_LIMIT__SHIFT                                                                0xa
#define RPB_TAG_CONF2__RPB_IO_RD_MARGIN__SHIFT                                                                0x15
#define RPB_TAG_CONF2__RPB_IO_WR_MASK                                                                         0x000003FFL
#define RPB_TAG_CONF2__RPB_IO_MAX_LIMIT_MASK                                                                  0x001FFC00L
#define RPB_TAG_CONF2__RPB_IO_RD_MARGIN_MASK                                                                  0xFFE00000L
//RPB_ARB_CNTL
#define RPB_ARB_CNTL__RD_SWITCH_NUM__SHIFT                                                                    0x0
#define RPB_ARB_CNTL__WR_SWITCH_NUM__SHIFT                                                                    0x8
#define RPB_ARB_CNTL__ATC_TR_SWITCH_NUM__SHIFT                                                                0x10
#define RPB_ARB_CNTL__ARB_MODE__SHIFT                                                                         0x18
#define RPB_ARB_CNTL__SWITCH_NUM_MODE__SHIFT                                                                  0x19
#define RPB_ARB_CNTL__RD_SWITCH_NUM_MASK                                                                      0x000000FFL
#define RPB_ARB_CNTL__WR_SWITCH_NUM_MASK                                                                      0x0000FF00L
#define RPB_ARB_CNTL__ATC_TR_SWITCH_NUM_MASK                                                                  0x00FF0000L
#define RPB_ARB_CNTL__ARB_MODE_MASK                                                                           0x01000000L
#define RPB_ARB_CNTL__SWITCH_NUM_MODE_MASK                                                                    0x02000000L
//RPB_ARB_CNTL2
#define RPB_ARB_CNTL2__P2P_SWITCH_NUM__SHIFT                                                                  0x0
#define RPB_ARB_CNTL2__ATOMIC_SWITCH_NUM__SHIFT                                                               0x8
#define RPB_ARB_CNTL2__ATC_PAGE_SWITCH_NUM__SHIFT                                                             0x10
#define RPB_ARB_CNTL2__P2P_SWITCH_NUM_MASK                                                                    0x000000FFL
#define RPB_ARB_CNTL2__ATOMIC_SWITCH_NUM_MASK                                                                 0x0000FF00L
#define RPB_ARB_CNTL2__ATC_PAGE_SWITCH_NUM_MASK                                                               0x00FF0000L
//RPB_BIF_CNTL
#define RPB_BIF_CNTL__ARB_MODE__SHIFT                                                                         0x0
#define RPB_BIF_CNTL__DRAIN_VC_NUM__SHIFT                                                                     0x1
#define RPB_BIF_CNTL__SWITCH_ENABLE__SHIFT                                                                    0x3
#define RPB_BIF_CNTL__SWITCH_THRESHOLD__SHIFT                                                                 0x4
#define RPB_BIF_CNTL__PAGE_PRI_EN__SHIFT                                                                      0xc
#define RPB_BIF_CNTL__VC0TR_PRI_EN__SHIFT                                                                     0xd
#define RPB_BIF_CNTL__VC5TR_PRI_EN__SHIFT                                                                     0xe
#define RPB_BIF_CNTL__VC0_CHAINED_OVERRIDE__SHIFT                                                             0xf
#define RPB_BIF_CNTL__ARB_MODE_MASK                                                                           0x00000001L
#define RPB_BIF_CNTL__DRAIN_VC_NUM_MASK                                                                       0x00000006L
#define RPB_BIF_CNTL__SWITCH_ENABLE_MASK                                                                      0x00000008L
#define RPB_BIF_CNTL__SWITCH_THRESHOLD_MASK                                                                   0x00000FF0L
#define RPB_BIF_CNTL__PAGE_PRI_EN_MASK                                                                        0x00001000L
#define RPB_BIF_CNTL__VC0TR_PRI_EN_MASK                                                                       0x00002000L
#define RPB_BIF_CNTL__VC5TR_PRI_EN_MASK                                                                       0x00004000L
#define RPB_BIF_CNTL__VC0_CHAINED_OVERRIDE_MASK                                                               0x00008000L
//RPB_BIF_CNTL2
#define RPB_BIF_CNTL2__VC0_SWITCH_NUM__SHIFT                                                                  0x0
#define RPB_BIF_CNTL2__VC1_SWITCH_NUM__SHIFT                                                                  0x8
#define RPB_BIF_CNTL2__VC5_SWITCH_NUM__SHIFT                                                                  0x10
#define RPB_BIF_CNTL2__VC0_SWITCH_NUM_MASK                                                                    0x000000FFL
#define RPB_BIF_CNTL2__VC1_SWITCH_NUM_MASK                                                                    0x0000FF00L
#define RPB_BIF_CNTL2__VC5_SWITCH_NUM_MASK                                                                    0x00FF0000L
//RPB_PERF_COUNTER_CNTL
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_SELECT__SHIFT                                                     0x0
#define RPB_PERF_COUNTER_CNTL__CLEAR_SELECTED_PERF_COUNTER__SHIFT                                             0x2
#define RPB_PERF_COUNTER_CNTL__CLEAR_ALL_PERF_COUNTERS__SHIFT                                                 0x3
#define RPB_PERF_COUNTER_CNTL__STOP_ON_COUNTER_SATURATION__SHIFT                                              0x4
#define RPB_PERF_COUNTER_CNTL__ENABLE_PERF_COUNTERS__SHIFT                                                    0x5
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_ASSIGN_0__SHIFT                                                   0x9
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_ASSIGN_1__SHIFT                                                   0xe
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_ASSIGN_2__SHIFT                                                   0x13
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_ASSIGN_3__SHIFT                                                   0x18
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_SELECT_MASK                                                       0x00000003L
#define RPB_PERF_COUNTER_CNTL__CLEAR_SELECTED_PERF_COUNTER_MASK                                               0x00000004L
#define RPB_PERF_COUNTER_CNTL__CLEAR_ALL_PERF_COUNTERS_MASK                                                   0x00000008L
#define RPB_PERF_COUNTER_CNTL__STOP_ON_COUNTER_SATURATION_MASK                                                0x00000010L
#define RPB_PERF_COUNTER_CNTL__ENABLE_PERF_COUNTERS_MASK                                                      0x000001E0L
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_ASSIGN_0_MASK                                                     0x00003E00L
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_ASSIGN_1_MASK                                                     0x0007C000L
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_ASSIGN_2_MASK                                                     0x00F80000L
#define RPB_PERF_COUNTER_CNTL__PERF_COUNTER_ASSIGN_3_MASK                                                     0x1F000000L
//RPB_DEINTRLV_COMBINE_CNTL
#define RPB_DEINTRLV_COMBINE_CNTL__WC_CHAINED_FLUSH_TIMER__SHIFT                                              0x0
#define RPB_DEINTRLV_COMBINE_CNTL__WC_CHAINED_BREAK_EN__SHIFT                                                 0x4
#define RPB_DEINTRLV_COMBINE_CNTL__WC_HANDLE_CHECK_DISABLE__SHIFT                                             0x5
#define RPB_DEINTRLV_COMBINE_CNTL__WC_CLI_INTLV_EN__SHIFT                                                     0x6
#define RPB_DEINTRLV_COMBINE_CNTL__WC_CHAINED_FLUSH_TIMER_MASK                                                0x0000000FL
#define RPB_DEINTRLV_COMBINE_CNTL__WC_CHAINED_BREAK_EN_MASK                                                   0x00000010L
#define RPB_DEINTRLV_COMBINE_CNTL__WC_HANDLE_CHECK_DISABLE_MASK                                               0x00000020L
#define RPB_DEINTRLV_COMBINE_CNTL__WC_CLI_INTLV_EN_MASK                                                       0x00000040L
//RPB_VC_SWITCH_RDWR
#define RPB_VC_SWITCH_RDWR__MODE__SHIFT                                                                       0x0
#define RPB_VC_SWITCH_RDWR__NUM_RD__SHIFT                                                                     0x2
#define RPB_VC_SWITCH_RDWR__NUM_WR__SHIFT                                                                     0xa
#define RPB_VC_SWITCH_RDWR__XPB_RDREQ_CRD__SHIFT                                                              0x12
#define RPB_VC_SWITCH_RDWR__MODE_MASK                                                                         0x00000003L
#define RPB_VC_SWITCH_RDWR__NUM_RD_MASK                                                                       0x000003FCL
#define RPB_VC_SWITCH_RDWR__NUM_WR_MASK                                                                       0x0003FC00L
#define RPB_VC_SWITCH_RDWR__XPB_RDREQ_CRD_MASK                                                                0x03FC0000L
//RPB_PERFCOUNTER_LO
#define RPB_PERFCOUNTER_LO__COUNTER_LO__SHIFT                                                                 0x0
#define RPB_PERFCOUNTER_LO__COUNTER_LO_MASK                                                                   0xFFFFFFFFL
//RPB_PERFCOUNTER_HI
#define RPB_PERFCOUNTER_HI__COUNTER_HI__SHIFT                                                                 0x0
#define RPB_PERFCOUNTER_HI__COMPARE_VALUE__SHIFT                                                              0x10
#define RPB_PERFCOUNTER_HI__COUNTER_HI_MASK                                                                   0x0000FFFFL
#define RPB_PERFCOUNTER_HI__COMPARE_VALUE_MASK                                                                0xFFFF0000L
//RPB_PERFCOUNTER0_CFG
#define RPB_PERFCOUNTER0_CFG__PERF_SEL__SHIFT                                                                 0x0
#define RPB_PERFCOUNTER0_CFG__PERF_SEL_END__SHIFT                                                             0x8
#define RPB_PERFCOUNTER0_CFG__PERF_MODE__SHIFT                                                                0x18
#define RPB_PERFCOUNTER0_CFG__ENABLE__SHIFT                                                                   0x1c
#define RPB_PERFCOUNTER0_CFG__CLEAR__SHIFT                                                                    0x1d
#define RPB_PERFCOUNTER0_CFG__PERF_SEL_MASK                                                                   0x000000FFL
#define RPB_PERFCOUNTER0_CFG__PERF_SEL_END_MASK                                                               0x0000FF00L
#define RPB_PERFCOUNTER0_CFG__PERF_MODE_MASK                                                                  0x0F000000L
#define RPB_PERFCOUNTER0_CFG__ENABLE_MASK                                                                     0x10000000L
#define RPB_PERFCOUNTER0_CFG__CLEAR_MASK                                                                      0x20000000L
//RPB_PERFCOUNTER1_CFG
#define RPB_PERFCOUNTER1_CFG__PERF_SEL__SHIFT                                                                 0x0
#define RPB_PERFCOUNTER1_CFG__PERF_SEL_END__SHIFT                                                             0x8
#define RPB_PERFCOUNTER1_CFG__PERF_MODE__SHIFT                                                                0x18
#define RPB_PERFCOUNTER1_CFG__ENABLE__SHIFT                                                                   0x1c
#define RPB_PERFCOUNTER1_CFG__CLEAR__SHIFT                                                                    0x1d
#define RPB_PERFCOUNTER1_CFG__PERF_SEL_MASK                                                                   0x000000FFL
#define RPB_PERFCOUNTER1_CFG__PERF_SEL_END_MASK                                                               0x0000FF00L
#define RPB_PERFCOUNTER1_CFG__PERF_MODE_MASK                                                                  0x0F000000L
#define RPB_PERFCOUNTER1_CFG__ENABLE_MASK                                                                     0x10000000L
#define RPB_PERFCOUNTER1_CFG__CLEAR_MASK                                                                      0x20000000L
//RPB_PERFCOUNTER2_CFG
#define RPB_PERFCOUNTER2_CFG__PERF_SEL__SHIFT                                                                 0x0
#define RPB_PERFCOUNTER2_CFG__PERF_SEL_END__SHIFT                                                             0x8
#define RPB_PERFCOUNTER2_CFG__PERF_MODE__SHIFT                                                                0x18
#define RPB_PERFCOUNTER2_CFG__ENABLE__SHIFT                                                                   0x1c
#define RPB_PERFCOUNTER2_CFG__CLEAR__SHIFT                                                                    0x1d
#define RPB_PERFCOUNTER2_CFG__PERF_SEL_MASK                                                                   0x000000FFL
#define RPB_PERFCOUNTER2_CFG__PERF_SEL_END_MASK                                                               0x0000FF00L
#define RPB_PERFCOUNTER2_CFG__PERF_MODE_MASK                                                                  0x0F000000L
#define RPB_PERFCOUNTER2_CFG__ENABLE_MASK                                                                     0x10000000L
#define RPB_PERFCOUNTER2_CFG__CLEAR_MASK                                                                      0x20000000L
//RPB_PERFCOUNTER3_CFG
#define RPB_PERFCOUNTER3_CFG__PERF_SEL__SHIFT                                                                 0x0
#define RPB_PERFCOUNTER3_CFG__PERF_SEL_END__SHIFT                                                             0x8
#define RPB_PERFCOUNTER3_CFG__PERF_MODE__SHIFT                                                                0x18
#define RPB_PERFCOUNTER3_CFG__ENABLE__SHIFT                                                                   0x1c
#define RPB_PERFCOUNTER3_CFG__CLEAR__SHIFT                                                                    0x1d
#define RPB_PERFCOUNTER3_CFG__PERF_SEL_MASK                                                                   0x000000FFL
#define RPB_PERFCOUNTER3_CFG__PERF_SEL_END_MASK                                                               0x0000FF00L
#define RPB_PERFCOUNTER3_CFG__PERF_MODE_MASK                                                                  0x0F000000L
#define RPB_PERFCOUNTER3_CFG__ENABLE_MASK                                                                     0x10000000L
#define RPB_PERFCOUNTER3_CFG__CLEAR_MASK                                                                      0x20000000L
//RPB_PERFCOUNTER_RSLT_CNTL
#define RPB_PERFCOUNTER_RSLT_CNTL__PERF_COUNTER_SELECT__SHIFT                                                 0x0
#define RPB_PERFCOUNTER_RSLT_CNTL__START_TRIGGER__SHIFT                                                       0x8
#define RPB_PERFCOUNTER_RSLT_CNTL__STOP_TRIGGER__SHIFT                                                        0x10
#define RPB_PERFCOUNTER_RSLT_CNTL__ENABLE_ANY__SHIFT                                                          0x18
#define RPB_PERFCOUNTER_RSLT_CNTL__CLEAR_ALL__SHIFT                                                           0x19
#define RPB_PERFCOUNTER_RSLT_CNTL__STOP_ALL_ON_SATURATE__SHIFT                                                0x1a
#define RPB_PERFCOUNTER_RSLT_CNTL__PERF_COUNTER_SELECT_MASK                                                   0x0000000FL
#define RPB_PERFCOUNTER_RSLT_CNTL__START_TRIGGER_MASK                                                         0x0000FF00L
#define RPB_PERFCOUNTER_RSLT_CNTL__STOP_TRIGGER_MASK                                                          0x00FF0000L
#define RPB_PERFCOUNTER_RSLT_CNTL__ENABLE_ANY_MASK                                                            0x01000000L
#define RPB_PERFCOUNTER_RSLT_CNTL__CLEAR_ALL_MASK                                                             0x02000000L
#define RPB_PERFCOUNTER_RSLT_CNTL__STOP_ALL_ON_SATURATE_MASK                                                  0x04000000L
//RPB_ATS_CNTL
#define RPB_ATS_CNTL__PAGE_MIN_LATENCY_ENABLE__SHIFT                                                          0x0
#define RPB_ATS_CNTL__TR_MIN_LATENCY_ENABLE__SHIFT                                                            0x1
#define RPB_ATS_CNTL__SWITCH_THRESHOLD__SHIFT                                                                 0x2
#define RPB_ATS_CNTL__TIME_SLICE__SHIFT                                                                       0x7
#define RPB_ATS_CNTL__ATCTR_SWITCH_NUM__SHIFT                                                                 0xf
#define RPB_ATS_CNTL__ATCPAGE_SWITCH_NUM__SHIFT                                                               0x13
#define RPB_ATS_CNTL__WR_AT__SHIFT                                                                            0x17
#define RPB_ATS_CNTL__INVAL_COM_CMD__SHIFT                                                                    0x19
#define RPB_ATS_CNTL__PAGE_MIN_LATENCY_ENABLE_MASK                                                            0x00000001L
#define RPB_ATS_CNTL__TR_MIN_LATENCY_ENABLE_MASK                                                              0x00000002L
#define RPB_ATS_CNTL__SWITCH_THRESHOLD_MASK                                                                   0x0000007CL
#define RPB_ATS_CNTL__TIME_SLICE_MASK                                                                         0x00007F80L
#define RPB_ATS_CNTL__ATCTR_SWITCH_NUM_MASK                                                                   0x00078000L
#define RPB_ATS_CNTL__ATCPAGE_SWITCH_NUM_MASK                                                                 0x00780000L
#define RPB_ATS_CNTL__WR_AT_MASK                                                                              0x01800000L
#define RPB_ATS_CNTL__INVAL_COM_CMD_MASK                                                                      0x7E000000L
//RPB_ATS_CNTL2
#define RPB_ATS_CNTL2__TRANS_CMD__SHIFT                                                                       0x0
#define RPB_ATS_CNTL2__PAGE_REQ_CMD__SHIFT                                                                    0x6
#define RPB_ATS_CNTL2__PAGE_ROUTING_CODE__SHIFT                                                               0xc
#define RPB_ATS_CNTL2__INVAL_COM_ROUTING_CODE__SHIFT                                                          0xf
#define RPB_ATS_CNTL2__VENDOR_ID__SHIFT                                                                       0x12
#define RPB_ATS_CNTL2__MM_TRANS_VC5_ENABLE__SHIFT                                                             0x14
#define RPB_ATS_CNTL2__GC_TRANS_VC5_ENABLE__SHIFT                                                             0x15
#define RPB_ATS_CNTL2__RPB_VC5_CRD__SHIFT                                                                     0x16
#define RPB_ATS_CNTL2__TRANS_CMD_MASK                                                                         0x0000003FL
#define RPB_ATS_CNTL2__PAGE_REQ_CMD_MASK                                                                      0x00000FC0L
#define RPB_ATS_CNTL2__PAGE_ROUTING_CODE_MASK                                                                 0x00007000L
#define RPB_ATS_CNTL2__INVAL_COM_ROUTING_CODE_MASK                                                            0x00038000L
#define RPB_ATS_CNTL2__VENDOR_ID_MASK                                                                         0x000C0000L
#define RPB_ATS_CNTL2__MM_TRANS_VC5_ENABLE_MASK                                                               0x00100000L
#define RPB_ATS_CNTL2__GC_TRANS_VC5_ENABLE_MASK                                                               0x00200000L
#define RPB_ATS_CNTL2__RPB_VC5_CRD_MASK                                                                       0x07C00000L
//RPB_SDPPORT_CNTL
#define RPB_SDPPORT_CNTL__NBIF_DMA_SELF_ACTIVATE__SHIFT                                                       0x0
#define RPB_SDPPORT_CNTL__NBIF_DMA_CFG_MODE__SHIFT                                                            0x1
#define RPB_SDPPORT_CNTL__NBIF_DMA_ENABLE_REISSUE_CREDIT__SHIFT                                               0x3
#define RPB_SDPPORT_CNTL__NBIF_DMA_ENABLE_SATURATE_COUNTER__SHIFT                                             0x4
#define RPB_SDPPORT_CNTL__NBIF_DMA_ENABLE_DISRUPT_FULLDIS__SHIFT                                              0x5
#define RPB_SDPPORT_CNTL__NBIF_DMA_HALT_THRESHOLD__SHIFT                                                      0x6
#define RPB_SDPPORT_CNTL__NBIF_HST_SELF_ACTIVATE__SHIFT                                                       0xa
#define RPB_SDPPORT_CNTL__NBIF_HST_CFG_MODE__SHIFT                                                            0xb
#define RPB_SDPPORT_CNTL__NBIF_HST_ENABLE_REISSUE_CREDIT__SHIFT                                               0xd
#define RPB_SDPPORT_CNTL__NBIF_HST_ENABLE_SATURATE_COUNTER__SHIFT                                             0xe
#define RPB_SDPPORT_CNTL__NBIF_HST_ENABLE_DISRUPT_FULLDIS__SHIFT                                              0xf
#define RPB_SDPPORT_CNTL__NBIF_HST_HALT_THRESHOLD__SHIFT                                                      0x10
#define RPB_SDPPORT_CNTL__NBIF_HST_PASSIVE_MODE__SHIFT                                                        0x14
#define RPB_SDPPORT_CNTL__NBIF_HST_QUICK_COMACK__SHIFT                                                        0x15
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_RDRSPCKEN__SHIFT                                                         0x16
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_RDRSPCKENRCV__SHIFT                                                      0x17
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_RDRSPDATACKEN__SHIFT                                                     0x18
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_RDRSPDATACKENRCV__SHIFT                                                  0x19
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_WRRSPCKEN__SHIFT                                                         0x1a
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_WRRSPCKENRCV__SHIFT                                                      0x1b
#define RPB_SDPPORT_CNTL__DF_HALT_THRESHOLD__SHIFT                                                            0x1c
#define RPB_SDPPORT_CNTL__NBIF_DMA_SELF_ACTIVATE_MASK                                                         0x00000001L
#define RPB_SDPPORT_CNTL__NBIF_DMA_CFG_MODE_MASK                                                              0x00000006L
#define RPB_SDPPORT_CNTL__NBIF_DMA_ENABLE_REISSUE_CREDIT_MASK                                                 0x00000008L
#define RPB_SDPPORT_CNTL__NBIF_DMA_ENABLE_SATURATE_COUNTER_MASK                                               0x00000010L
#define RPB_SDPPORT_CNTL__NBIF_DMA_ENABLE_DISRUPT_FULLDIS_MASK                                                0x00000020L
#define RPB_SDPPORT_CNTL__NBIF_DMA_HALT_THRESHOLD_MASK                                                        0x000003C0L
#define RPB_SDPPORT_CNTL__NBIF_HST_SELF_ACTIVATE_MASK                                                         0x00000400L
#define RPB_SDPPORT_CNTL__NBIF_HST_CFG_MODE_MASK                                                              0x00001800L
#define RPB_SDPPORT_CNTL__NBIF_HST_ENABLE_REISSUE_CREDIT_MASK                                                 0x00002000L
#define RPB_SDPPORT_CNTL__NBIF_HST_ENABLE_SATURATE_COUNTER_MASK                                               0x00004000L
#define RPB_SDPPORT_CNTL__NBIF_HST_ENABLE_DISRUPT_FULLDIS_MASK                                                0x00008000L
#define RPB_SDPPORT_CNTL__NBIF_HST_HALT_THRESHOLD_MASK                                                        0x000F0000L
#define RPB_SDPPORT_CNTL__NBIF_HST_PASSIVE_MODE_MASK                                                          0x00100000L
#define RPB_SDPPORT_CNTL__NBIF_HST_QUICK_COMACK_MASK                                                          0x00200000L
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_RDRSPCKEN_MASK                                                           0x00400000L
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_RDRSPCKENRCV_MASK                                                        0x00800000L
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_RDRSPDATACKEN_MASK                                                       0x01000000L
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_RDRSPDATACKENRCV_MASK                                                    0x02000000L
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_WRRSPCKEN_MASK                                                           0x04000000L
#define RPB_SDPPORT_CNTL__DF_SDPVDCI_WRRSPCKENRCV_MASK                                                        0x08000000L
#define RPB_SDPPORT_CNTL__DF_HALT_THRESHOLD_MASK                                                              0xF0000000L

#endif
