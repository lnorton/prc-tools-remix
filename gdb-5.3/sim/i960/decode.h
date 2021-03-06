/* Decode header for i960base.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996, 1997, 1998, 1999 Free Software Foundation, Inc.

This file is part of the GNU Simulators.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

*/

#ifndef I960BASE_DECODE_H
#define I960BASE_DECODE_H

extern const IDESC *i960base_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_INT,
                                  ARGBUF *);
extern void i960base_init_idesc_table (SIM_CPU *);
extern void i960base_sem_init_idesc_table (SIM_CPU *);
extern void i960base_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family i960base.  */
typedef enum i960base_insn_type {
  I960BASE_INSN_X_INVALID, I960BASE_INSN_X_AFTER, I960BASE_INSN_X_BEFORE, I960BASE_INSN_X_CTI_CHAIN
 , I960BASE_INSN_X_CHAIN, I960BASE_INSN_X_BEGIN, I960BASE_INSN_MULO, I960BASE_INSN_MULO1
 , I960BASE_INSN_MULO2, I960BASE_INSN_MULO3, I960BASE_INSN_REMO, I960BASE_INSN_REMO1
 , I960BASE_INSN_REMO2, I960BASE_INSN_REMO3, I960BASE_INSN_DIVO, I960BASE_INSN_DIVO1
 , I960BASE_INSN_DIVO2, I960BASE_INSN_DIVO3, I960BASE_INSN_REMI, I960BASE_INSN_REMI1
 , I960BASE_INSN_REMI2, I960BASE_INSN_REMI3, I960BASE_INSN_DIVI, I960BASE_INSN_DIVI1
 , I960BASE_INSN_DIVI2, I960BASE_INSN_DIVI3, I960BASE_INSN_ADDO, I960BASE_INSN_ADDO1
 , I960BASE_INSN_ADDO2, I960BASE_INSN_ADDO3, I960BASE_INSN_SUBO, I960BASE_INSN_SUBO1
 , I960BASE_INSN_SUBO2, I960BASE_INSN_SUBO3, I960BASE_INSN_NOTBIT, I960BASE_INSN_NOTBIT1
 , I960BASE_INSN_NOTBIT2, I960BASE_INSN_NOTBIT3, I960BASE_INSN_AND, I960BASE_INSN_AND1
 , I960BASE_INSN_AND2, I960BASE_INSN_AND3, I960BASE_INSN_ANDNOT, I960BASE_INSN_ANDNOT1
 , I960BASE_INSN_ANDNOT2, I960BASE_INSN_ANDNOT3, I960BASE_INSN_SETBIT, I960BASE_INSN_SETBIT1
 , I960BASE_INSN_SETBIT2, I960BASE_INSN_SETBIT3, I960BASE_INSN_NOTAND, I960BASE_INSN_NOTAND1
 , I960BASE_INSN_NOTAND2, I960BASE_INSN_NOTAND3, I960BASE_INSN_XOR, I960BASE_INSN_XOR1
 , I960BASE_INSN_XOR2, I960BASE_INSN_XOR3, I960BASE_INSN_OR, I960BASE_INSN_OR1
 , I960BASE_INSN_OR2, I960BASE_INSN_OR3, I960BASE_INSN_NOR, I960BASE_INSN_NOR1
 , I960BASE_INSN_NOR2, I960BASE_INSN_NOR3, I960BASE_INSN_XNOR, I960BASE_INSN_XNOR1
 , I960BASE_INSN_XNOR2, I960BASE_INSN_XNOR3, I960BASE_INSN_NOT, I960BASE_INSN_NOT1
 , I960BASE_INSN_NOT2, I960BASE_INSN_NOT3, I960BASE_INSN_ORNOT, I960BASE_INSN_ORNOT1
 , I960BASE_INSN_ORNOT2, I960BASE_INSN_ORNOT3, I960BASE_INSN_CLRBIT, I960BASE_INSN_CLRBIT1
 , I960BASE_INSN_CLRBIT2, I960BASE_INSN_CLRBIT3, I960BASE_INSN_SHLO, I960BASE_INSN_SHLO1
 , I960BASE_INSN_SHLO2, I960BASE_INSN_SHLO3, I960BASE_INSN_SHRO, I960BASE_INSN_SHRO1
 , I960BASE_INSN_SHRO2, I960BASE_INSN_SHRO3, I960BASE_INSN_SHLI, I960BASE_INSN_SHLI1
 , I960BASE_INSN_SHLI2, I960BASE_INSN_SHLI3, I960BASE_INSN_SHRI, I960BASE_INSN_SHRI1
 , I960BASE_INSN_SHRI2, I960BASE_INSN_SHRI3, I960BASE_INSN_EMUL, I960BASE_INSN_EMUL1
 , I960BASE_INSN_EMUL2, I960BASE_INSN_EMUL3, I960BASE_INSN_MOV, I960BASE_INSN_MOV1
 , I960BASE_INSN_MOVL, I960BASE_INSN_MOVL1, I960BASE_INSN_MOVT, I960BASE_INSN_MOVT1
 , I960BASE_INSN_MOVQ, I960BASE_INSN_MOVQ1, I960BASE_INSN_MODPC, I960BASE_INSN_MODAC
 , I960BASE_INSN_LDA_OFFSET, I960BASE_INSN_LDA_INDIRECT_OFFSET, I960BASE_INSN_LDA_INDIRECT, I960BASE_INSN_LDA_INDIRECT_INDEX
 , I960BASE_INSN_LDA_DISP, I960BASE_INSN_LDA_INDIRECT_DISP, I960BASE_INSN_LDA_INDEX_DISP, I960BASE_INSN_LDA_INDIRECT_INDEX_DISP
 , I960BASE_INSN_LD_OFFSET, I960BASE_INSN_LD_INDIRECT_OFFSET, I960BASE_INSN_LD_INDIRECT, I960BASE_INSN_LD_INDIRECT_INDEX
 , I960BASE_INSN_LD_DISP, I960BASE_INSN_LD_INDIRECT_DISP, I960BASE_INSN_LD_INDEX_DISP, I960BASE_INSN_LD_INDIRECT_INDEX_DISP
 , I960BASE_INSN_LDOB_OFFSET, I960BASE_INSN_LDOB_INDIRECT_OFFSET, I960BASE_INSN_LDOB_INDIRECT, I960BASE_INSN_LDOB_INDIRECT_INDEX
 , I960BASE_INSN_LDOB_DISP, I960BASE_INSN_LDOB_INDIRECT_DISP, I960BASE_INSN_LDOB_INDEX_DISP, I960BASE_INSN_LDOB_INDIRECT_INDEX_DISP
 , I960BASE_INSN_LDOS_OFFSET, I960BASE_INSN_LDOS_INDIRECT_OFFSET, I960BASE_INSN_LDOS_INDIRECT, I960BASE_INSN_LDOS_INDIRECT_INDEX
 , I960BASE_INSN_LDOS_DISP, I960BASE_INSN_LDOS_INDIRECT_DISP, I960BASE_INSN_LDOS_INDEX_DISP, I960BASE_INSN_LDOS_INDIRECT_INDEX_DISP
 , I960BASE_INSN_LDIB_OFFSET, I960BASE_INSN_LDIB_INDIRECT_OFFSET, I960BASE_INSN_LDIB_INDIRECT, I960BASE_INSN_LDIB_INDIRECT_INDEX
 , I960BASE_INSN_LDIB_DISP, I960BASE_INSN_LDIB_INDIRECT_DISP, I960BASE_INSN_LDIB_INDEX_DISP, I960BASE_INSN_LDIB_INDIRECT_INDEX_DISP
 , I960BASE_INSN_LDIS_OFFSET, I960BASE_INSN_LDIS_INDIRECT_OFFSET, I960BASE_INSN_LDIS_INDIRECT, I960BASE_INSN_LDIS_INDIRECT_INDEX
 , I960BASE_INSN_LDIS_DISP, I960BASE_INSN_LDIS_INDIRECT_DISP, I960BASE_INSN_LDIS_INDEX_DISP, I960BASE_INSN_LDIS_INDIRECT_INDEX_DISP
 , I960BASE_INSN_LDL_OFFSET, I960BASE_INSN_LDL_INDIRECT_OFFSET, I960BASE_INSN_LDL_INDIRECT, I960BASE_INSN_LDL_INDIRECT_INDEX
 , I960BASE_INSN_LDL_DISP, I960BASE_INSN_LDL_INDIRECT_DISP, I960BASE_INSN_LDL_INDEX_DISP, I960BASE_INSN_LDL_INDIRECT_INDEX_DISP
 , I960BASE_INSN_LDT_OFFSET, I960BASE_INSN_LDT_INDIRECT_OFFSET, I960BASE_INSN_LDT_INDIRECT, I960BASE_INSN_LDT_INDIRECT_INDEX
 , I960BASE_INSN_LDT_DISP, I960BASE_INSN_LDT_INDIRECT_DISP, I960BASE_INSN_LDT_INDEX_DISP, I960BASE_INSN_LDT_INDIRECT_INDEX_DISP
 , I960BASE_INSN_LDQ_OFFSET, I960BASE_INSN_LDQ_INDIRECT_OFFSET, I960BASE_INSN_LDQ_INDIRECT, I960BASE_INSN_LDQ_INDIRECT_INDEX
 , I960BASE_INSN_LDQ_DISP, I960BASE_INSN_LDQ_INDIRECT_DISP, I960BASE_INSN_LDQ_INDEX_DISP, I960BASE_INSN_LDQ_INDIRECT_INDEX_DISP
 , I960BASE_INSN_ST_OFFSET, I960BASE_INSN_ST_INDIRECT_OFFSET, I960BASE_INSN_ST_INDIRECT, I960BASE_INSN_ST_INDIRECT_INDEX
 , I960BASE_INSN_ST_DISP, I960BASE_INSN_ST_INDIRECT_DISP, I960BASE_INSN_ST_INDEX_DISP, I960BASE_INSN_ST_INDIRECT_INDEX_DISP
 , I960BASE_INSN_STOB_OFFSET, I960BASE_INSN_STOB_INDIRECT_OFFSET, I960BASE_INSN_STOB_INDIRECT, I960BASE_INSN_STOB_INDIRECT_INDEX
 , I960BASE_INSN_STOB_DISP, I960BASE_INSN_STOB_INDIRECT_DISP, I960BASE_INSN_STOB_INDEX_DISP, I960BASE_INSN_STOB_INDIRECT_INDEX_DISP
 , I960BASE_INSN_STOS_OFFSET, I960BASE_INSN_STOS_INDIRECT_OFFSET, I960BASE_INSN_STOS_INDIRECT, I960BASE_INSN_STOS_INDIRECT_INDEX
 , I960BASE_INSN_STOS_DISP, I960BASE_INSN_STOS_INDIRECT_DISP, I960BASE_INSN_STOS_INDEX_DISP, I960BASE_INSN_STOS_INDIRECT_INDEX_DISP
 , I960BASE_INSN_STL_OFFSET, I960BASE_INSN_STL_INDIRECT_OFFSET, I960BASE_INSN_STL_INDIRECT, I960BASE_INSN_STL_INDIRECT_INDEX
 , I960BASE_INSN_STL_DISP, I960BASE_INSN_STL_INDIRECT_DISP, I960BASE_INSN_STL_INDEX_DISP, I960BASE_INSN_STL_INDIRECT_INDEX_DISP
 , I960BASE_INSN_STT_OFFSET, I960BASE_INSN_STT_INDIRECT_OFFSET, I960BASE_INSN_STT_INDIRECT, I960BASE_INSN_STT_INDIRECT_INDEX
 , I960BASE_INSN_STT_DISP, I960BASE_INSN_STT_INDIRECT_DISP, I960BASE_INSN_STT_INDEX_DISP, I960BASE_INSN_STT_INDIRECT_INDEX_DISP
 , I960BASE_INSN_STQ_OFFSET, I960BASE_INSN_STQ_INDIRECT_OFFSET, I960BASE_INSN_STQ_INDIRECT, I960BASE_INSN_STQ_INDIRECT_INDEX
 , I960BASE_INSN_STQ_DISP, I960BASE_INSN_STQ_INDIRECT_DISP, I960BASE_INSN_STQ_INDEX_DISP, I960BASE_INSN_STQ_INDIRECT_INDEX_DISP
 , I960BASE_INSN_CMPOBE_REG, I960BASE_INSN_CMPOBE_LIT, I960BASE_INSN_CMPOBNE_REG, I960BASE_INSN_CMPOBNE_LIT
 , I960BASE_INSN_CMPOBL_REG, I960BASE_INSN_CMPOBL_LIT, I960BASE_INSN_CMPOBLE_REG, I960BASE_INSN_CMPOBLE_LIT
 , I960BASE_INSN_CMPOBG_REG, I960BASE_INSN_CMPOBG_LIT, I960BASE_INSN_CMPOBGE_REG, I960BASE_INSN_CMPOBGE_LIT
 , I960BASE_INSN_CMPIBE_REG, I960BASE_INSN_CMPIBE_LIT, I960BASE_INSN_CMPIBNE_REG, I960BASE_INSN_CMPIBNE_LIT
 , I960BASE_INSN_CMPIBL_REG, I960BASE_INSN_CMPIBL_LIT, I960BASE_INSN_CMPIBLE_REG, I960BASE_INSN_CMPIBLE_LIT
 , I960BASE_INSN_CMPIBG_REG, I960BASE_INSN_CMPIBG_LIT, I960BASE_INSN_CMPIBGE_REG, I960BASE_INSN_CMPIBGE_LIT
 , I960BASE_INSN_BBC_REG, I960BASE_INSN_BBC_LIT, I960BASE_INSN_BBS_REG, I960BASE_INSN_BBS_LIT
 , I960BASE_INSN_CMPI, I960BASE_INSN_CMPI1, I960BASE_INSN_CMPI2, I960BASE_INSN_CMPI3
 , I960BASE_INSN_CMPO, I960BASE_INSN_CMPO1, I960BASE_INSN_CMPO2, I960BASE_INSN_CMPO3
 , I960BASE_INSN_TESTNO_REG, I960BASE_INSN_TESTG_REG, I960BASE_INSN_TESTE_REG, I960BASE_INSN_TESTGE_REG
 , I960BASE_INSN_TESTL_REG, I960BASE_INSN_TESTNE_REG, I960BASE_INSN_TESTLE_REG, I960BASE_INSN_TESTO_REG
 , I960BASE_INSN_BNO, I960BASE_INSN_BG, I960BASE_INSN_BE, I960BASE_INSN_BGE
 , I960BASE_INSN_BL, I960BASE_INSN_BNE, I960BASE_INSN_BLE, I960BASE_INSN_BO
 , I960BASE_INSN_B, I960BASE_INSN_BX_INDIRECT_OFFSET, I960BASE_INSN_BX_INDIRECT, I960BASE_INSN_BX_INDIRECT_INDEX
 , I960BASE_INSN_BX_DISP, I960BASE_INSN_BX_INDIRECT_DISP, I960BASE_INSN_CALLX_DISP, I960BASE_INSN_CALLX_INDIRECT
 , I960BASE_INSN_CALLX_INDIRECT_OFFSET, I960BASE_INSN_RET, I960BASE_INSN_CALLS, I960BASE_INSN_FMARK
 , I960BASE_INSN_FLUSHREG, I960BASE_INSN_MAX
} I960BASE_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family i960base.  */
typedef enum i960base_sfmt_type {
  I960BASE_SFMT_EMPTY, I960BASE_SFMT_MULO, I960BASE_SFMT_MULO1, I960BASE_SFMT_MULO2
 , I960BASE_SFMT_MULO3, I960BASE_SFMT_NOTBIT, I960BASE_SFMT_NOTBIT1, I960BASE_SFMT_NOTBIT2
 , I960BASE_SFMT_NOTBIT3, I960BASE_SFMT_NOT, I960BASE_SFMT_NOT1, I960BASE_SFMT_SHLO
 , I960BASE_SFMT_SHLO1, I960BASE_SFMT_SHLO2, I960BASE_SFMT_SHLO3, I960BASE_SFMT_EMUL
 , I960BASE_SFMT_EMUL1, I960BASE_SFMT_EMUL2, I960BASE_SFMT_EMUL3, I960BASE_SFMT_MOVL
 , I960BASE_SFMT_MOVL1, I960BASE_SFMT_MOVT, I960BASE_SFMT_MOVT1, I960BASE_SFMT_MOVQ
 , I960BASE_SFMT_MOVQ1, I960BASE_SFMT_MODPC, I960BASE_SFMT_LDA_OFFSET, I960BASE_SFMT_LDA_INDIRECT_OFFSET
 , I960BASE_SFMT_LDA_INDIRECT, I960BASE_SFMT_LDA_INDIRECT_INDEX, I960BASE_SFMT_LDA_DISP, I960BASE_SFMT_LDA_INDIRECT_DISP
 , I960BASE_SFMT_LDA_INDEX_DISP, I960BASE_SFMT_LDA_INDIRECT_INDEX_DISP, I960BASE_SFMT_LD_OFFSET, I960BASE_SFMT_LD_INDIRECT_OFFSET
 , I960BASE_SFMT_LD_INDIRECT, I960BASE_SFMT_LD_INDIRECT_INDEX, I960BASE_SFMT_LD_DISP, I960BASE_SFMT_LD_INDIRECT_DISP
 , I960BASE_SFMT_LD_INDEX_DISP, I960BASE_SFMT_LD_INDIRECT_INDEX_DISP, I960BASE_SFMT_LDL_OFFSET, I960BASE_SFMT_LDL_INDIRECT_OFFSET
 , I960BASE_SFMT_LDL_INDIRECT, I960BASE_SFMT_LDL_INDIRECT_INDEX, I960BASE_SFMT_LDL_DISP, I960BASE_SFMT_LDL_INDIRECT_DISP
 , I960BASE_SFMT_LDL_INDEX_DISP, I960BASE_SFMT_LDL_INDIRECT_INDEX_DISP, I960BASE_SFMT_LDT_OFFSET, I960BASE_SFMT_LDT_INDIRECT_OFFSET
 , I960BASE_SFMT_LDT_INDIRECT, I960BASE_SFMT_LDT_INDIRECT_INDEX, I960BASE_SFMT_LDT_DISP, I960BASE_SFMT_LDT_INDIRECT_DISP
 , I960BASE_SFMT_LDT_INDEX_DISP, I960BASE_SFMT_LDT_INDIRECT_INDEX_DISP, I960BASE_SFMT_LDQ_OFFSET, I960BASE_SFMT_LDQ_INDIRECT_OFFSET
 , I960BASE_SFMT_LDQ_INDIRECT, I960BASE_SFMT_LDQ_INDIRECT_INDEX, I960BASE_SFMT_LDQ_DISP, I960BASE_SFMT_LDQ_INDIRECT_DISP
 , I960BASE_SFMT_LDQ_INDEX_DISP, I960BASE_SFMT_LDQ_INDIRECT_INDEX_DISP, I960BASE_SFMT_ST_OFFSET, I960BASE_SFMT_ST_INDIRECT_OFFSET
 , I960BASE_SFMT_ST_INDIRECT, I960BASE_SFMT_ST_INDIRECT_INDEX, I960BASE_SFMT_ST_DISP, I960BASE_SFMT_ST_INDIRECT_DISP
 , I960BASE_SFMT_ST_INDEX_DISP, I960BASE_SFMT_ST_INDIRECT_INDEX_DISP, I960BASE_SFMT_STL_OFFSET, I960BASE_SFMT_STL_INDIRECT_OFFSET
 , I960BASE_SFMT_STL_INDIRECT, I960BASE_SFMT_STL_INDIRECT_INDEX, I960BASE_SFMT_STL_DISP, I960BASE_SFMT_STL_INDIRECT_DISP
 , I960BASE_SFMT_STL_INDEX_DISP, I960BASE_SFMT_STL_INDIRECT_INDEX_DISP, I960BASE_SFMT_STT_OFFSET, I960BASE_SFMT_STT_INDIRECT_OFFSET
 , I960BASE_SFMT_STT_INDIRECT, I960BASE_SFMT_STT_INDIRECT_INDEX, I960BASE_SFMT_STT_DISP, I960BASE_SFMT_STT_INDIRECT_DISP
 , I960BASE_SFMT_STT_INDEX_DISP, I960BASE_SFMT_STT_INDIRECT_INDEX_DISP, I960BASE_SFMT_STQ_OFFSET, I960BASE_SFMT_STQ_INDIRECT_OFFSET
 , I960BASE_SFMT_STQ_INDIRECT, I960BASE_SFMT_STQ_INDIRECT_INDEX, I960BASE_SFMT_STQ_DISP, I960BASE_SFMT_STQ_INDIRECT_DISP
 , I960BASE_SFMT_STQ_INDEX_DISP, I960BASE_SFMT_STQ_INDIRECT_INDEX_DISP, I960BASE_SFMT_CMPOBE_REG, I960BASE_SFMT_CMPOBE_LIT
 , I960BASE_SFMT_CMPOBL_REG, I960BASE_SFMT_CMPOBL_LIT, I960BASE_SFMT_BBC_REG, I960BASE_SFMT_BBC_LIT
 , I960BASE_SFMT_CMPI, I960BASE_SFMT_CMPI1, I960BASE_SFMT_CMPI2, I960BASE_SFMT_CMPI3
 , I960BASE_SFMT_CMPO, I960BASE_SFMT_CMPO1, I960BASE_SFMT_CMPO2, I960BASE_SFMT_CMPO3
 , I960BASE_SFMT_TESTNO_REG, I960BASE_SFMT_BNO, I960BASE_SFMT_B, I960BASE_SFMT_BX_INDIRECT_OFFSET
 , I960BASE_SFMT_BX_INDIRECT, I960BASE_SFMT_BX_INDIRECT_INDEX, I960BASE_SFMT_BX_DISP, I960BASE_SFMT_BX_INDIRECT_DISP
 , I960BASE_SFMT_CALLX_DISP, I960BASE_SFMT_CALLX_INDIRECT, I960BASE_SFMT_CALLX_INDIRECT_OFFSET, I960BASE_SFMT_RET
 , I960BASE_SFMT_CALLS, I960BASE_SFMT_FMARK, I960BASE_SFMT_FLUSHREG
} I960BASE_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int i960base_model_i960KA_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int i960base_model_i960CA_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);

/* Profiling before/after handlers (user written) */

extern void i960base_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void i960base_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* I960BASE_DECODE_H */
