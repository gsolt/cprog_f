/****************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2007.05.02	Gergely Zsolt		21-13 NPS						*
* V2.1.3	2011.01.10	Gergely Zsolt		Nagyszentjános, biogáz 							*
* V2.1.4	2011.04.04	Gergely Zsolt		Ikrény, biogáz 	
* V2.1.6	2011.09.15	Gergely Zsolt		52-93 AREVA 							*
* V2.1.21	2013.10.22	Gergely Zsolt		Pápa, Ganna						*
* V2.1.22	2013.11.15	Gergely Zsolt		10-20, 10-01						*
* V2.1.23	2013.11.25	Gergely Zsolt		Veszprém, kiserõmû						*


****************************************************************************
* NAME           :  PARS_D3.c                                                 *
* DESCRIPTION    :                                         *
* PROCESS        : 
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/

extern void setdat(unsigned char *input);

/**********************************************/
/* Globals                                     */
/**********************************************/


/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setdat"   , setdat},  	
   {0      , 0 }
};*/
/*--------------------------------------------------------------------------*/
/* 'C' Block Initialization and Completion                                  */
/*--------------------------------------------------------------------------*/
/*void user_control_function(int control)
{
unsigned long		lTotal;
unsigned long		lLargest;
unsigned long		lBlockSize;
unsigned char		*byP;	
int					nI;
	
	
   switch(control)
      {
         case CB_INIT :
         	
            break;

         case CB_EXIT :
         	
         break;
      }
}*/


/****************************************************************************/
/* Parameter strukturak feltoltese     											*/
/***************************************************************************/
void setdat(unsigned char *input)
{
	int					nI;
	TOTAL_PAR			*sT;
	
	sT = (TOTAL_PAR *)input;

/* Single command inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
sT[0].sCP[0].sCPR[nI].nSCNum  = 1;
}	
	
	
	
	
sT[0].sCP[0].sCPR[0].nDCStart  = 10;    sT[0].sCP[0].sCPR[0].nDCNum  = 1;    sT[0].sCP[0].sCPR[0].nSCStart  = 11;    sT[0].sCP[0].sCPR[0].nAckStart  =0;     sT[0].sCP[0].sCPR[0].nAckNum  =0;   sT[0].sCP[0].sCPR[0].nSPOffsetCS  = 24;   sT[0].sCP[0].sCPR[0].nSPOffsetLek  = 25; 	
sT[0].sCP[0].sCPR[1].nDCStart  = 13;    sT[0].sCP[0].sCPR[1].nDCNum  = 1;    sT[0].sCP[0].sCPR[1].nSCStart  = 14;    sT[0].sCP[0].sCPR[1].nAckStart  =15;    sT[0].sCP[0].sCPR[1].nAckNum  =1;   sT[0].sCP[0].sCPR[1].nSPOffsetCS  = 40;   sT[0].sCP[0].sCPR[1].nSPOffsetLek  = 41; 	
sT[0].sCP[0].sCPR[2].nDCStart  = 16;    sT[0].sCP[0].sCPR[2].nDCNum  = 1;    sT[0].sCP[0].sCPR[2].nSCStart  = 17;    sT[0].sCP[0].sCPR[2].nAckStart  =18;    sT[0].sCP[0].sCPR[2].nAckNum  =1;   sT[0].sCP[0].sCPR[2].nSPOffsetCS  = 56;   sT[0].sCP[0].sCPR[2].nSPOffsetLek  = 57; 	
sT[0].sCP[0].sCPR[3].nDCStart  = 19;    sT[0].sCP[0].sCPR[3].nDCNum  = 1;    sT[0].sCP[0].sCPR[3].nSCStart  = 20;    sT[0].sCP[0].sCPR[3].nAckStart  =21;    sT[0].sCP[0].sCPR[3].nAckNum  =1;   sT[0].sCP[0].sCPR[3].nSPOffsetCS  = 72;   sT[0].sCP[0].sCPR[3].nSPOffsetLek  = 73; 	
sT[0].sCP[0].sCPR[4].nDCStart  = 22;    sT[0].sCP[0].sCPR[4].nDCNum  = 1;    sT[0].sCP[0].sCPR[4].nSCStart  = 23;    sT[0].sCP[0].sCPR[4].nAckStart  =24;    sT[0].sCP[0].sCPR[4].nAckNum  =1;   sT[0].sCP[0].sCPR[4].nSPOffsetCS  = 88;   sT[0].sCP[0].sCPR[4].nSPOffsetLek  = 89; 	
sT[0].sCP[0].sCPR[5].nDCStart  = 25;    sT[0].sCP[0].sCPR[5].nDCNum  = 1;    sT[0].sCP[0].sCPR[5].nSCStart  = 26;    sT[0].sCP[0].sCPR[5].nAckStart  =27;    sT[0].sCP[0].sCPR[5].nAckNum  =1;   sT[0].sCP[0].sCPR[5].nSPOffsetCS  = 104;  sT[0].sCP[0].sCPR[5].nSPOffsetLek  = 105; 	
sT[0].sCP[0].sCPR[6].nDCStart  = 28;    sT[0].sCP[0].sCPR[6].nDCNum  = 1;    sT[0].sCP[0].sCPR[6].nSCStart  = 29;    sT[0].sCP[0].sCPR[6].nAckStart  =30;    sT[0].sCP[0].sCPR[6].nAckNum  =1;   sT[0].sCP[0].sCPR[6].nSPOffsetCS  = 120;  sT[0].sCP[0].sCPR[6].nSPOffsetLek  = 121; 	
sT[0].sCP[0].sCPR[7].nDCStart  = 31;    sT[0].sCP[0].sCPR[7].nDCNum  = 1;    sT[0].sCP[0].sCPR[7].nSCStart  = 32;    sT[0].sCP[0].sCPR[7].nAckStart  =33;    sT[0].sCP[0].sCPR[7].nAckNum  =1;   sT[0].sCP[0].sCPR[7].nSPOffsetCS  = 136;  sT[0].sCP[0].sCPR[7].nSPOffsetLek  = 137; 	
sT[0].sCP[0].sCPR[8].nDCStart  = 34;    sT[0].sCP[0].sCPR[8].nDCNum  = 1;    sT[0].sCP[0].sCPR[8].nSCStart  = 35;    sT[0].sCP[0].sCPR[8].nAckStart  =36;    sT[0].sCP[0].sCPR[8].nAckNum  =1;   sT[0].sCP[0].sCPR[8].nSPOffsetCS  = 152;  sT[0].sCP[0].sCPR[8].nSPOffsetLek  = 153; 	
sT[0].sCP[0].sCPR[9].nDCStart  = 37;    sT[0].sCP[0].sCPR[9].nDCNum  = 1;    sT[0].sCP[0].sCPR[9].nSCStart  = 38;    sT[0].sCP[0].sCPR[9].nAckStart  =39;    sT[0].sCP[0].sCPR[9].nAckNum  =1;   sT[0].sCP[0].sCPR[9].nSPOffsetCS  = 168;  sT[0].sCP[0].sCPR[9].nSPOffsetLek  = 169; 	
sT[0].sCP[0].sCPR[10].nDCStart = 40;    sT[0].sCP[0].sCPR[10].nDCNum = 1;    sT[0].sCP[0].sCPR[10].nSCStart = 41;    sT[0].sCP[0].sCPR[10].nAckStart =42;    sT[0].sCP[0].sCPR[10].nAckNum =1;   sT[0].sCP[0].sCPR[10].nSPOffsetCS = 184;  sT[0].sCP[0].sCPR[10].nSPOffsetLek = 185; 	
sT[0].sCP[0].sCPR[11].nDCStart = 43;    sT[0].sCP[0].sCPR[11].nDCNum = 1;    sT[0].sCP[0].sCPR[11].nSCStart = 44;    sT[0].sCP[0].sCPR[11].nAckStart =45;    sT[0].sCP[0].sCPR[11].nAckNum =1;   sT[0].sCP[0].sCPR[11].nSPOffsetCS = 200;  sT[0].sCP[0].sCPR[11].nSPOffsetLek = 201; 	

sT[0].sCP[0].sCPR[12].nDCStart = 46;    sT[0].sCP[0].sCPR[12].nDCNum = 1;    sT[0].sCP[0].sCPR[12].nSCStart = 47;    sT[0].sCP[0].sCPR[12].nAckStart =48;    sT[0].sCP[0].sCPR[12].nAckNum =1;   sT[0].sCP[0].sCPR[12].nSPOffsetCS = 216;  sT[0].sCP[0].sCPR[12].nSPOffsetLek = 217; 	
sT[0].sCP[0].sCPR[13].nDCStart = 49;    sT[0].sCP[0].sCPR[13].nDCNum = 1;    sT[0].sCP[0].sCPR[13].nSCStart = 50;    sT[0].sCP[0].sCPR[13].nAckStart =51;    sT[0].sCP[0].sCPR[13].nAckNum =1;   sT[0].sCP[0].sCPR[13].nSPOffsetCS = 232;  sT[0].sCP[0].sCPR[13].nSPOffsetLek = 233; 	
sT[0].sCP[0].sCPR[14].nDCStart = 52;    sT[0].sCP[0].sCPR[14].nDCNum = 1;    sT[0].sCP[0].sCPR[14].nSCStart = 53;    sT[0].sCP[0].sCPR[14].nAckStart =54;    sT[0].sCP[0].sCPR[14].nAckNum =1;   sT[0].sCP[0].sCPR[14].nSPOffsetCS = 248;  sT[0].sCP[0].sCPR[14].nSPOffsetLek = 249; 	
sT[0].sCP[0].sCPR[15].nDCStart = 55;    sT[0].sCP[0].sCPR[15].nDCNum = 1;    sT[0].sCP[0].sCPR[15].nSCStart = 56;    sT[0].sCP[0].sCPR[15].nAckStart =57;    sT[0].sCP[0].sCPR[15].nAckNum =1;   sT[0].sCP[0].sCPR[15].nSPOffsetCS = 264;  sT[0].sCP[0].sCPR[15].nSPOffsetLek = 265; 	
sT[0].sCP[0].sCPR[16].nDCStart = 58;    sT[0].sCP[0].sCPR[16].nDCNum = 1;    sT[0].sCP[0].sCPR[16].nSCStart = 59;    sT[0].sCP[0].sCPR[16].nAckStart =60;    sT[0].sCP[0].sCPR[16].nAckNum =1;   sT[0].sCP[0].sCPR[16].nSPOffsetCS = 280;  sT[0].sCP[0].sCPR[16].nSPOffsetLek = 281; 	
sT[0].sCP[0].sCPR[17].nDCStart = 61;    sT[0].sCP[0].sCPR[17].nDCNum = 1;    sT[0].sCP[0].sCPR[17].nSCStart = 62;    sT[0].sCP[0].sCPR[17].nAckStart =63;    sT[0].sCP[0].sCPR[17].nAckNum =1;   sT[0].sCP[0].sCPR[17].nSPOffsetCS = 296;  sT[0].sCP[0].sCPR[17].nSPOffsetLek = 297; 	
sT[0].sCP[0].sCPR[18].nDCStart = 64;    sT[0].sCP[0].sCPR[18].nDCNum = 1;    sT[0].sCP[0].sCPR[18].nSCStart = 65;    sT[0].sCP[0].sCPR[18].nAckStart =66;    sT[0].sCP[0].sCPR[18].nAckNum =1;   sT[0].sCP[0].sCPR[18].nSPOffsetCS = 312;  sT[0].sCP[0].sCPR[18].nSPOffsetLek = 313; 	
sT[0].sCP[0].sCPR[19].nDCStart = 67;    sT[0].sCP[0].sCPR[19].nDCNum = 1;    sT[0].sCP[0].sCPR[19].nSCStart = 68;    sT[0].sCP[0].sCPR[19].nAckStart =69;    sT[0].sCP[0].sCPR[19].nAckNum =1;   sT[0].sCP[0].sCPR[19].nSPOffsetCS = 328;  sT[0].sCP[0].sCPR[19].nSPOffsetLek = 329; 	
sT[0].sCP[0].sCPR[20].nDCStart = 70;    sT[0].sCP[0].sCPR[20].nDCNum = 1;    sT[0].sCP[0].sCPR[20].nSCStart = 71;    sT[0].sCP[0].sCPR[20].nAckStart =72;    sT[0].sCP[0].sCPR[20].nAckNum =1;   sT[0].sCP[0].sCPR[20].nSPOffsetCS = 344;  sT[0].sCP[0].sCPR[20].nSPOffsetLek = 345; 	
sT[0].sCP[0].sCPR[21].nDCStart = 73;    sT[0].sCP[0].sCPR[21].nDCNum = 1;    sT[0].sCP[0].sCPR[21].nSCStart = 74;    sT[0].sCP[0].sCPR[21].nAckStart =75;    sT[0].sCP[0].sCPR[21].nAckNum =1;   sT[0].sCP[0].sCPR[21].nSPOffsetCS = 360;  sT[0].sCP[0].sCPR[21].nSPOffsetLek = 361; 	
sT[0].sCP[0].sCPR[22].nDCStart = 76;    sT[0].sCP[0].sCPR[22].nDCNum = 1;    sT[0].sCP[0].sCPR[22].nSCStart = 77;    sT[0].sCP[0].sCPR[22].nAckStart =78;    sT[0].sCP[0].sCPR[22].nAckNum =1;   sT[0].sCP[0].sCPR[22].nSPOffsetCS = 376;  sT[0].sCP[0].sCPR[22].nSPOffsetLek = 377; 	
sT[0].sCP[0].sCPR[23].nDCStart = 79;    sT[0].sCP[0].sCPR[23].nDCNum = 1;    sT[0].sCP[0].sCPR[23].nSCStart = 80;    sT[0].sCP[0].sCPR[23].nAckStart =81;    sT[0].sCP[0].sCPR[23].nAckNum =1;   sT[0].sCP[0].sCPR[23].nSPOffsetCS = 392;  sT[0].sCP[0].sCPR[23].nSPOffsetLek = 393; 	
sT[0].sCP[0].sCPR[24].nDCStart = 82;    sT[0].sCP[0].sCPR[24].nDCNum = 1;    sT[0].sCP[0].sCPR[24].nSCStart = 83;    sT[0].sCP[0].sCPR[24].nAckStart =84;    sT[0].sCP[0].sCPR[24].nAckNum =1;   sT[0].sCP[0].sCPR[24].nSPOffsetCS = 408;  sT[0].sCP[0].sCPR[24].nSPOffsetLek = 409; 	
sT[0].sCP[0].sCPR[25].nDCStart = 85;    sT[0].sCP[0].sCPR[25].nDCNum = 1;    sT[0].sCP[0].sCPR[25].nSCStart = 86;    sT[0].sCP[0].sCPR[25].nAckStart =87;    sT[0].sCP[0].sCPR[25].nAckNum =1;   sT[0].sCP[0].sCPR[25].nSPOffsetCS = 424;  sT[0].sCP[0].sCPR[25].nSPOffsetLek = 425; 	
sT[0].sCP[0].sCPR[26].nDCStart = 88;    sT[0].sCP[0].sCPR[26].nDCNum = 1;    sT[0].sCP[0].sCPR[26].nSCStart = 89;    sT[0].sCP[0].sCPR[26].nAckStart =90;    sT[0].sCP[0].sCPR[26].nAckNum =1;   sT[0].sCP[0].sCPR[26].nSPOffsetCS = 440;  sT[0].sCP[0].sCPR[26].nSPOffsetLek = 441; 	
sT[0].sCP[0].sCPR[27].nDCStart = 91;    sT[0].sCP[0].sCPR[27].nDCNum = 1;    sT[0].sCP[0].sCPR[27].nSCStart = 92;    sT[0].sCP[0].sCPR[27].nAckStart =93;    sT[0].sCP[0].sCPR[27].nAckNum =1;   sT[0].sCP[0].sCPR[27].nSPOffsetCS = 456;  sT[0].sCP[0].sCPR[27].nSPOffsetLek = 457; 	
sT[0].sCP[0].sCPR[28].nDCStart = 94;    sT[0].sCP[0].sCPR[28].nDCNum = 1;    sT[0].sCP[0].sCPR[28].nSCStart = 95;    sT[0].sCP[0].sCPR[28].nAckStart =96;    sT[0].sCP[0].sCPR[28].nAckNum =1;   sT[0].sCP[0].sCPR[28].nSPOffsetCS = 472;  sT[0].sCP[0].sCPR[28].nSPOffsetLek = 473; 	
sT[0].sCP[0].sCPR[29].nDCStart = 97;    sT[0].sCP[0].sCPR[29].nDCNum = 1;    sT[0].sCP[0].sCPR[29].nSCStart = 98;    sT[0].sCP[0].sCPR[29].nAckStart =99;    sT[0].sCP[0].sCPR[29].nAckNum =1;   sT[0].sCP[0].sCPR[29].nSPOffsetCS = 488;  sT[0].sCP[0].sCPR[29].nSPOffsetLek = 489; 	
sT[0].sCP[0].sCPR[30].nDCStart = 100;   sT[0].sCP[0].sCPR[30].nDCNum = 1;    sT[0].sCP[0].sCPR[30].nSCStart = 101;   sT[0].sCP[0].sCPR[30].nAckStart =102;   sT[0].sCP[0].sCPR[30].nAckNum =1;   sT[0].sCP[0].sCPR[30].nSPOffsetCS = 504;  sT[0].sCP[0].sCPR[30].nSPOffsetLek = 505; 	
sT[0].sCP[0].sCPR[31].nDCStart = 103;   sT[0].sCP[0].sCPR[31].nDCNum = 1;    sT[0].sCP[0].sCPR[31].nSCStart = 104;   sT[0].sCP[0].sCPR[31].nAckStart =105;   sT[0].sCP[0].sCPR[31].nAckNum =1;   sT[0].sCP[0].sCPR[31].nSPOffsetCS = 520;  sT[0].sCP[0].sCPR[31].nSPOffsetLek = 521; 	
sT[0].sCP[0].sCPR[32].nDCStart = 106;   sT[0].sCP[0].sCPR[32].nDCNum = 1;    sT[0].sCP[0].sCPR[32].nSCStart = 107;   sT[0].sCP[0].sCPR[32].nAckStart =108;   sT[0].sCP[0].sCPR[32].nAckNum =1;   sT[0].sCP[0].sCPR[32].nSPOffsetCS = 536;  sT[0].sCP[0].sCPR[32].nSPOffsetLek = 537; 	
sT[0].sCP[0].sCPR[33].nDCStart = 109;   sT[0].sCP[0].sCPR[33].nDCNum = 1;    sT[0].sCP[0].sCPR[33].nSCStart = 110;   sT[0].sCP[0].sCPR[33].nAckStart =111;   sT[0].sCP[0].sCPR[33].nAckNum =1;   sT[0].sCP[0].sCPR[33].nSPOffsetCS = 552;  sT[0].sCP[0].sCPR[33].nSPOffsetLek = 553; 	
sT[0].sCP[0].sCPR[34].nDCStart = 112;   sT[0].sCP[0].sCPR[34].nDCNum = 1;    sT[0].sCP[0].sCPR[34].nSCStart = 113;   sT[0].sCP[0].sCPR[34].nAckStart =114;   sT[0].sCP[0].sCPR[34].nAckNum =1;   sT[0].sCP[0].sCPR[34].nSPOffsetCS = 568;  sT[0].sCP[0].sCPR[34].nSPOffsetLek = 569; 	
sT[0].sCP[0].sCPR[35].nDCStart = 115;   sT[0].sCP[0].sCPR[35].nDCNum = 1;    sT[0].sCP[0].sCPR[35].nSCStart = 116;   sT[0].sCP[0].sCPR[35].nAckStart =117;   sT[0].sCP[0].sCPR[35].nAckNum =1;   sT[0].sCP[0].sCPR[35].nSPOffsetCS = 584;  sT[0].sCP[0].sCPR[35].nSPOffsetLek = 585; 	
sT[0].sCP[0].sCPR[36].nDCStart = 118;   sT[0].sCP[0].sCPR[36].nDCNum = 1;    sT[0].sCP[0].sCPR[36].nSCStart = 119;   sT[0].sCP[0].sCPR[36].nAckStart =120;   sT[0].sCP[0].sCPR[36].nAckNum =1;   sT[0].sCP[0].sCPR[36].nSPOffsetCS = 600;  sT[0].sCP[0].sCPR[36].nSPOffsetLek = 601; 	
sT[0].sCP[0].sCPR[37].nDCStart = 121;   sT[0].sCP[0].sCPR[37].nDCNum = 1;    sT[0].sCP[0].sCPR[37].nSCStart = 122;   sT[0].sCP[0].sCPR[37].nAckStart =123;   sT[0].sCP[0].sCPR[37].nAckNum =1;   sT[0].sCP[0].sCPR[37].nSPOffsetCS = 616;  sT[0].sCP[0].sCPR[37].nSPOffsetLek = 617; 	
sT[0].sCP[0].sCPR[38].nDCStart = 124;   sT[0].sCP[0].sCPR[38].nDCNum = 1;    sT[0].sCP[0].sCPR[38].nSCStart = 125;   sT[0].sCP[0].sCPR[38].nAckStart =126;   sT[0].sCP[0].sCPR[38].nAckNum =1;   sT[0].sCP[0].sCPR[38].nSPOffsetCS = 632;  sT[0].sCP[0].sCPR[38].nSPOffsetLek = 633; 	
sT[0].sCP[0].sCPR[39].nDCStart = 127;   sT[0].sCP[0].sCPR[39].nDCNum = 1;    sT[0].sCP[0].sCPR[39].nSCStart = 128;   sT[0].sCP[0].sCPR[39].nAckStart =129;   sT[0].sCP[0].sCPR[39].nAckNum =1;   sT[0].sCP[0].sCPR[39].nSPOffsetCS = 648;  sT[0].sCP[0].sCPR[39].nSPOffsetLek = 649; 	
sT[0].sCP[0].sCPR[40].nDCStart = 130;   sT[0].sCP[0].sCPR[40].nDCNum = 1;    sT[0].sCP[0].sCPR[40].nSCStart = 131;   sT[0].sCP[0].sCPR[40].nAckStart =132;   sT[0].sCP[0].sCPR[40].nAckNum =1;   sT[0].sCP[0].sCPR[40].nSPOffsetCS = 664;  sT[0].sCP[0].sCPR[40].nSPOffsetLek = 665; 	
sT[0].sCP[0].sCPR[41].nDCStart = 133;   sT[0].sCP[0].sCPR[41].nDCNum = 1;    sT[0].sCP[0].sCPR[41].nSCStart = 134;   sT[0].sCP[0].sCPR[41].nAckStart =135;   sT[0].sCP[0].sCPR[41].nAckNum =1;   sT[0].sCP[0].sCPR[41].nSPOffsetCS = 680;  sT[0].sCP[0].sCPR[41].nSPOffsetLek = 681; 	
sT[0].sCP[0].sCPR[42].nDCStart = 136;   sT[0].sCP[0].sCPR[42].nDCNum = 1;    sT[0].sCP[0].sCPR[42].nSCStart = 137;   sT[0].sCP[0].sCPR[42].nAckStart =138;   sT[0].sCP[0].sCPR[42].nAckNum =1;   sT[0].sCP[0].sCPR[42].nSPOffsetCS = 696;  sT[0].sCP[0].sCPR[42].nSPOffsetLek = 697; 	
sT[0].sCP[0].sCPR[43].nDCStart = 139;   sT[0].sCP[0].sCPR[43].nDCNum = 1;    sT[0].sCP[0].sCPR[43].nSCStart = 140;   sT[0].sCP[0].sCPR[43].nAckStart =141;   sT[0].sCP[0].sCPR[43].nAckNum =1;   sT[0].sCP[0].sCPR[43].nSPOffsetCS = 712;  sT[0].sCP[0].sCPR[43].nSPOffsetLek = 713; 	
sT[0].sCP[0].sCPR[44].nDCStart = 142;   sT[0].sCP[0].sCPR[44].nDCNum = 1;    sT[0].sCP[0].sCPR[44].nSCStart = 143;   sT[0].sCP[0].sCPR[44].nAckStart =144;   sT[0].sCP[0].sCPR[44].nAckNum =1;   sT[0].sCP[0].sCPR[44].nSPOffsetCS = 728;  sT[0].sCP[0].sCPR[44].nSPOffsetLek = 729; 	
sT[0].sCP[0].sCPR[45].nDCStart = 145;   sT[0].sCP[0].sCPR[45].nDCNum = 1;    sT[0].sCP[0].sCPR[45].nSCStart = 146;   sT[0].sCP[0].sCPR[45].nAckStart =147;   sT[0].sCP[0].sCPR[45].nAckNum =1;   sT[0].sCP[0].sCPR[45].nSPOffsetCS = 744;  sT[0].sCP[0].sCPR[45].nSPOffsetLek = 745; 	
sT[0].sCP[0].sCPR[46].nDCStart = 148;   sT[0].sCP[0].sCPR[46].nDCNum = 1;    sT[0].sCP[0].sCPR[46].nSCStart = 149;   sT[0].sCP[0].sCPR[46].nAckStart =150;   sT[0].sCP[0].sCPR[46].nAckNum =1;   sT[0].sCP[0].sCPR[46].nSPOffsetCS = 760;  sT[0].sCP[0].sCPR[46].nSPOffsetLek = 761; 	
sT[0].sCP[0].sCPR[47].nDCStart = 151;   sT[0].sCP[0].sCPR[47].nDCNum = 1;    sT[0].sCP[0].sCPR[47].nSCStart = 152;   sT[0].sCP[0].sCPR[47].nAckStart =153;   sT[0].sCP[0].sCPR[47].nAckNum =1;   sT[0].sCP[0].sCPR[47].nSPOffsetCS = 776;  sT[0].sCP[0].sCPR[47].nSPOffsetLek = 777; 	
sT[0].sCP[0].sCPR[48].nDCStart = 154;   sT[0].sCP[0].sCPR[48].nDCNum = 1;    sT[0].sCP[0].sCPR[48].nSCStart = 155;   sT[0].sCP[0].sCPR[48].nAckStart =156;   sT[0].sCP[0].sCPR[48].nAckNum =1;   sT[0].sCP[0].sCPR[48].nSPOffsetCS = 792;  sT[0].sCP[0].sCPR[48].nSPOffsetLek = 793; 	
sT[0].sCP[0].sCPR[49].nDCStart = 157;   sT[0].sCP[0].sCPR[49].nDCNum = 1;    sT[0].sCP[0].sCPR[49].nSCStart = 158;   sT[0].sCP[0].sCPR[49].nAckStart =159;   sT[0].sCP[0].sCPR[49].nAckNum =1;   sT[0].sCP[0].sCPR[49].nSPOffsetCS = 808;  sT[0].sCP[0].sCPR[49].nSPOffsetLek = 809; 	
sT[0].sCP[0].sCPR[50].nDCStart = 160;   sT[0].sCP[0].sCPR[50].nDCNum = 1;    sT[0].sCP[0].sCPR[50].nSCStart = 161;   sT[0].sCP[0].sCPR[50].nAckStart =162;   sT[0].sCP[0].sCPR[50].nAckNum =1;   sT[0].sCP[0].sCPR[50].nSPOffsetCS = 824;  sT[0].sCP[0].sCPR[50].nSPOffsetLek = 825; 	
sT[0].sCP[0].sCPR[51].nDCStart = 163;   sT[0].sCP[0].sCPR[51].nDCNum = 1;    sT[0].sCP[0].sCPR[51].nSCStart = 164;   sT[0].sCP[0].sCPR[51].nAckStart =165;   sT[0].sCP[0].sCPR[51].nAckNum =1;   sT[0].sCP[0].sCPR[51].nSPOffsetCS = 840;  sT[0].sCP[0].sCPR[51].nSPOffsetLek = 841; 	
sT[0].sCP[0].sCPR[52].nDCStart = 166;   sT[0].sCP[0].sCPR[52].nDCNum = 1;    sT[0].sCP[0].sCPR[52].nSCStart = 167;   sT[0].sCP[0].sCPR[52].nAckStart =168;   sT[0].sCP[0].sCPR[52].nAckNum =1;   sT[0].sCP[0].sCPR[52].nSPOffsetCS = 856;  sT[0].sCP[0].sCPR[52].nSPOffsetLek = 857; 	
sT[0].sCP[0].sCPR[53].nDCStart = 169;   sT[0].sCP[0].sCPR[53].nDCNum = 1;    sT[0].sCP[0].sCPR[53].nSCStart = 170;   sT[0].sCP[0].sCPR[53].nAckStart =171;   sT[0].sCP[0].sCPR[53].nAckNum =1;   sT[0].sCP[0].sCPR[53].nSPOffsetCS = 872;  sT[0].sCP[0].sCPR[53].nSPOffsetLek = 873; 	
sT[0].sCP[0].sCPR[54].nDCStart = 172;   sT[0].sCP[0].sCPR[54].nDCNum = 1;    sT[0].sCP[0].sCPR[54].nSCStart = 173;   sT[0].sCP[0].sCPR[54].nAckStart =174;   sT[0].sCP[0].sCPR[54].nAckNum =1;   sT[0].sCP[0].sCPR[54].nSPOffsetCS = 888;  sT[0].sCP[0].sCPR[54].nSPOffsetLek = 889; 	
sT[0].sCP[0].sCPR[55].nDCStart = 175;   sT[0].sCP[0].sCPR[55].nDCNum = 1;    sT[0].sCP[0].sCPR[55].nSCStart = 176;   sT[0].sCP[0].sCPR[55].nAckStart =177;   sT[0].sCP[0].sCPR[55].nAckNum =1;   sT[0].sCP[0].sCPR[55].nSPOffsetCS = 904;  sT[0].sCP[0].sCPR[55].nSPOffsetLek = 905; 	
sT[0].sCP[0].sCPR[56].nDCStart = 178;   sT[0].sCP[0].sCPR[56].nDCNum = 1;    sT[0].sCP[0].sCPR[56].nSCStart = 179;   sT[0].sCP[0].sCPR[56].nAckStart =180;   sT[0].sCP[0].sCPR[56].nAckNum =1;   sT[0].sCP[0].sCPR[56].nSPOffsetCS = 920;  sT[0].sCP[0].sCPR[56].nSPOffsetLek = 921; 	
sT[0].sCP[0].sCPR[57].nDCStart = 181;   sT[0].sCP[0].sCPR[57].nDCNum = 1;    sT[0].sCP[0].sCPR[57].nSCStart = 182;   sT[0].sCP[0].sCPR[57].nAckStart =183;   sT[0].sCP[0].sCPR[57].nAckNum =1;   sT[0].sCP[0].sCPR[57].nSPOffsetCS = 936;  sT[0].sCP[0].sCPR[57].nSPOffsetLek = 937; 	
sT[0].sCP[0].sCPR[58].nDCStart = 184;   sT[0].sCP[0].sCPR[58].nDCNum = 1;    sT[0].sCP[0].sCPR[58].nSCStart = 185;   sT[0].sCP[0].sCPR[58].nAckStart =186;   sT[0].sCP[0].sCPR[58].nAckNum =1;   sT[0].sCP[0].sCPR[58].nSPOffsetCS = 952;  sT[0].sCP[0].sCPR[58].nSPOffsetLek = 953; 	
sT[0].sCP[0].sCPR[59].nDCStart = 187;   sT[0].sCP[0].sCPR[59].nDCNum = 1;    sT[0].sCP[0].sCPR[59].nSCStart = 188;   sT[0].sCP[0].sCPR[59].nAckStart =189;   sT[0].sCP[0].sCPR[59].nAckNum =1;   sT[0].sCP[0].sCPR[59].nSPOffsetCS = 968;  sT[0].sCP[0].sCPR[59].nSPOffsetLek = 969; 	
sT[0].sCP[0].sCPR[60].nDCStart = 190;   sT[0].sCP[0].sCPR[60].nDCNum = 1;    sT[0].sCP[0].sCPR[60].nSCStart = 191;   sT[0].sCP[0].sCPR[60].nAckStart =192;   sT[0].sCP[0].sCPR[60].nAckNum =1;   sT[0].sCP[0].sCPR[60].nSPOffsetCS = 984;  sT[0].sCP[0].sCPR[60].nSPOffsetLek = 985; 	
sT[0].sCP[0].sCPR[61].nDCStart = 193;   sT[0].sCP[0].sCPR[61].nDCNum = 1;    sT[0].sCP[0].sCPR[61].nSCStart = 194;   sT[0].sCP[0].sCPR[61].nAckStart =195;   sT[0].sCP[0].sCPR[61].nAckNum =1;   sT[0].sCP[0].sCPR[61].nSPOffsetCS = 1000; sT[0].sCP[0].sCPR[61].nSPOffsetLek = 1001; 	
sT[0].sCP[0].sCPR[62].nDCStart = 196;   sT[0].sCP[0].sCPR[62].nDCNum = 1;    sT[0].sCP[0].sCPR[62].nSCStart = 197;   sT[0].sCP[0].sCPR[62].nAckStart =198;   sT[0].sCP[0].sCPR[62].nAckNum =1;   sT[0].sCP[0].sCPR[62].nSPOffsetCS = 1016; sT[0].sCP[0].sCPR[62].nSPOffsetLek = 1017; 	
sT[0].sCP[0].sCPR[63].nDCStart = 199;   sT[0].sCP[0].sCPR[63].nDCNum = 4;    sT[0].sCP[0].sCPR[63].nSCStart = 204;   sT[0].sCP[0].sCPR[63].nAckStart =203;   sT[0].sCP[0].sCPR[63].nAckNum =1;   sT[0].sCP[0].sCPR[63].nSPOffsetCS = 1053; sT[0].sCP[0].sCPR[63].nSPOffsetLek = 1054; 	
sT[0].sCP[0].sCPR[64].nDCStart = 205;   sT[0].sCP[0].sCPR[64].nDCNum = 4;    sT[0].sCP[0].sCPR[64].nSCStart = 210;   sT[0].sCP[0].sCPR[64].nAckStart =209;   sT[0].sCP[0].sCPR[64].nAckNum =1;   sT[0].sCP[0].sCPR[64].nSPOffsetCS = 1090; sT[0].sCP[0].sCPR[64].nSPOffsetLek = 1091; 	
sT[0].sCP[0].sCPR[65].nDCStart = 211;   sT[0].sCP[0].sCPR[65].nDCNum = 4;    sT[0].sCP[0].sCPR[65].nSCStart = 216;   sT[0].sCP[0].sCPR[65].nAckStart =215;   sT[0].sCP[0].sCPR[65].nAckNum =1;   sT[0].sCP[0].sCPR[65].nSPOffsetCS = 1127; sT[0].sCP[0].sCPR[65].nSPOffsetLek = 1128; 	
sT[0].sCP[0].sCPR[66].nDCStart = 217;   sT[0].sCP[0].sCPR[66].nDCNum = 4;    sT[0].sCP[0].sCPR[66].nSCStart = 222;   sT[0].sCP[0].sCPR[66].nAckStart =221;   sT[0].sCP[0].sCPR[66].nAckNum =1;   sT[0].sCP[0].sCPR[66].nSPOffsetCS = 1164; sT[0].sCP[0].sCPR[66].nSPOffsetLek = 1165; 	
sT[0].sCP[0].sCPR[67].nDCStart = 223;   sT[0].sCP[0].sCPR[67].nDCNum = 1;    sT[0].sCP[0].sCPR[67].nSCStart = 224;   sT[0].sCP[0].sCPR[67].nAckStart =225;   sT[0].sCP[0].sCPR[67].nAckNum =1;   sT[0].sCP[0].sCPR[67].nSPOffsetCS = 1180; sT[0].sCP[0].sCPR[67].nSPOffsetLek = 1181; 	
sT[0].sCP[0].sCPR[68].nDCStart = 226;   sT[0].sCP[0].sCPR[68].nDCNum = 1;    sT[0].sCP[0].sCPR[68].nSCStart = 227;   sT[0].sCP[0].sCPR[68].nAckStart =0;     sT[0].sCP[0].sCPR[68].nAckNum =0;   sT[0].sCP[0].sCPR[68].nSPOffsetCS = 1196; sT[0].sCP[0].sCPR[68].nSPOffsetLek = 1197; 	
sT[0].sCP[0].sCPR[69].nDCStart = 229;   sT[0].sCP[0].sCPR[69].nDCNum = 1;    sT[0].sCP[0].sCPR[69].nSCStart = 230;   sT[0].sCP[0].sCPR[69].nAckStart =231;   sT[0].sCP[0].sCPR[69].nAckNum =1;   sT[0].sCP[0].sCPR[69].nSPOffsetCS = 1212; sT[0].sCP[0].sCPR[69].nSPOffsetLek = 1213; 	
sT[0].sCP[0].sCPR[70].nDCStart = 232;   sT[0].sCP[0].sCPR[70].nDCNum = 1;    sT[0].sCP[0].sCPR[70].nSCStart = 233;   sT[0].sCP[0].sCPR[70].nAckStart =234;   sT[0].sCP[0].sCPR[70].nAckNum =1;   sT[0].sCP[0].sCPR[70].nSPOffsetCS = 1228; sT[0].sCP[0].sCPR[70].nSPOffsetLek = 1229; 	
sT[0].sCP[0].sCPR[71].nDCStart = 235;   sT[0].sCP[0].sCPR[71].nDCNum = 1;    sT[0].sCP[0].sCPR[71].nSCStart = 236;   sT[0].sCP[0].sCPR[71].nAckStart =237;   sT[0].sCP[0].sCPR[71].nAckNum =1;   sT[0].sCP[0].sCPR[71].nSPOffsetCS = 1244; sT[0].sCP[0].sCPR[71].nSPOffsetLek = 1245; 	
sT[0].sCP[0].sCPR[72].nDCStart = 238;   sT[0].sCP[0].sCPR[72].nDCNum = 1;    sT[0].sCP[0].sCPR[72].nSCStart = 239;   sT[0].sCP[0].sCPR[72].nAckStart =240;   sT[0].sCP[0].sCPR[72].nAckNum =1;   sT[0].sCP[0].sCPR[72].nSPOffsetCS = 1260; sT[0].sCP[0].sCPR[72].nSPOffsetLek = 1261; 	
sT[0].sCP[0].sCPR[73].nDCStart = 241;   sT[0].sCP[0].sCPR[73].nDCNum = 1;    sT[0].sCP[0].sCPR[73].nSCStart = 242;   sT[0].sCP[0].sCPR[73].nAckStart =243;   sT[0].sCP[0].sCPR[73].nAckNum =1;   sT[0].sCP[0].sCPR[73].nSPOffsetCS = 1276; sT[0].sCP[0].sCPR[73].nSPOffsetLek = 1277; 	
sT[0].sCP[0].sCPR[74].nDCStart = 244;   sT[0].sCP[0].sCPR[74].nDCNum = 1;    sT[0].sCP[0].sCPR[74].nSCStart = 245;   sT[0].sCP[0].sCPR[74].nAckStart =246;   sT[0].sCP[0].sCPR[74].nAckNum =1;   sT[0].sCP[0].sCPR[74].nSPOffsetCS = 1292; sT[0].sCP[0].sCPR[74].nSPOffsetLek = 1293; 	
sT[0].sCP[0].sCPR[75].nDCStart = 247;   sT[0].sCP[0].sCPR[75].nDCNum = 1;    sT[0].sCP[0].sCPR[75].nSCStart = 248;   sT[0].sCP[0].sCPR[75].nAckStart =249;   sT[0].sCP[0].sCPR[75].nAckNum =1;   sT[0].sCP[0].sCPR[75].nSPOffsetCS = 1308; sT[0].sCP[0].sCPR[75].nSPOffsetLek = 1309; 	

sT[0].sCP[0].sCPR[76].nDCStart = 250;   sT[0].sCP[0].sCPR[76].nDCNum = 1;    sT[0].sCP[0].sCPR[76].nSCStart = 251;   sT[0].sCP[0].sCPR[76].nAckStart =252;   sT[0].sCP[0].sCPR[76].nAckNum =1;   sT[0].sCP[0].sCPR[76].nSPOffsetCS = 1324; sT[0].sCP[0].sCPR[76].nSPOffsetLek = 1325; 	
sT[0].sCP[0].sCPR[77].nDCStart = 253;   sT[0].sCP[0].sCPR[77].nDCNum = 1;    sT[0].sCP[0].sCPR[77].nSCStart = 254;   sT[0].sCP[0].sCPR[77].nAckStart =255;   sT[0].sCP[0].sCPR[77].nAckNum =1;   sT[0].sCP[0].sCPR[77].nSPOffsetCS = 1340; sT[0].sCP[0].sCPR[77].nSPOffsetLek = 1341; 	
sT[0].sCP[0].sCPR[78].nDCStart = 256;   sT[0].sCP[0].sCPR[78].nDCNum = 1;    sT[0].sCP[0].sCPR[78].nSCStart = 257;   sT[0].sCP[0].sCPR[78].nAckStart =258;   sT[0].sCP[0].sCPR[78].nAckNum =1;   sT[0].sCP[0].sCPR[78].nSPOffsetCS = 1356; sT[0].sCP[0].sCPR[78].nSPOffsetLek = 1357; 	
sT[0].sCP[0].sCPR[79].nDCStart = 259;   sT[0].sCP[0].sCPR[79].nDCNum = 1;    sT[0].sCP[0].sCPR[79].nSCStart = 260;   sT[0].sCP[0].sCPR[79].nAckStart =261;   sT[0].sCP[0].sCPR[79].nAckNum =1;   sT[0].sCP[0].sCPR[79].nSPOffsetCS = 1372; sT[0].sCP[0].sCPR[79].nSPOffsetLek = 1373; 	
sT[0].sCP[0].sCPR[80].nDCStart = 262;   sT[0].sCP[0].sCPR[80].nDCNum = 1;    sT[0].sCP[0].sCPR[80].nSCStart = 263;   sT[0].sCP[0].sCPR[80].nAckStart =264;   sT[0].sCP[0].sCPR[80].nAckNum =1;   sT[0].sCP[0].sCPR[80].nSPOffsetCS = 1388; sT[0].sCP[0].sCPR[80].nSPOffsetLek = 1389; 	
sT[0].sCP[0].sCPR[81].nDCStart = 265;   sT[0].sCP[0].sCPR[81].nDCNum = 1;    sT[0].sCP[0].sCPR[81].nSCStart = 266;   sT[0].sCP[0].sCPR[81].nAckStart =267;   sT[0].sCP[0].sCPR[81].nAckNum =1;   sT[0].sCP[0].sCPR[81].nSPOffsetCS = 1404; sT[0].sCP[0].sCPR[81].nSPOffsetLek = 1405; 	
sT[0].sCP[0].sCPR[82].nDCStart = 268;   sT[0].sCP[0].sCPR[82].nDCNum = 1;    sT[0].sCP[0].sCPR[82].nSCStart = 269;   sT[0].sCP[0].sCPR[82].nAckStart =270;   sT[0].sCP[0].sCPR[82].nAckNum =1;   sT[0].sCP[0].sCPR[82].nSPOffsetCS = 1420; sT[0].sCP[0].sCPR[82].nSPOffsetLek = 1421; 	
sT[0].sCP[0].sCPR[83].nDCStart = 271;   sT[0].sCP[0].sCPR[83].nDCNum = 1;    sT[0].sCP[0].sCPR[83].nSCStart = 272;   sT[0].sCP[0].sCPR[83].nAckStart =273;   sT[0].sCP[0].sCPR[83].nAckNum =1;   sT[0].sCP[0].sCPR[83].nSPOffsetCS = 1436; sT[0].sCP[0].sCPR[83].nSPOffsetLek = 1437; 	
sT[0].sCP[0].sCPR[84].nDCStart = 274;   sT[0].sCP[0].sCPR[84].nDCNum = 1;    sT[0].sCP[0].sCPR[84].nSCStart = 275;   sT[0].sCP[0].sCPR[84].nAckStart =276;   sT[0].sCP[0].sCPR[84].nAckNum =1;   sT[0].sCP[0].sCPR[84].nSPOffsetCS = 1452; sT[0].sCP[0].sCPR[84].nSPOffsetLek = 1453; 	
sT[0].sCP[0].sCPR[85].nDCStart = 277;   sT[0].sCP[0].sCPR[85].nDCNum = 1;    sT[0].sCP[0].sCPR[85].nSCStart = 278;   sT[0].sCP[0].sCPR[85].nAckStart =279;   sT[0].sCP[0].sCPR[85].nAckNum =1;   sT[0].sCP[0].sCPR[85].nSPOffsetCS = 1468; sT[0].sCP[0].sCPR[85].nSPOffsetLek = 1469; 	
sT[0].sCP[0].sCPR[86].nDCStart = 280;   sT[0].sCP[0].sCPR[86].nDCNum = 1;    sT[0].sCP[0].sCPR[86].nSCStart = 281;   sT[0].sCP[0].sCPR[86].nAckStart =282;   sT[0].sCP[0].sCPR[86].nAckNum =1;   sT[0].sCP[0].sCPR[86].nSPOffsetCS = 1484; sT[0].sCP[0].sCPR[86].nSPOffsetLek = 1485; 	
sT[0].sCP[0].sCPR[87].nDCStart = 283;   sT[0].sCP[0].sCPR[87].nDCNum = 1;    sT[0].sCP[0].sCPR[87].nSCStart = 284;   sT[0].sCP[0].sCPR[87].nAckStart =285;   sT[0].sCP[0].sCPR[87].nAckNum =1;   sT[0].sCP[0].sCPR[87].nSPOffsetCS = 1500; sT[0].sCP[0].sCPR[87].nSPOffsetLek = 1501; 	
sT[0].sCP[0].sCPR[88].nDCStart = 286;   sT[0].sCP[0].sCPR[88].nDCNum = 1;    sT[0].sCP[0].sCPR[88].nSCStart = 287;   sT[0].sCP[0].sCPR[88].nAckStart =288;   sT[0].sCP[0].sCPR[88].nAckNum =1;   sT[0].sCP[0].sCPR[88].nSPOffsetCS = 1516; sT[0].sCP[0].sCPR[88].nSPOffsetLek = 1517; 	
sT[0].sCP[0].sCPR[89].nDCStart = 289;   sT[0].sCP[0].sCPR[89].nDCNum = 1;    sT[0].sCP[0].sCPR[89].nSCStart = 290;   sT[0].sCP[0].sCPR[89].nAckStart =291;   sT[0].sCP[0].sCPR[89].nAckNum =1;   sT[0].sCP[0].sCPR[89].nSPOffsetCS = 1532; sT[0].sCP[0].sCPR[89].nSPOffsetLek = 1533; 	
sT[0].sCP[0].sCPR[90].nDCStart = 292;   sT[0].sCP[0].sCPR[90].nDCNum = 1;    sT[0].sCP[0].sCPR[90].nSCStart = 293;   sT[0].sCP[0].sCPR[90].nAckStart =294;   sT[0].sCP[0].sCPR[90].nAckNum =1;   sT[0].sCP[0].sCPR[90].nSPOffsetCS = 1548; sT[0].sCP[0].sCPR[90].nSPOffsetLek = 1549; 	
sT[0].sCP[0].sCPR[91].nDCStart = 295;   sT[0].sCP[0].sCPR[91].nDCNum = 1;    sT[0].sCP[0].sCPR[91].nSCStart = 296;   sT[0].sCP[0].sCPR[91].nAckStart =297;   sT[0].sCP[0].sCPR[91].nAckNum =1;   sT[0].sCP[0].sCPR[91].nSPOffsetCS = 1564; sT[0].sCP[0].sCPR[91].nSPOffsetLek = 1565; 	
sT[0].sCP[0].sCPR[92].nDCStart = 298;   sT[0].sCP[0].sCPR[92].nDCNum = 1;    sT[0].sCP[0].sCPR[92].nSCStart = 299;   sT[0].sCP[0].sCPR[92].nAckStart =300;   sT[0].sCP[0].sCPR[92].nAckNum =1;   sT[0].sCP[0].sCPR[92].nSPOffsetCS = 1580; sT[0].sCP[0].sCPR[92].nSPOffsetLek = 1581; 	
sT[0].sCP[0].sCPR[93].nDCStart = 301;   sT[0].sCP[0].sCPR[93].nDCNum = 1;    sT[0].sCP[0].sCPR[93].nSCStart = 302;   sT[0].sCP[0].sCPR[93].nAckStart =303;   sT[0].sCP[0].sCPR[93].nAckNum =1;   sT[0].sCP[0].sCPR[93].nSPOffsetCS = 1596; sT[0].sCP[0].sCPR[93].nSPOffsetLek = 1597; 	
sT[0].sCP[0].sCPR[94].nDCStart = 304;   sT[0].sCP[0].sCPR[94].nDCNum = 1;    sT[0].sCP[0].sCPR[94].nSCStart = 305;   sT[0].sCP[0].sCPR[94].nAckStart =306;   sT[0].sCP[0].sCPR[94].nAckNum =1;   sT[0].sCP[0].sCPR[94].nSPOffsetCS = 1612; sT[0].sCP[0].sCPR[94].nSPOffsetLek = 1613; 	
sT[0].sCP[0].sCPR[95].nDCStart = 307;   sT[0].sCP[0].sCPR[95].nDCNum = 1;    sT[0].sCP[0].sCPR[95].nSCStart = 308;   sT[0].sCP[0].sCPR[95].nAckStart =309;   sT[0].sCP[0].sCPR[95].nAckNum =1;   sT[0].sCP[0].sCPR[95].nSPOffsetCS = 1628; sT[0].sCP[0].sCPR[95].nSPOffsetLek = 1629; 	
sT[0].sCP[0].sCPR[96].nDCStart = 310;   sT[0].sCP[0].sCPR[96].nDCNum = 1;    sT[0].sCP[0].sCPR[96].nSCStart = 311;   sT[0].sCP[0].sCPR[96].nAckStart =312;   sT[0].sCP[0].sCPR[96].nAckNum =1;   sT[0].sCP[0].sCPR[96].nSPOffsetCS = 1644; sT[0].sCP[0].sCPR[96].nSPOffsetLek = 1645; 	
sT[0].sCP[0].sCPR[97].nDCStart = 313;   sT[0].sCP[0].sCPR[97].nDCNum = 1;    sT[0].sCP[0].sCPR[97].nSCStart = 314;   sT[0].sCP[0].sCPR[97].nAckStart =315;   sT[0].sCP[0].sCPR[97].nAckNum =1;   sT[0].sCP[0].sCPR[97].nSPOffsetCS = 1660; sT[0].sCP[0].sCPR[97].nSPOffsetLek = 1661; 	
sT[0].sCP[0].sCPR[98].nDCStart = 316;   sT[0].sCP[0].sCPR[98].nDCNum = 1;    sT[0].sCP[0].sCPR[98].nSCStart = 317;   sT[0].sCP[0].sCPR[98].nAckStart =318;   sT[0].sCP[0].sCPR[98].nAckNum =1;   sT[0].sCP[0].sCPR[98].nSPOffsetCS = 1676; sT[0].sCP[0].sCPR[98].nSPOffsetLek = 1677; 	
sT[0].sCP[0].sCPR[99].nDCStart = 319;   sT[0].sCP[0].sCPR[99].nDCNum = 1;    sT[0].sCP[0].sCPR[99].nSCStart = 320;   sT[0].sCP[0].sCPR[99].nAckStart =321;   sT[0].sCP[0].sCPR[99].nAckNum =1;   sT[0].sCP[0].sCPR[99].nSPOffsetCS = 1692; sT[0].sCP[0].sCPR[99].nSPOffsetLek = 1693; 	
sT[0].sCP[0].sCPR[100].nDCStart= 322;   sT[0].sCP[0].sCPR[100].nDCNum= 1;    sT[0].sCP[0].sCPR[100].nSCStart= 323;   sT[0].sCP[0].sCPR[100].nAckStart=324;   sT[0].sCP[0].sCPR[100].nAckNum=1;   sT[0].sCP[0].sCPR[100].nSPOffsetCS= 1708; sT[0].sCP[0].sCPR[100].nSPOffsetLek= 1709; 	

sT[0].sCP[0].sCPR[101].nDCStart= 325;   sT[0].sCP[0].sCPR[101].nDCNum= 1;    sT[0].sCP[0].sCPR[101].nSCStart= 326;   sT[0].sCP[0].sCPR[101].nAckStart=327;   sT[0].sCP[0].sCPR[101].nAckNum=1;   sT[0].sCP[0].sCPR[101].nSPOffsetCS= 1724; sT[0].sCP[0].sCPR[101].nSPOffsetLek= 1725; 	
sT[0].sCP[0].sCPR[102].nDCStart= 328;   sT[0].sCP[0].sCPR[102].nDCNum= 1;    sT[0].sCP[0].sCPR[102].nSCStart= 329;   sT[0].sCP[0].sCPR[102].nAckStart=330;   sT[0].sCP[0].sCPR[102].nAckNum=1;   sT[0].sCP[0].sCPR[102].nSPOffsetCS= 1740; sT[0].sCP[0].sCPR[102].nSPOffsetLek= 1741; 	
sT[0].sCP[0].sCPR[103].nDCStart= 331;   sT[0].sCP[0].sCPR[103].nDCNum= 1;    sT[0].sCP[0].sCPR[103].nSCStart= 332;   sT[0].sCP[0].sCPR[103].nAckStart=333;   sT[0].sCP[0].sCPR[103].nAckNum=1;   sT[0].sCP[0].sCPR[103].nSPOffsetCS= 1756; sT[0].sCP[0].sCPR[103].nSPOffsetLek= 1757; 	
sT[0].sCP[0].sCPR[104].nDCStart= 334;   sT[0].sCP[0].sCPR[104].nDCNum= 1;    sT[0].sCP[0].sCPR[104].nSCStart= 335;   sT[0].sCP[0].sCPR[104].nAckStart=336;   sT[0].sCP[0].sCPR[104].nAckNum=1;   sT[0].sCP[0].sCPR[104].nSPOffsetCS= 1772; sT[0].sCP[0].sCPR[104].nSPOffsetLek= 1773; 	
sT[0].sCP[0].sCPR[105].nDCStart= 337;   sT[0].sCP[0].sCPR[105].nDCNum= 1;    sT[0].sCP[0].sCPR[105].nSCStart= 338;   sT[0].sCP[0].sCPR[105].nAckStart=339;   sT[0].sCP[0].sCPR[105].nAckNum=1;   sT[0].sCP[0].sCPR[105].nSPOffsetCS= 1788; sT[0].sCP[0].sCPR[105].nSPOffsetLek= 1789; 	
sT[0].sCP[0].sCPR[106].nDCStart= 340;   sT[0].sCP[0].sCPR[106].nDCNum= 1;    sT[0].sCP[0].sCPR[106].nSCStart= 341;   sT[0].sCP[0].sCPR[106].nAckStart=342;   sT[0].sCP[0].sCPR[106].nAckNum=1;   sT[0].sCP[0].sCPR[106].nSPOffsetCS= 1804; sT[0].sCP[0].sCPR[106].nSPOffsetLek= 1805; 	
sT[0].sCP[0].sCPR[107].nDCStart= 343;   sT[0].sCP[0].sCPR[107].nDCNum= 1;    sT[0].sCP[0].sCPR[107].nSCStart= 344;   sT[0].sCP[0].sCPR[107].nAckStart=345;   sT[0].sCP[0].sCPR[107].nAckNum=1;   sT[0].sCP[0].sCPR[107].nSPOffsetCS= 1820; sT[0].sCP[0].sCPR[107].nSPOffsetLek= 1821; 	
sT[0].sCP[0].sCPR[108].nDCStart= 346;   sT[0].sCP[0].sCPR[108].nDCNum= 1;    sT[0].sCP[0].sCPR[108].nSCStart= 347;   sT[0].sCP[0].sCPR[108].nAckStart=348;   sT[0].sCP[0].sCPR[108].nAckNum=1;   sT[0].sCP[0].sCPR[108].nSPOffsetCS= 1836; sT[0].sCP[0].sCPR[108].nSPOffsetLek= 1837; 	

sT[0].sCP[0].sCPR[109].nDCStart= 349;   sT[0].sCP[0].sCPR[109].nDCNum= 1;    sT[0].sCP[0].sCPR[109].nSCStart= 350;   sT[0].sCP[0].sCPR[109].nAckStart=351;   sT[0].sCP[0].sCPR[109].nAckNum=1;   sT[0].sCP[0].sCPR[109].nSPOffsetCS= 1852; sT[0].sCP[0].sCPR[109].nSPOffsetLek= 1853; 	
sT[0].sCP[0].sCPR[110].nDCStart= 352;   sT[0].sCP[0].sCPR[110].nDCNum= 1;    sT[0].sCP[0].sCPR[110].nSCStart= 353;   sT[0].sCP[0].sCPR[110].nAckStart=354;   sT[0].sCP[0].sCPR[110].nAckNum=1;   sT[0].sCP[0].sCPR[110].nSPOffsetCS= 1868; sT[0].sCP[0].sCPR[110].nSPOffsetLek= 1869; 	
sT[0].sCP[0].sCPR[111].nDCStart= 355;   sT[0].sCP[0].sCPR[111].nDCNum= 1;    sT[0].sCP[0].sCPR[111].nSCStart= 356;   sT[0].sCP[0].sCPR[111].nAckStart=357;   sT[0].sCP[0].sCPR[111].nAckNum=1;   sT[0].sCP[0].sCPR[111].nSPOffsetCS= 1884; sT[0].sCP[0].sCPR[111].nSPOffsetLek= 1885; 	
sT[0].sCP[0].sCPR[112].nDCStart= 358;   sT[0].sCP[0].sCPR[112].nDCNum= 1;    sT[0].sCP[0].sCPR[112].nSCStart= 359;   sT[0].sCP[0].sCPR[112].nAckStart=360;   sT[0].sCP[0].sCPR[112].nAckNum=1;   sT[0].sCP[0].sCPR[112].nSPOffsetCS= 1900; sT[0].sCP[0].sCPR[112].nSPOffsetLek= 1901; 	
sT[0].sCP[0].sCPR[113].nDCStart= 361;   sT[0].sCP[0].sCPR[113].nDCNum= 1;    sT[0].sCP[0].sCPR[113].nSCStart= 362;   sT[0].sCP[0].sCPR[113].nAckStart=363;   sT[0].sCP[0].sCPR[113].nAckNum=1;   sT[0].sCP[0].sCPR[113].nSPOffsetCS= 1916; sT[0].sCP[0].sCPR[113].nSPOffsetLek= 1917; 	
sT[0].sCP[0].sCPR[114].nDCStart= 364;   sT[0].sCP[0].sCPR[114].nDCNum= 1;    sT[0].sCP[0].sCPR[114].nSCStart= 365;   sT[0].sCP[0].sCPR[114].nAckStart=366;   sT[0].sCP[0].sCPR[114].nAckNum=1;   sT[0].sCP[0].sCPR[114].nSPOffsetCS= 1932; sT[0].sCP[0].sCPR[114].nSPOffsetLek= 1933; 	
sT[0].sCP[0].sCPR[115].nDCStart= 367;   sT[0].sCP[0].sCPR[115].nDCNum= 1;    sT[0].sCP[0].sCPR[115].nSCStart= 368;   sT[0].sCP[0].sCPR[115].nAckStart=369;   sT[0].sCP[0].sCPR[115].nAckNum=1;   sT[0].sCP[0].sCPR[115].nSPOffsetCS= 1948; sT[0].sCP[0].sCPR[115].nSPOffsetLek= 1949; 	


sT[0].sCP[0].sCPR[116].nDCStart= 370;   sT[0].sCP[0].sCPR[116].nDCNum= 1;    sT[0].sCP[0].sCPR[116].nSCStart= 371;   sT[0].sCP[0].sCPR[116].nAckStart=372;   sT[0].sCP[0].sCPR[116].nAckNum=1;   sT[0].sCP[0].sCPR[116].nSPOffsetCS= 1964; sT[0].sCP[0].sCPR[116].nSPOffsetLek= 1965; 	
sT[0].sCP[0].sCPR[117].nDCStart= 373;   sT[0].sCP[0].sCPR[117].nDCNum= 1;    sT[0].sCP[0].sCPR[117].nSCStart= 374;   sT[0].sCP[0].sCPR[117].nAckStart=375;   sT[0].sCP[0].sCPR[117].nAckNum=1;   sT[0].sCP[0].sCPR[117].nSPOffsetCS= 1980; sT[0].sCP[0].sCPR[117].nSPOffsetLek= 1981; 	
sT[0].sCP[0].sCPR[118].nDCStart= 376;   sT[0].sCP[0].sCPR[118].nDCNum= 1;    sT[0].sCP[0].sCPR[118].nSCStart= 377;   sT[0].sCP[0].sCPR[118].nAckStart=378;   sT[0].sCP[0].sCPR[118].nAckNum=1;   sT[0].sCP[0].sCPR[118].nSPOffsetCS= 1996; sT[0].sCP[0].sCPR[118].nSPOffsetLek= 1997; 	
sT[0].sCP[0].sCPR[119].nDCStart= 379;   sT[0].sCP[0].sCPR[119].nDCNum= 1;    sT[0].sCP[0].sCPR[119].nSCStart= 380;   sT[0].sCP[0].sCPR[119].nAckStart=381;   sT[0].sCP[0].sCPR[119].nAckNum=1;   sT[0].sCP[0].sCPR[119].nSPOffsetCS= 2012; sT[0].sCP[0].sCPR[119].nSPOffsetLek= 2013; 	
sT[0].sCP[0].sCPR[120].nDCStart= 382;   sT[0].sCP[0].sCPR[120].nDCNum= 1;    sT[0].sCP[0].sCPR[120].nSCStart= 383;   sT[0].sCP[0].sCPR[120].nAckStart=384;   sT[0].sCP[0].sCPR[120].nAckNum=1;   sT[0].sCP[0].sCPR[120].nSPOffsetCS= 2028; sT[0].sCP[0].sCPR[120].nSPOffsetLek= 2029; 	
sT[0].sCP[0].sCPR[121].nDCStart= 385;   sT[0].sCP[0].sCPR[121].nDCNum= 1;    sT[0].sCP[0].sCPR[121].nSCStart= 386;   sT[0].sCP[0].sCPR[121].nAckStart=387;   sT[0].sCP[0].sCPR[121].nAckNum=1;   sT[0].sCP[0].sCPR[121].nSPOffsetCS= 2044; sT[0].sCP[0].sCPR[121].nSPOffsetLek= 2045; 	
sT[0].sCP[0].sCPR[122].nDCStart= 388;   sT[0].sCP[0].sCPR[122].nDCNum= 1;    sT[0].sCP[0].sCPR[122].nSCStart= 389;   sT[0].sCP[0].sCPR[122].nAckStart=390;   sT[0].sCP[0].sCPR[122].nAckNum=1;   sT[0].sCP[0].sCPR[122].nSPOffsetCS= 2060; sT[0].sCP[0].sCPR[122].nSPOffsetLek= 2061; 	
sT[0].sCP[0].sCPR[123].nDCStart= 391;   sT[0].sCP[0].sCPR[123].nDCNum= 1;    sT[0].sCP[0].sCPR[123].nSCStart= 392;   sT[0].sCP[0].sCPR[123].nAckStart=393;   sT[0].sCP[0].sCPR[123].nAckNum=1;   sT[0].sCP[0].sCPR[123].nSPOffsetCS= 2076; sT[0].sCP[0].sCPR[123].nSPOffsetLek= 2077; 	
sT[0].sCP[0].sCPR[124].nDCStart= 394;   sT[0].sCP[0].sCPR[124].nDCNum= 1;    sT[0].sCP[0].sCPR[124].nSCStart= 395;   sT[0].sCP[0].sCPR[124].nAckStart=396;   sT[0].sCP[0].sCPR[124].nAckNum=1;   sT[0].sCP[0].sCPR[124].nSPOffsetCS= 2092; sT[0].sCP[0].sCPR[124].nSPOffsetLek= 2093; 	
sT[0].sCP[0].sCPR[125].nDCStart= 397;   sT[0].sCP[0].sCPR[125].nDCNum= 1;    sT[0].sCP[0].sCPR[125].nSCStart= 398;   sT[0].sCP[0].sCPR[125].nAckStart=399;   sT[0].sCP[0].sCPR[125].nAckNum=1;   sT[0].sCP[0].sCPR[125].nSPOffsetCS= 2108; sT[0].sCP[0].sCPR[125].nSPOffsetLek= 2109; 	
sT[0].sCP[0].sCPR[126].nDCStart= 400;   sT[0].sCP[0].sCPR[126].nDCNum= 1;    sT[0].sCP[0].sCPR[126].nSCStart= 401;   sT[0].sCP[0].sCPR[126].nAckStart=402;   sT[0].sCP[0].sCPR[126].nAckNum=1;   sT[0].sCP[0].sCPR[126].nSPOffsetCS= 2124; sT[0].sCP[0].sCPR[126].nSPOffsetLek= 2125; 	

sT[0].sCP[0].sCPR[127].nDCStart= 403;   sT[0].sCP[0].sCPR[127].nDCNum= 1;    sT[0].sCP[0].sCPR[127].nSCStart= 404;   sT[0].sCP[0].sCPR[127].nAckStart=405;   sT[0].sCP[0].sCPR[127].nAckNum=1;   sT[0].sCP[0].sCPR[127].nSPOffsetCS= 2140; sT[0].sCP[0].sCPR[127].nSPOffsetLek= 2141; 	
sT[0].sCP[0].sCPR[128].nDCStart= 406;   sT[0].sCP[0].sCPR[128].nDCNum= 1;    sT[0].sCP[0].sCPR[128].nSCStart= 407;   sT[0].sCP[0].sCPR[128].nAckStart=408;   sT[0].sCP[0].sCPR[128].nAckNum=1;   sT[0].sCP[0].sCPR[128].nSPOffsetCS= 2156; sT[0].sCP[0].sCPR[128].nSPOffsetLek= 2157; 	
sT[0].sCP[0].sCPR[129].nDCStart= 409;   sT[0].sCP[0].sCPR[129].nDCNum= 1;    sT[0].sCP[0].sCPR[129].nSCStart= 410;   sT[0].sCP[0].sCPR[129].nAckStart=411;   sT[0].sCP[0].sCPR[129].nAckNum=1;   sT[0].sCP[0].sCPR[129].nSPOffsetCS= 2172; sT[0].sCP[0].sCPR[129].nSPOffsetLek= 2173; 	
sT[0].sCP[0].sCPR[130].nDCStart= 412;   sT[0].sCP[0].sCPR[130].nDCNum= 1;    sT[0].sCP[0].sCPR[130].nSCStart= 413;   sT[0].sCP[0].sCPR[130].nAckStart=414;   sT[0].sCP[0].sCPR[130].nAckNum=1;   sT[0].sCP[0].sCPR[130].nSPOffsetCS= 2188; sT[0].sCP[0].sCPR[130].nSPOffsetLek= 2189; 	
sT[0].sCP[0].sCPR[131].nDCStart= 415;   sT[0].sCP[0].sCPR[131].nDCNum= 1;    sT[0].sCP[0].sCPR[131].nSCStart= 416;   sT[0].sCP[0].sCPR[131].nAckStart=417;   sT[0].sCP[0].sCPR[131].nAckNum=1;   sT[0].sCP[0].sCPR[131].nSPOffsetCS= 2204; sT[0].sCP[0].sCPR[131].nSPOffsetLek= 2205; 	
sT[0].sCP[0].sCPR[132].nDCStart= 418;   sT[0].sCP[0].sCPR[132].nDCNum= 1;    sT[0].sCP[0].sCPR[132].nSCStart= 419;   sT[0].sCP[0].sCPR[132].nAckStart=420;   sT[0].sCP[0].sCPR[132].nAckNum=1;   sT[0].sCP[0].sCPR[132].nSPOffsetCS= 2220; sT[0].sCP[0].sCPR[132].nSPOffsetLek= 2221; 	
sT[0].sCP[0].sCPR[133].nDCStart= 421;   sT[0].sCP[0].sCPR[133].nDCNum= 1;    sT[0].sCP[0].sCPR[133].nSCStart= 422;   sT[0].sCP[0].sCPR[133].nAckStart=423;   sT[0].sCP[0].sCPR[133].nAckNum=1;   sT[0].sCP[0].sCPR[133].nSPOffsetCS= 2236; sT[0].sCP[0].sCPR[133].nSPOffsetLek= 2237; 	
sT[0].sCP[0].sCPR[134].nDCStart= 424;   sT[0].sCP[0].sCPR[134].nDCNum= 1;    sT[0].sCP[0].sCPR[134].nSCStart= 425;   sT[0].sCP[0].sCPR[134].nAckStart=426;   sT[0].sCP[0].sCPR[134].nAckNum=1;   sT[0].sCP[0].sCPR[134].nSPOffsetCS= 2252; sT[0].sCP[0].sCPR[134].nSPOffsetLek= 2253; 	
sT[0].sCP[0].sCPR[135].nDCStart= 427;   sT[0].sCP[0].sCPR[135].nDCNum= 1;    sT[0].sCP[0].sCPR[135].nSCStart= 428;   sT[0].sCP[0].sCPR[135].nAckStart=429;   sT[0].sCP[0].sCPR[135].nAckNum=1;   sT[0].sCP[0].sCPR[135].nSPOffsetCS= 2268; sT[0].sCP[0].sCPR[135].nSPOffsetLek= 2269; 	
sT[0].sCP[0].sCPR[136].nDCStart= 430;   sT[0].sCP[0].sCPR[136].nDCNum= 1;    sT[0].sCP[0].sCPR[136].nSCStart= 431;   sT[0].sCP[0].sCPR[136].nAckStart=432;   sT[0].sCP[0].sCPR[136].nAckNum=1;   sT[0].sCP[0].sCPR[136].nSPOffsetCS= 2284; sT[0].sCP[0].sCPR[136].nSPOffsetLek= 2285; 	
sT[0].sCP[0].sCPR[137].nDCStart= 433;   sT[0].sCP[0].sCPR[137].nDCNum= 1;    sT[0].sCP[0].sCPR[137].nSCStart= 434;   sT[0].sCP[0].sCPR[137].nAckStart=435;   sT[0].sCP[0].sCPR[137].nAckNum=1;   sT[0].sCP[0].sCPR[137].nSPOffsetCS= 2300; sT[0].sCP[0].sCPR[137].nSPOffsetLek= 2301; 	
sT[0].sCP[0].sCPR[138].nDCStart= 436;   sT[0].sCP[0].sCPR[138].nDCNum= 1;    sT[0].sCP[0].sCPR[138].nSCStart= 437;   sT[0].sCP[0].sCPR[138].nAckStart=438;   sT[0].sCP[0].sCPR[138].nAckNum=1;   sT[0].sCP[0].sCPR[138].nSPOffsetCS= 2316; sT[0].sCP[0].sCPR[138].nSPOffsetLek= 2317; 	
sT[0].sCP[0].sCPR[139].nDCStart= 439;   sT[0].sCP[0].sCPR[139].nDCNum= 1;    sT[0].sCP[0].sCPR[139].nSCStart= 440;   sT[0].sCP[0].sCPR[139].nAckStart=441;   sT[0].sCP[0].sCPR[139].nAckNum=1;   sT[0].sCP[0].sCPR[139].nSPOffsetCS= 2332; sT[0].sCP[0].sCPR[139].nSPOffsetLek= 2333; 	
sT[0].sCP[0].sCPR[140].nDCStart= 442;   sT[0].sCP[0].sCPR[140].nDCNum= 1;    sT[0].sCP[0].sCPR[140].nSCStart= 443;   sT[0].sCP[0].sCPR[140].nAckStart=444;   sT[0].sCP[0].sCPR[140].nAckNum=1;   sT[0].sCP[0].sCPR[140].nSPOffsetCS= 2348; sT[0].sCP[0].sCPR[140].nSPOffsetLek= 2349; 	
sT[0].sCP[0].sCPR[141].nDCStart= 445;   sT[0].sCP[0].sCPR[141].nDCNum= 1;    sT[0].sCP[0].sCPR[141].nSCStart= 446;   sT[0].sCP[0].sCPR[141].nAckStart=447;   sT[0].sCP[0].sCPR[141].nAckNum=1;   sT[0].sCP[0].sCPR[141].nSPOffsetCS= 2364; sT[0].sCP[0].sCPR[141].nSPOffsetLek= 2365; 	
sT[0].sCP[0].sCPR[142].nDCStart= 448;   sT[0].sCP[0].sCPR[142].nDCNum= 1;    sT[0].sCP[0].sCPR[142].nSCStart= 449;   sT[0].sCP[0].sCPR[142].nAckStart=450;   sT[0].sCP[0].sCPR[142].nAckNum=1;   sT[0].sCP[0].sCPR[142].nSPOffsetCS= 2380; sT[0].sCP[0].sCPR[142].nSPOffsetLek= 2381; 	
sT[0].sCP[0].sCPR[143].nDCStart= 451;   sT[0].sCP[0].sCPR[143].nDCNum= 1;    sT[0].sCP[0].sCPR[143].nSCStart= 452;   sT[0].sCP[0].sCPR[143].nAckStart=453;   sT[0].sCP[0].sCPR[143].nAckNum=1;   sT[0].sCP[0].sCPR[143].nSPOffsetCS= 2396; sT[0].sCP[0].sCPR[143].nSPOffsetLek= 2397; 	
sT[0].sCP[0].sCPR[144].nDCStart= 454;   sT[0].sCP[0].sCPR[144].nDCNum= 1;    sT[0].sCP[0].sCPR[144].nSCStart= 455;   sT[0].sCP[0].sCPR[144].nAckStart=456;   sT[0].sCP[0].sCPR[144].nAckNum=1;   sT[0].sCP[0].sCPR[144].nSPOffsetCS= 2412; sT[0].sCP[0].sCPR[144].nSPOffsetLek= 2413; 	
sT[0].sCP[0].sCPR[145].nDCStart= 457;   sT[0].sCP[0].sCPR[145].nDCNum= 1;    sT[0].sCP[0].sCPR[145].nSCStart= 458;   sT[0].sCP[0].sCPR[145].nAckStart=459;   sT[0].sCP[0].sCPR[145].nAckNum=1;   sT[0].sCP[0].sCPR[145].nSPOffsetCS= 2428; sT[0].sCP[0].sCPR[145].nSPOffsetLek= 2429; 	
sT[0].sCP[0].sCPR[146].nDCStart= 460;   sT[0].sCP[0].sCPR[146].nDCNum= 1;    sT[0].sCP[0].sCPR[146].nSCStart= 461;   sT[0].sCP[0].sCPR[146].nAckStart=462;   sT[0].sCP[0].sCPR[146].nAckNum=1;   sT[0].sCP[0].sCPR[146].nSPOffsetCS= 2444; sT[0].sCP[0].sCPR[146].nSPOffsetLek= 2445; 	
sT[0].sCP[0].sCPR[147].nDCStart= 463;   sT[0].sCP[0].sCPR[147].nDCNum= 1;    sT[0].sCP[0].sCPR[147].nSCStart= 464;   sT[0].sCP[0].sCPR[147].nAckStart=465;   sT[0].sCP[0].sCPR[147].nAckNum=1;   sT[0].sCP[0].sCPR[147].nSPOffsetCS= 2460; sT[0].sCP[0].sCPR[147].nSPOffsetLek= 2461; 	
sT[0].sCP[0].sCPR[148].nDCStart= 466;   sT[0].sCP[0].sCPR[148].nDCNum= 1;    sT[0].sCP[0].sCPR[148].nSCStart= 467;   sT[0].sCP[0].sCPR[148].nAckStart=468;   sT[0].sCP[0].sCPR[148].nAckNum=1;   sT[0].sCP[0].sCPR[148].nSPOffsetCS= 2476; sT[0].sCP[0].sCPR[148].nSPOffsetLek= 2477; 	
sT[0].sCP[0].sCPR[149].nDCStart= 469;   sT[0].sCP[0].sCPR[149].nDCNum= 1;    sT[0].sCP[0].sCPR[149].nSCStart= 470;   sT[0].sCP[0].sCPR[149].nAckStart=471;   sT[0].sCP[0].sCPR[149].nAckNum=1;   sT[0].sCP[0].sCPR[149].nSPOffsetCS= 2492; sT[0].sCP[0].sCPR[149].nSPOffsetLek= 2493; 	
sT[0].sCP[0].sCPR[150].nDCStart= 472;   sT[0].sCP[0].sCPR[150].nDCNum= 1;    sT[0].sCP[0].sCPR[150].nSCStart= 473;   sT[0].sCP[0].sCPR[150].nAckStart=474;   sT[0].sCP[0].sCPR[150].nAckNum=1;   sT[0].sCP[0].sCPR[150].nSPOffsetCS= 2508; sT[0].sCP[0].sCPR[150].nSPOffsetLek= 2509; 	
sT[0].sCP[0].sCPR[151].nDCStart= 475;   sT[0].sCP[0].sCPR[151].nDCNum= 1;    sT[0].sCP[0].sCPR[151].nSCStart= 476;   sT[0].sCP[0].sCPR[151].nAckStart=477;   sT[0].sCP[0].sCPR[151].nAckNum=1;   sT[0].sCP[0].sCPR[151].nSPOffsetCS= 2524; sT[0].sCP[0].sCPR[151].nSPOffsetLek= 2525; 	
sT[0].sCP[0].sCPR[152].nDCStart= 478;   sT[0].sCP[0].sCPR[152].nDCNum= 1;    sT[0].sCP[0].sCPR[152].nSCStart= 479;   sT[0].sCP[0].sCPR[152].nAckStart=480;   sT[0].sCP[0].sCPR[152].nAckNum=1;   sT[0].sCP[0].sCPR[152].nSPOffsetCS= 2540; sT[0].sCP[0].sCPR[152].nSPOffsetLek= 2541; 	
sT[0].sCP[0].sCPR[153].nDCStart= 481;   sT[0].sCP[0].sCPR[153].nDCNum= 1;    sT[0].sCP[0].sCPR[153].nSCStart= 482;   sT[0].sCP[0].sCPR[153].nAckStart=483;   sT[0].sCP[0].sCPR[153].nAckNum=1;   sT[0].sCP[0].sCPR[153].nSPOffsetCS= 2556; sT[0].sCP[0].sCPR[153].nSPOffsetLek= 2557; 	
sT[0].sCP[0].sCPR[154].nDCStart= 484;   sT[0].sCP[0].sCPR[154].nDCNum= 1;    sT[0].sCP[0].sCPR[154].nSCStart= 485;   sT[0].sCP[0].sCPR[154].nAckStart=486;   sT[0].sCP[0].sCPR[154].nAckNum=1;   sT[0].sCP[0].sCPR[154].nSPOffsetCS= 2572; sT[0].sCP[0].sCPR[154].nSPOffsetLek= 2573; 	
sT[0].sCP[0].sCPR[155].nDCStart= 487;   sT[0].sCP[0].sCPR[155].nDCNum= 1;    sT[0].sCP[0].sCPR[155].nSCStart= 488;   sT[0].sCP[0].sCPR[155].nAckStart=489;   sT[0].sCP[0].sCPR[155].nAckNum=1;   sT[0].sCP[0].sCPR[155].nSPOffsetCS= 2588; sT[0].sCP[0].sCPR[155].nSPOffsetLek= 2589; 	
sT[0].sCP[0].sCPR[156].nDCStart= 490;   sT[0].sCP[0].sCPR[156].nDCNum= 1;    sT[0].sCP[0].sCPR[156].nSCStart= 491;   sT[0].sCP[0].sCPR[156].nAckStart=492;   sT[0].sCP[0].sCPR[156].nAckNum=1;   sT[0].sCP[0].sCPR[156].nSPOffsetCS= 2604; sT[0].sCP[0].sCPR[156].nSPOffsetLek= 2605; 	
sT[0].sCP[0].sCPR[157].nDCStart= 493;   sT[0].sCP[0].sCPR[157].nDCNum= 1;    sT[0].sCP[0].sCPR[157].nSCStart= 494;   sT[0].sCP[0].sCPR[157].nAckStart=495;   sT[0].sCP[0].sCPR[157].nAckNum=1;   sT[0].sCP[0].sCPR[157].nSPOffsetCS= 2620; sT[0].sCP[0].sCPR[157].nSPOffsetLek= 2621; 	
sT[0].sCP[0].sCPR[158].nDCStart= 496;   sT[0].sCP[0].sCPR[158].nDCNum= 1;    sT[0].sCP[0].sCPR[158].nSCStart= 497;   sT[0].sCP[0].sCPR[158].nAckStart=498;   sT[0].sCP[0].sCPR[158].nAckNum=1;   sT[0].sCP[0].sCPR[158].nSPOffsetCS= 2636; sT[0].sCP[0].sCPR[158].nSPOffsetLek= 2637; 	
sT[0].sCP[0].sCPR[159].nDCStart= 499;   sT[0].sCP[0].sCPR[159].nDCNum= 1;    sT[0].sCP[0].sCPR[159].nSCStart= 500;   sT[0].sCP[0].sCPR[159].nAckStart=501;   sT[0].sCP[0].sCPR[159].nAckNum=1;   sT[0].sCP[0].sCPR[159].nSPOffsetCS= 2652; sT[0].sCP[0].sCPR[159].nSPOffsetLek= 2653; 	
sT[0].sCP[0].sCPR[160].nDCStart= 502;   sT[0].sCP[0].sCPR[160].nDCNum= 1;    sT[0].sCP[0].sCPR[160].nSCStart= 503;   sT[0].sCP[0].sCPR[160].nAckStart=504;   sT[0].sCP[0].sCPR[160].nAckNum=1;   sT[0].sCP[0].sCPR[160].nSPOffsetCS= 2668; sT[0].sCP[0].sCPR[160].nSPOffsetLek= 2669; 	
sT[0].sCP[0].sCPR[161].nDCStart= 505;   sT[0].sCP[0].sCPR[161].nDCNum= 1;    sT[0].sCP[0].sCPR[161].nSCStart= 506;   sT[0].sCP[0].sCPR[161].nAckStart=507;   sT[0].sCP[0].sCPR[161].nAckNum=1;   sT[0].sCP[0].sCPR[161].nSPOffsetCS= 2684; sT[0].sCP[0].sCPR[161].nSPOffsetLek= 2685; 	

sT[0].sCP[0].sCPR[162].nDCStart= 508;   sT[0].sCP[0].sCPR[162].nDCNum= 1;    sT[0].sCP[0].sCPR[162].nSCStart= 509;   sT[0].sCP[0].sCPR[162].nAckStart=510;   sT[0].sCP[0].sCPR[162].nAckNum=1;   sT[0].sCP[0].sCPR[162].nSPOffsetCS= 2700; sT[0].sCP[0].sCPR[162].nSPOffsetLek= 2701; 	
sT[0].sCP[0].sCPR[163].nDCStart= 511;   sT[0].sCP[0].sCPR[163].nDCNum= 1;    sT[0].sCP[0].sCPR[163].nSCStart= 512;   sT[0].sCP[0].sCPR[163].nAckStart=513;   sT[0].sCP[0].sCPR[163].nAckNum=1;   sT[0].sCP[0].sCPR[163].nSPOffsetCS= 2716; sT[0].sCP[0].sCPR[163].nSPOffsetLek= 2717; 	
sT[0].sCP[0].sCPR[164].nDCStart= 514;   sT[0].sCP[0].sCPR[164].nDCNum= 1;    sT[0].sCP[0].sCPR[164].nSCStart= 515;   sT[0].sCP[0].sCPR[164].nAckStart=516;   sT[0].sCP[0].sCPR[164].nAckNum=1;   sT[0].sCP[0].sCPR[164].nSPOffsetCS= 2732; sT[0].sCP[0].sCPR[164].nSPOffsetLek= 2733; 	
sT[0].sCP[0].sCPR[165].nDCStart= 517;   sT[0].sCP[0].sCPR[165].nDCNum= 1;    sT[0].sCP[0].sCPR[165].nSCStart= 518;   sT[0].sCP[0].sCPR[165].nAckStart=519;   sT[0].sCP[0].sCPR[165].nAckNum=1;   sT[0].sCP[0].sCPR[165].nSPOffsetCS= 2748; sT[0].sCP[0].sCPR[165].nSPOffsetLek= 2749; 	
sT[0].sCP[0].sCPR[166].nDCStart= 520;   sT[0].sCP[0].sCPR[166].nDCNum= 1;    sT[0].sCP[0].sCPR[166].nSCStart= 521;   sT[0].sCP[0].sCPR[166].nAckStart=522;   sT[0].sCP[0].sCPR[166].nAckNum=1;   sT[0].sCP[0].sCPR[166].nSPOffsetCS= 2764; sT[0].sCP[0].sCPR[166].nSPOffsetLek= 2765; 	
sT[0].sCP[0].sCPR[167].nDCStart= 523;   sT[0].sCP[0].sCPR[167].nDCNum= 1;    sT[0].sCP[0].sCPR[167].nSCStart= 524;   sT[0].sCP[0].sCPR[167].nAckStart=525;   sT[0].sCP[0].sCPR[167].nAckNum=1;   sT[0].sCP[0].sCPR[167].nSPOffsetCS= 2780; sT[0].sCP[0].sCPR[167].nSPOffsetLek= 2781; 	
sT[0].sCP[0].sCPR[168].nDCStart= 526;   sT[0].sCP[0].sCPR[168].nDCNum= 1;    sT[0].sCP[0].sCPR[168].nSCStart= 527;   sT[0].sCP[0].sCPR[168].nAckStart=528;   sT[0].sCP[0].sCPR[168].nAckNum=1;   sT[0].sCP[0].sCPR[168].nSPOffsetCS= 2796; sT[0].sCP[0].sCPR[168].nSPOffsetLek= 2797; 	
sT[0].sCP[0].sCPR[169].nDCStart= 529;   sT[0].sCP[0].sCPR[169].nDCNum= 1;    sT[0].sCP[0].sCPR[169].nSCStart= 530;   sT[0].sCP[0].sCPR[169].nAckStart=531;   sT[0].sCP[0].sCPR[169].nAckNum=1;   sT[0].sCP[0].sCPR[169].nSPOffsetCS= 2812; sT[0].sCP[0].sCPR[169].nSPOffsetLek= 2813; 	
sT[0].sCP[0].sCPR[170].nDCStart= 532;   sT[0].sCP[0].sCPR[170].nDCNum= 1;    sT[0].sCP[0].sCPR[170].nSCStart= 533;   sT[0].sCP[0].sCPR[170].nAckStart=534;   sT[0].sCP[0].sCPR[170].nAckNum=1;   sT[0].sCP[0].sCPR[170].nSPOffsetCS= 2828; sT[0].sCP[0].sCPR[170].nSPOffsetLek= 2829; 	
sT[0].sCP[0].sCPR[171].nDCStart= 535;   sT[0].sCP[0].sCPR[171].nDCNum= 1;    sT[0].sCP[0].sCPR[171].nSCStart= 536;   sT[0].sCP[0].sCPR[171].nAckStart=537;   sT[0].sCP[0].sCPR[171].nAckNum=1;   sT[0].sCP[0].sCPR[171].nSPOffsetCS= 2844; sT[0].sCP[0].sCPR[171].nSPOffsetLek= 2845; 	
sT[0].sCP[0].sCPR[172].nDCStart= 538;   sT[0].sCP[0].sCPR[172].nDCNum= 1;    sT[0].sCP[0].sCPR[172].nSCStart= 539;   sT[0].sCP[0].sCPR[172].nAckStart=540;   sT[0].sCP[0].sCPR[172].nAckNum=1;   sT[0].sCP[0].sCPR[172].nSPOffsetCS= 2860; sT[0].sCP[0].sCPR[172].nSPOffsetLek= 2861; 	
sT[0].sCP[0].sCPR[173].nDCStart= 541;   sT[0].sCP[0].sCPR[173].nDCNum= 1;    sT[0].sCP[0].sCPR[173].nSCStart= 542;   sT[0].sCP[0].sCPR[173].nAckStart=543;   sT[0].sCP[0].sCPR[173].nAckNum=1;   sT[0].sCP[0].sCPR[173].nSPOffsetCS= 2876; sT[0].sCP[0].sCPR[173].nSPOffsetLek= 2877; 	
sT[0].sCP[0].sCPR[174].nDCStart= 544;   sT[0].sCP[0].sCPR[174].nDCNum= 1;    sT[0].sCP[0].sCPR[174].nSCStart= 545;   sT[0].sCP[0].sCPR[174].nAckStart=546;   sT[0].sCP[0].sCPR[174].nAckNum=1;   sT[0].sCP[0].sCPR[174].nSPOffsetCS= 2892; sT[0].sCP[0].sCPR[174].nSPOffsetLek= 2893; 	
sT[0].sCP[0].sCPR[175].nDCStart= 547;   sT[0].sCP[0].sCPR[175].nDCNum= 1;    sT[0].sCP[0].sCPR[175].nSCStart= 548;   sT[0].sCP[0].sCPR[175].nAckStart=549;   sT[0].sCP[0].sCPR[175].nAckNum=1;   sT[0].sCP[0].sCPR[175].nSPOffsetCS= 2908; sT[0].sCP[0].sCPR[175].nSPOffsetLek= 2909; 	
sT[0].sCP[0].sCPR[176].nDCStart= 550;   sT[0].sCP[0].sCPR[176].nDCNum= 1;    sT[0].sCP[0].sCPR[176].nSCStart= 551;   sT[0].sCP[0].sCPR[176].nAckStart=552;   sT[0].sCP[0].sCPR[176].nAckNum=1;   sT[0].sCP[0].sCPR[176].nSPOffsetCS= 2924; sT[0].sCP[0].sCPR[176].nSPOffsetLek= 2925; 	
sT[0].sCP[0].sCPR[177].nDCStart= 553;   sT[0].sCP[0].sCPR[177].nDCNum= 1;    sT[0].sCP[0].sCPR[177].nSCStart= 554;   sT[0].sCP[0].sCPR[177].nAckStart=555;   sT[0].sCP[0].sCPR[177].nAckNum=1;   sT[0].sCP[0].sCPR[177].nSPOffsetCS= 2940; sT[0].sCP[0].sCPR[177].nSPOffsetLek= 2941; 	
sT[0].sCP[0].sCPR[178].nDCStart= 556;   sT[0].sCP[0].sCPR[178].nDCNum= 1;    sT[0].sCP[0].sCPR[178].nSCStart= 557;   sT[0].sCP[0].sCPR[178].nAckStart=558;   sT[0].sCP[0].sCPR[178].nAckNum=1;   sT[0].sCP[0].sCPR[178].nSPOffsetCS= 2956; sT[0].sCP[0].sCPR[178].nSPOffsetLek= 2957; 	

sT[0].sCP[0].sCPR[179].nDCStart= 0  ;   sT[0].sCP[0].sCPR[179].nDCNum= 0;    sT[0].sCP[0].sCPR[179].nSCStart= 559;   sT[0].sCP[0].sCPR[179].nAckStart=0  ;   sT[0].sCP[0].sCPR[179].nAckNum=0;   sT[0].sCP[0].sCPR[179].nSPOffsetCS= 2964; sT[0].sCP[0].sCPR[179].nSPOffsetLek= 2965; 	

sT[0].sCP[0].sCPR[181].nDCStart= 560;   sT[0].sCP[0].sCPR[181].nDCNum= 1;    sT[0].sCP[0].sCPR[181].nSCStart= 561;   sT[0].sCP[0].sCPR[181].nAckStart=562;   sT[0].sCP[0].sCPR[181].nAckNum=1;   sT[0].sCP[0].sCPR[181].nSPOffsetCS= 2980; sT[0].sCP[0].sCPR[181].nSPOffsetLek= 2981; 	
sT[0].sCP[0].sCPR[182].nDCStart= 563;   sT[0].sCP[0].sCPR[182].nDCNum= 1;    sT[0].sCP[0].sCPR[182].nSCStart= 564;   sT[0].sCP[0].sCPR[182].nAckStart=565;   sT[0].sCP[0].sCPR[182].nAckNum=1;   sT[0].sCP[0].sCPR[182].nSPOffsetCS= 2996; sT[0].sCP[0].sCPR[182].nSPOffsetLek= 2997; 	
sT[0].sCP[0].sCPR[183].nDCStart= 566;   sT[0].sCP[0].sCPR[183].nDCNum= 1;    sT[0].sCP[0].sCPR[183].nSCStart= 567;   sT[0].sCP[0].sCPR[183].nAckStart=568;   sT[0].sCP[0].sCPR[183].nAckNum=1;   sT[0].sCP[0].sCPR[183].nSPOffsetCS= 3012; sT[0].sCP[0].sCPR[183].nSPOffsetLek= 3013; 	
sT[0].sCP[0].sCPR[184].nDCStart= 569;   sT[0].sCP[0].sCPR[184].nDCNum= 1;    sT[0].sCP[0].sCPR[184].nSCStart= 570;   sT[0].sCP[0].sCPR[184].nAckStart=571;   sT[0].sCP[0].sCPR[184].nAckNum=1;   sT[0].sCP[0].sCPR[184].nSPOffsetCS= 3028; sT[0].sCP[0].sCPR[184].nSPOffsetLek= 3029; 	
sT[0].sCP[0].sCPR[185].nDCStart= 572;   sT[0].sCP[0].sCPR[185].nDCNum= 1;    sT[0].sCP[0].sCPR[185].nSCStart= 573;   sT[0].sCP[0].sCPR[185].nAckStart=574;   sT[0].sCP[0].sCPR[185].nAckNum=1;   sT[0].sCP[0].sCPR[185].nSPOffsetCS= 3044; sT[0].sCP[0].sCPR[185].nSPOffsetLek= 3045; 	
sT[0].sCP[0].sCPR[186].nDCStart= 575;   sT[0].sCP[0].sCPR[186].nDCNum= 1;    sT[0].sCP[0].sCPR[186].nSCStart= 576;   sT[0].sCP[0].sCPR[186].nAckStart=577;   sT[0].sCP[0].sCPR[186].nAckNum=1;   sT[0].sCP[0].sCPR[186].nSPOffsetCS= 3060; sT[0].sCP[0].sCPR[186].nSPOffsetLek= 3061; 	
sT[0].sCP[0].sCPR[180].nDCStart= 578;   sT[0].sCP[0].sCPR[180].nDCNum= 1;    sT[0].sCP[0].sCPR[180].nSCStart= 579;   sT[0].sCP[0].sCPR[180].nAckStart=580;   sT[0].sCP[0].sCPR[180].nAckNum=1;   sT[0].sCP[0].sCPR[180].nSPOffsetCS= 3076; sT[0].sCP[0].sCPR[180].nSPOffsetLek= 3077; 	
sT[0].sCP[0].sCPR[187].nDCStart= 581;   sT[0].sCP[0].sCPR[187].nDCNum= 1;    sT[0].sCP[0].sCPR[187].nSCStart= 582;   sT[0].sCP[0].sCPR[187].nAckStart=583;   sT[0].sCP[0].sCPR[187].nAckNum=1;   sT[0].sCP[0].sCPR[187].nSPOffsetCS= 3092; sT[0].sCP[0].sCPR[187].nSPOffsetLek= 3093; 	
sT[0].sCP[0].sCPR[188].nDCStart= 584;   sT[0].sCP[0].sCPR[188].nDCNum= 1;    sT[0].sCP[0].sCPR[188].nSCStart= 585;   sT[0].sCP[0].sCPR[188].nAckStart=586;   sT[0].sCP[0].sCPR[188].nAckNum=1;   sT[0].sCP[0].sCPR[188].nSPOffsetCS= 3108; sT[0].sCP[0].sCPR[188].nSPOffsetLek= 3109; 	

sT[0].sCP[0].sCPR[189].nDCStart= 587;   sT[0].sCP[0].sCPR[189].nDCNum= 1;    sT[0].sCP[0].sCPR[189].nSCStart= 588;   sT[0].sCP[0].sCPR[189].nAckStart=589;   sT[0].sCP[0].sCPR[189].nAckNum=1;   sT[0].sCP[0].sCPR[189].nSPOffsetCS= 3124; sT[0].sCP[0].sCPR[189].nSPOffsetLek= 3125; 	
sT[0].sCP[0].sCPR[190].nDCStart= 590;   sT[0].sCP[0].sCPR[190].nDCNum= 1;    sT[0].sCP[0].sCPR[190].nSCStart= 591;   sT[0].sCP[0].sCPR[190].nAckStart=592;   sT[0].sCP[0].sCPR[190].nAckNum=1;   sT[0].sCP[0].sCPR[190].nSPOffsetCS= 3140; sT[0].sCP[0].sCPR[190].nSPOffsetLek= 3141; 	

sT[0].sCP[0].sCPR[191].nDCStart= 593;   sT[0].sCP[0].sCPR[191].nDCNum= 4;    sT[0].sCP[0].sCPR[191].nSCStart= 597;   sT[0].sCP[0].sCPR[191].nAckStart=0;     sT[0].sCP[0].sCPR[191].nAckNum=0;   sT[0].sCP[0].sCPR[191].nSPOffsetCS= 3156; sT[0].sCP[0].sCPR[191].nSPOffsetLek= 3157; 	

sT[0].sCP[0].sCPR[192].nDCStart= 598;   sT[0].sCP[0].sCPR[192].nDCNum= 1;    sT[0].sCP[0].sCPR[192].nSCStart= 599;   sT[0].sCP[0].sCPR[192].nAckStart=0;	 sT[0].sCP[0].sCPR[192].nAckNum=0;   sT[0].sCP[0].sCPR[192].nSPOffsetCS= 3172; sT[0].sCP[0].sCPR[192].nSPOffsetLek= 3173; 	
sT[0].sCP[0].sCPR[193].nDCStart= 601;   sT[0].sCP[0].sCPR[193].nDCNum= 1;    sT[0].sCP[0].sCPR[193].nSCStart= 602;   sT[0].sCP[0].sCPR[193].nAckStart=0;	 sT[0].sCP[0].sCPR[193].nAckNum=0;   sT[0].sCP[0].sCPR[193].nSPOffsetCS= 3188; sT[0].sCP[0].sCPR[193].nSPOffsetLek= 3189; 	
sT[0].sCP[0].sCPR[194].nDCStart= 604;   sT[0].sCP[0].sCPR[194].nDCNum= 4;    sT[0].sCP[0].sCPR[194].nSCStart= 608;   sT[0].sCP[0].sCPR[194].nAckStart=0;     sT[0].sCP[0].sCPR[194].nAckNum=0;   sT[0].sCP[0].sCPR[194].nSPOffsetCS= 3204; sT[0].sCP[0].sCPR[194].nSPOffsetLek= 3205; 	


sT[0].sCP[0].sCPR[195].nDCStart= 0;     sT[0].sCP[0].sCPR[195].nDCNum= 0;    sT[0].sCP[0].sCPR[195].nSCStart= 609;   sT[0].sCP[0].sCPR[195].nAckStart=0;     sT[0].sCP[0].sCPR[195].nAckNum=0;   sT[0].sCP[0].sCPR[195].nSPOffsetCS= 3211; sT[0].sCP[0].sCPR[195].nSPOffsetLek= 3212; 	

sT[0].sCP[0].sCPR[196].nDCStart= 610;   sT[0].sCP[0].sCPR[196].nDCNum = 4;   sT[0].sCP[0].sCPR[196].nSCStart= 615;   sT[0].sCP[0].sCPR[196].nAckStart=614;   sT[0].sCP[0].sCPR[196].nAckNum =1;  sT[0].sCP[0].sCPR[196].nSPOffsetCS= 3248; sT[0].sCP[0].sCPR[196].nSPOffsetLek= 3249; 	

sT[0].sCP[0].sCPR[197].nDCStart= 616;   sT[0].sCP[0].sCPR[197].nDCNum = 1;   sT[0].sCP[0].sCPR[197].nSCStart= 617;   sT[0].sCP[0].sCPR[197].nAckStart=0;     sT[0].sCP[0].sCPR[197].nAckNum =0;  sT[0].sCP[0].sCPR[197].nSPOffsetCS= 3264; sT[0].sCP[0].sCPR[197].nSPOffsetLek= 3265; 	
sT[0].sCP[0].sCPR[198].nDCStart= 619;   sT[0].sCP[0].sCPR[198].nDCNum = 1;   sT[0].sCP[0].sCPR[198].nSCStart= 620;   sT[0].sCP[0].sCPR[198].nAckStart=0;     sT[0].sCP[0].sCPR[198].nAckNum =0;  sT[0].sCP[0].sCPR[198].nSPOffsetCS= 3280; sT[0].sCP[0].sCPR[198].nSPOffsetLek= 3281; 	

sT[0].sCP[0].sCPR[199].nDCStart= 622;   sT[0].sCP[0].sCPR[199].nDCNum = 1;   sT[0].sCP[0].sCPR[199].nSCStart= 623;   sT[0].sCP[0].sCPR[199].nAckStart=0;     sT[0].sCP[0].sCPR[199].nAckNum =0;  sT[0].sCP[0].sCPR[199].nSPOffsetCS= 3296; sT[0].sCP[0].sCPR[199].nSPOffsetLek= 3297; 	
sT[0].sCP[0].sCPR[200].nDCStart= 625;   sT[0].sCP[0].sCPR[200].nDCNum = 1;   sT[0].sCP[0].sCPR[200].nSCStart= 626;   sT[0].sCP[0].sCPR[200].nAckStart=0;     sT[0].sCP[0].sCPR[200].nAckNum =0;  sT[0].sCP[0].sCPR[200].nSPOffsetCS= 3312; sT[0].sCP[0].sCPR[200].nSPOffsetLek= 3313; 	

sT[0].sCP[0].sCPR[201].nDCStart= 628;   sT[0].sCP[0].sCPR[201].nDCNum = 1;   sT[0].sCP[0].sCPR[201].nSCStart= 629;   sT[0].sCP[0].sCPR[201].nAckStart=0;     sT[0].sCP[0].sCPR[201].nAckNum =0;  sT[0].sCP[0].sCPR[201].nSPOffsetCS= 3328; sT[0].sCP[0].sCPR[201].nSPOffsetLek= 3329; 	
sT[0].sCP[0].sCPR[202].nDCStart= 631;   sT[0].sCP[0].sCPR[202].nDCNum = 1;   sT[0].sCP[0].sCPR[202].nSCStart= 632;   sT[0].sCP[0].sCPR[202].nAckStart=0;     sT[0].sCP[0].sCPR[202].nAckNum =0;  sT[0].sCP[0].sCPR[202].nSPOffsetCS= 3344; sT[0].sCP[0].sCPR[202].nSPOffsetLek= 3345; 	

sT[0].sCP[0].sCPR[203].nDCStart= 634;   sT[0].sCP[0].sCPR[203].nDCNum = 1;   sT[0].sCP[0].sCPR[203].nSCStart= 635;   sT[0].sCP[0].sCPR[203].nAckStart=0;     sT[0].sCP[0].sCPR[203].nAckNum =0;  sT[0].sCP[0].sCPR[203].nSPOffsetCS= 3360; sT[0].sCP[0].sCPR[203].nSPOffsetLek= 3361; 	

sT[0].sCP[0].sCPR[204].nDCStart= 637;   sT[0].sCP[0].sCPR[204].nDCNum = 1;   sT[0].sCP[0].sCPR[204].nSCStart= 638;   sT[0].sCP[0].sCPR[204].nAckStart=0;     sT[0].sCP[0].sCPR[204].nAckNum =0;  sT[0].sCP[0].sCPR[204].nSPOffsetCS= 3376; sT[0].sCP[0].sCPR[204].nSPOffsetLek= 3377; 	
sT[0].sCP[0].sCPR[205].nDCStart= 640;   sT[0].sCP[0].sCPR[205].nDCNum = 1;   sT[0].sCP[0].sCPR[205].nSCStart= 641;   sT[0].sCP[0].sCPR[205].nAckStart=0;     sT[0].sCP[0].sCPR[205].nAckNum =0;  sT[0].sCP[0].sCPR[205].nSPOffsetCS= 3392; sT[0].sCP[0].sCPR[205].nSPOffsetLek= 3393; 	

sT[0].sCP[0].sCPR[206].nDCStart= 0;     sT[0].sCP[0].sCPR[206].nDCNum = 0;   sT[0].sCP[0].sCPR[206].nSCStart= 643;   sT[0].sCP[0].sCPR[206].nAckStart=0;     sT[0].sCP[0].sCPR[206].nAckNum =0;  sT[0].sCP[0].sCPR[206].nSPOffsetCS= 3399; sT[0].sCP[0].sCPR[206].nSPOffsetLek= 3400; 	
sT[0].sCP[0].sCPR[207].nDCStart= 0;     sT[0].sCP[0].sCPR[207].nDCNum = 0;   sT[0].sCP[0].sCPR[207].nSCStart= 644;   sT[0].sCP[0].sCPR[207].nAckStart=0;     sT[0].sCP[0].sCPR[207].nAckNum =0;  sT[0].sCP[0].sCPR[207].nSPOffsetCS= 3406; sT[0].sCP[0].sCPR[207].nSPOffsetLek= 3407; 	
sT[0].sCP[0].sCPR[208].nDCStart= 0;     sT[0].sCP[0].sCPR[208].nDCNum = 0;   sT[0].sCP[0].sCPR[208].nSCStart= 645;   sT[0].sCP[0].sCPR[208].nAckStart=0;     sT[0].sCP[0].sCPR[208].nAckNum =0;  sT[0].sCP[0].sCPR[208].nSPOffsetCS= 3413; sT[0].sCP[0].sCPR[208].nSPOffsetLek= 3414; 	
sT[0].sCP[0].sCPR[209].nDCStart= 0;     sT[0].sCP[0].sCPR[209].nDCNum = 0;   sT[0].sCP[0].sCPR[209].nSCStart= 646;   sT[0].sCP[0].sCPR[209].nAckStart=0;     sT[0].sCP[0].sCPR[209].nAckNum =0;  sT[0].sCP[0].sCPR[209].nSPOffsetCS= 3420; sT[0].sCP[0].sCPR[209].nSPOffsetLek= 3421; 	
sT[0].sCP[0].sCPR[210].nDCStart= 0;     sT[0].sCP[0].sCPR[210].nDCNum = 0;   sT[0].sCP[0].sCPR[210].nSCStart= 647;   sT[0].sCP[0].sCPR[210].nAckStart=0;     sT[0].sCP[0].sCPR[210].nAckNum =0;  sT[0].sCP[0].sCPR[210].nSPOffsetCS= 3427; sT[0].sCP[0].sCPR[210].nSPOffsetLek= 3428; 	

sT[0].sCP[0].sCPR[211].nDCStart= 649;   sT[0].sCP[0].sCPR[211].nDCNum = 4;   sT[0].sCP[0].sCPR[211].nSCStart= 653;   sT[0].sCP[0].sCPR[211].nAckStart=0;     sT[0].sCP[0].sCPR[211].nAckNum =0;  sT[0].sCP[0].sCPR[211].nSPOffsetCS= 3471; sT[0].sCP[0].sCPR[211].nSPOffsetLek= 3472; 	
sT[0].sCP[0].sCPR[212].nDCStart= 654;   sT[0].sCP[0].sCPR[212].nDCNum = 4;   sT[0].sCP[0].sCPR[212].nSCStart= 658;   sT[0].sCP[0].sCPR[212].nAckStart=0;     sT[0].sCP[0].sCPR[212].nAckNum =0;  sT[0].sCP[0].sCPR[212].nSPOffsetCS= 3540; sT[0].sCP[0].sCPR[212].nSPOffsetLek= 3541; 	

sT[0].sCP[0].sCPR[213].nDCStart= 659;   sT[0].sCP[0].sCPR[213].nDCNum = 1;   sT[0].sCP[0].sCPR[213].nSCStart= 660;   sT[0].sCP[0].sCPR[213].nAckStart=0;     sT[0].sCP[0].sCPR[213].nAckNum =0;  sT[0].sCP[0].sCPR[213].nSPOffsetCS= 3487; sT[0].sCP[0].sCPR[213].nSPOffsetLek= 3488; 	
sT[0].sCP[0].sCPR[214].nDCStart= 662;   sT[0].sCP[0].sCPR[214].nDCNum = 1;   sT[0].sCP[0].sCPR[214].nSCStart= 663;   sT[0].sCP[0].sCPR[214].nAckStart=0;     sT[0].sCP[0].sCPR[214].nAckNum =0;  sT[0].sCP[0].sCPR[214].nSPOffsetCS= 3503; sT[0].sCP[0].sCPR[214].nSPOffsetLek= 3504; 	


/* TMOK jelszámok inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
	sT[0].sMOT[nI].nIEC_SP_NUM = 14;
	sT[0].sMOT[nI].nIEC_DP_NUM  = 1;
	sT[0].sMOT[nI].nNMNum      = 3;
	
	/* Biztonsagi ellenorzes*/
	if (sT[0].sCP[0].sCPR[nI].nAckNum>4)
	{
		sT[0].sCP[0].sCPR[nI].nAckNum = 1;
	}	
}


/* 70-54  -----------------------------------------------------------*/	
sT[0].sTI[0].nType = TYP_TMOK;

	sT[0].sMOT[0].nIEC_SP				= 10;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_DP				= 10;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_NM				= 10;		/* Mérések IEC kezdõcíme */

/* 72-25  -----------------------------------------------------------*/	
sT[0].sTI[1].nType = TYP_TMOK;

	sT[0].sMOT[1].nIEC_SP				= 26;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_DP				= 11;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_NM				= 13;		/* Mérések IEC kezdõcíme */


/* 54-64  -----------------------------------------------------------*/	
sT[0].sTI[2].nType = TYP_TMOK;

	sT[0].sMOT[2].nIEC_SP				= 42;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_DP				= 12;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_NM				= 16;		/* Mérések IEC kezdõcíme */

/* 51-65  -----------------------------------------------------------*/	
sT[0].sTI[3].nType = TYP_TMOK;

	sT[0].sMOT[3].nIEC_SP				= 58;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_DP				= 13;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_NM				= 19;		/* Mérések IEC kezdõcíme */

/* 61-46  -----------------------------------------------------------*/	
sT[0].sTI[4].nType = TYP_TMOK;

	sT[0].sMOT[4].nIEC_SP				= 74;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_DP				= 14;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_NM				= 22;		/* Mérések IEC kezdõcíme */

/* 60-33  -----------------------------------------------------------*/	
sT[0].sTI[5].nType = TYP_TMOK;

	sT[0].sMOT[5].nIEC_SP				= 90;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_DP				= 15;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_NM				= 25;		/* Mérések IEC kezdõcíme */

/* 62-85  -----------------------------------------------------------*/	
sT[0].sTI[6].nType = TYP_TMOK;

	sT[0].sMOT[6].nIEC_SP				= 106;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_DP				= 16;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_NM				= 28;		/* Mérések IEC kezdõcíme */

/* 13-15  -----------------------------------------------------------*/	
sT[0].sTI[7].nType = TYP_TMOK;

	sT[0].sMOT[7].nIEC_SP				= 122;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_DP				= 17;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_NM				= 31;		/* Mérések IEC kezdõcíme */

/* 60-01  -----------------------------------------------------------*/	
sT[0].sTI[8].nType = TYP_TMOK;

	sT[0].sMOT[8].nIEC_SP				= 138;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_DP				= 18;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_NM				= 34;		/* Mérések IEC kezdõcíme */

/* 90-77  -----------------------------------------------------------*/	
sT[0].sTI[9].nType = TYP_TMOK;

	sT[0].sMOT[9].nIEC_SP				= 154;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_DP				= 19;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_NM				= 37;		/* Mérések IEC kezdõcíme */

/* 90-78  -----------------------------------------------------------*/	
sT[0].sTI[10].nType = TYP_TMOK;

	sT[0].sMOT[10].nIEC_SP				= 170;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_DP				= 20;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_NM				= 40;		/* Mérések IEC kezdõcíme */

/* 42-31  -----------------------------------------------------------*/	
sT[0].sTI[11].nType = TYP_TMOK;

	sT[0].sMOT[11].nIEC_SP				= 186;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_DP				= 21;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_NM				= 43;		/* Mérések IEC kezdõcíme */

/* 72-57  -----------------------------------------------------------*/	
sT[0].sTI[12].nType = TYP_TMOK;

	sT[0].sMOT[12].nIEC_SP				= 202;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_DP				= 22;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_NM				= 46;		/* Mérések IEC kezdõcíme */

/* 50-71  -----------------------------------------------------------*/	
sT[0].sTI[13].nType = TYP_TMOK;

	sT[0].sMOT[13].nIEC_SP				= 218;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_DP				= 23;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_NM				= 49;		/* Mérések IEC kezdõcíme */

/* 52-82  -----------------------------------------------------------*/	
sT[0].sTI[14].nType = TYP_TMOK;

	sT[0].sMOT[14].nIEC_SP				= 234;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_DP				= 24;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_NM				= 52;		/* Mérések IEC kezdõcíme */

/* 52-63  -----------------------------------------------------------*/	
sT[0].sTI[15].nType = TYP_TMOK;

	sT[0].sMOT[15].nIEC_SP				= 250;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_DP				= 25;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_NM				= 55;		/* Mérések IEC kezdõcíme */

/* 54-66  -----------------------------------------------------------*/	
sT[0].sTI[16].nType = TYP_TMOK;

	sT[0].sMOT[16].nIEC_SP				= 266;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_DP				= 26;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_NM				= 58;		/* Mérések IEC kezdõcíme */

/* 50-90  -----------------------------------------------------------*/	
sT[0].sTI[17].nType = TYP_TMOK;

	sT[0].sMOT[17].nIEC_SP				= 282;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[17].nIEC_DP				= 27;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[17].nIEC_NM				= 61;		/* Mérések IEC kezdõcíme */

/* 51-70  -----------------------------------------------------------*/	
sT[0].sTI[18].nType = TYP_TMOK;

	sT[0].sMOT[18].nIEC_SP				= 298;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_DP				= 28;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_NM				= 64;		/* Mérések IEC kezdõcíme */

/* 52-64  -----------------------------------------------------------*/	
sT[0].sTI[19].nType = TYP_TMOK;

	sT[0].sMOT[19].nIEC_SP				= 314;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_DP				= 29;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_NM				= 67;		/* Mérések IEC kezdõcíme */

/* 51-14  -----------------------------------------------------------*/	
sT[0].sTI[20].nType = TYP_TMOK;

	sT[0].sMOT[20].nIEC_SP				= 330;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_DP				= 30;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_NM				= 70;		/* Mérések IEC kezdõcíme */

/* 50-84  -----------------------------------------------------------*/	
sT[0].sTI[21].nType = TYP_TMOK;

	sT[0].sMOT[21].nIEC_SP				= 346;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_DP				= 31;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_NM				= 73;		/* Mérések IEC kezdõcíme */

/* 72-06  -----------------------------------------------------------*/	
sT[0].sTI[22].nType = TYP_TMOK;

	sT[0].sMOT[22].nIEC_SP				= 362;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_DP				= 32;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_NM				= 76;		/* Mérések IEC kezdõcíme */

/* 52-66  -----------------------------------------------------------*/	
sT[0].sTI[23].nType = TYP_TMOK;

	sT[0].sMOT[23].nIEC_SP				= 378;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_DP				= 33;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_NM				= 79;		/* Mérések IEC kezdõcíme */

/* 72-97  -----------------------------------------------------------*/	
sT[0].sTI[24].nType = TYP_TMOK;

	sT[0].sMOT[24].nIEC_SP				= 394;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_DP				= 34;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_NM				= 82;		/* Mérések IEC kezdõcíme */

/* 71-23  -----------------------------------------------------------*/	
sT[0].sTI[25].nType = TYP_TMOK;

	sT[0].sMOT[25].nIEC_SP				= 410;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_DP				= 35;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_NM				= 85;		/* Mérések IEC kezdõcíme */

/* 72-66  -----------------------------------------------------------*/	
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 426;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_DP				= 36;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_NM				= 88;		/* Mérések IEC kezdõcíme */

/* 52-98  -----------------------------------------------------------*/	
sT[0].sTI[27].nType = TYP_TMOK;

	sT[0].sMOT[27].nIEC_SP				= 442;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_DP				= 37;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_NM				= 91;		/* Mérések IEC kezdõcíme */

/* 50-31  -----------------------------------------------------------*/	
sT[0].sTI[28].nType = TYP_TMOK;

	sT[0].sMOT[28].nIEC_SP				= 458;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_DP				= 38;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_NM				= 94;		/* Mérések IEC kezdõcíme */

/* 51-96  -----------------------------------------------------------*/	
sT[0].sTI[29].nType = TYP_TMOK;

	sT[0].sMOT[29].nIEC_SP				= 474;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_DP				= 39;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_NM				= 97;		/* Mérések IEC kezdõcíme */

/* 73-02  -----------------------------------------------------------*/	
sT[0].sTI[30].nType = TYP_TMOK;

	sT[0].sMOT[30].nIEC_SP				= 490;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_DP				= 40;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_NM				= 100;		/* Mérések IEC kezdõcíme */
  
/* 13-93  -----------------------------------------------------------*/	
sT[0].sTI[31].nType = TYP_TMOK;

	sT[0].sMOT[31].nIEC_SP				= 506;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_DP				= 41;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_NM				= 103;		/* Mérések IEC kezdõcíme */
	
/* 12-88  -----------------------------------------------------------*/	
sT[0].sTI[32].nType = TYP_TMOK;

	sT[0].sMOT[32].nIEC_SP				= 522;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[32].nIEC_DP				= 42;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[32].nIEC_NM				= 106;		/* Mérések IEC kezdõcíme */
/* 64-09  -----------------------------------------------------------*/	
sT[0].sTI[33].nType = TYP_TMOK;

	sT[0].sMOT[33].nIEC_SP				= 538;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[33].nIEC_DP				= 43;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[33].nIEC_NM				= 109;		/* Mérések IEC kezdõcíme */
/* 60-88  -----------------------------------------------------------*/	
sT[0].sTI[34].nType = TYP_TMOK;

	sT[0].sMOT[34].nIEC_SP				= 554;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_DP				= 44;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_NM				= 112;		/* Mérések IEC kezdõcíme */
/* 60-85  -----------------------------------------------------------*/	
sT[0].sTI[35].nType = TYP_TMOK;

	sT[0].sMOT[35].nIEC_SP				= 570;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_DP				= 45;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_NM				= 115;		/* Mérések IEC kezdõcíme */
/* 11-83  -----------------------------------------------------------*/	
sT[0].sTI[36].nType = TYP_TMOK;

	sT[0].sMOT[36].nIEC_SP				= 586;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_DP				= 46;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_NM				= 118;		/* Mérések IEC kezdõcíme */
/* 62-17  -----------------------------------------------------------*/	
sT[0].sTI[37].nType = TYP_TMOK;

	sT[0].sMOT[37].nIEC_SP				= 602;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_DP				= 47;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_NM				= 121;		/* Mérések IEC kezdõcíme */
/* 64-62  -----------------------------------------------------------*/	
sT[0].sTI[38].nType = TYP_TMOK;

	sT[0].sMOT[38].nIEC_SP				= 618;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_DP				= 48;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_NM				= 124;		/* Mérések IEC kezdõcíme */
/* 11-18  -----------------------------------------------------------*/	
sT[0].sTI[39].nType = TYP_TMOK;

	sT[0].sMOT[39].nIEC_SP				= 634;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_DP				= 49;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_NM				= 127;		/* Mérések IEC kezdõcíme */
/* 61-20  -----------------------------------------------------------*/	
sT[0].sTI[40].nType = TYP_TMOK;

	sT[0].sMOT[40].nIEC_SP				= 650;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_DP				= 50;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_NM				= 130;		/* Mérések IEC kezdõcíme */
/* 64-70  -----------------------------------------------------------*/	
sT[0].sTI[41].nType = TYP_TMOK;

	sT[0].sMOT[41].nIEC_SP				= 666;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_DP				= 51;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_NM				= 133;		/* Mérések IEC kezdõcíme */
/* 11-44  -----------------------------------------------------------*/	
sT[0].sTI[42].nType = TYP_TMOK;

	sT[0].sMOT[42].nIEC_SP				= 682;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_DP				= 52;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_NM				= 136;		/* Mérések IEC kezdõcíme */
/* 11-04  -----------------------------------------------------------*/	
sT[0].sTI[43].nType = TYP_TMOK;

	sT[0].sMOT[43].nIEC_SP				= 698;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_DP				= 53;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_NM				= 139;		/* Mérések IEC kezdõcíme */
/* 11-43  -----------------------------------------------------------*/	
sT[0].sTI[44].nType = TYP_TMOK;

	sT[0].sMOT[44].nIEC_SP				= 714;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_DP				= 54;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_NM				= 142;		/* Mérések IEC kezdõcíme */
/* 61-06  -----------------------------------------------------------*/	
sT[0].sTI[45].nType = TYP_TMOK;

	sT[0].sMOT[45].nIEC_SP				= 730;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_DP				= 55;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_NM				= 145;		/* Mérések IEC kezdõcíme */
/* 60-96  -----------------------------------------------------------*/	
sT[0].sTI[46].nType = TYP_TMOK;

	sT[0].sMOT[46].nIEC_SP				= 746;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_DP				= 56;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_NM				= 148;		/* Mérések IEC kezdõcíme */
/* 64-54  -----------------------------------------------------------*/	
sT[0].sTI[47].nType = TYP_TMOK;

	sT[0].sMOT[47].nIEC_SP				= 762;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_DP				= 57;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_NM				= 151;		/* Mérések IEC kezdõcíme */
/* 61-92  -----------------------------------------------------------*/	
sT[0].sTI[48].nType = TYP_TMOK;

	sT[0].sMOT[48].nIEC_SP				= 778;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_DP				= 58;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_NM				= 154;		/* Mérések IEC kezdõcíme */
/* 60-40  -----------------------------------------------------------*/	
sT[0].sTI[49].nType = TYP_TMOK;

	sT[0].sMOT[49].nIEC_SP				= 794;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_DP				= 59;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_NM				= 157;		/* Mérések IEC kezdõcíme */
/* 10-15  -----------------------------------------------------------*/	
sT[0].sTI[50].nType = TYP_TMOK;

	sT[0].sMOT[50].nIEC_SP				= 810;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_DP				= 60;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_NM				= 160;		/* Mérések IEC kezdõcíme */
/* 21-98  -----------------------------------------------------------*/	
sT[0].sTI[51].nType = TYP_TMOK;

	sT[0].sMOT[51].nIEC_SP				= 826;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_DP				= 61;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_NM				= 163;		/* Mérések IEC kezdõcíme */
/* 86-84  -----------------------------------------------------------*/	
sT[0].sTI[52].nType = TYP_TMOK;

	sT[0].sMOT[52].nIEC_SP				= 842;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_DP				= 62;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_NM				= 166;		/* Mérések IEC kezdõcíme */

/* 21-25  -----------------------------------------------------------*/	
sT[0].sTI[53].nType = TYP_TMOK;

	sT[0].sMOT[53].nIEC_SP				= 858;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_DP				= 63;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_NM				= 169;		/* Mérések IEC kezdõcíme */
/* 20-44  -----------------------------------------------------------*/	
sT[0].sTI[54].nType = TYP_TMOK;

	sT[0].sMOT[54].nIEC_SP				= 874;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_DP				= 64;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_NM				= 172;		/* Mérések IEC kezdõcíme */
/* 21-129  -----------------------------------------------------------*/	
sT[0].sTI[55].nType = TYP_TMOK;

	sT[0].sMOT[55].nIEC_SP				= 890;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_DP				= 65;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_NM				= 175;		/* Mérések IEC kezdõcíme */
/* 87-15  -----------------------------------------------------------*/	
sT[0].sTI[56].nType = TYP_TMOK;

	sT[0].sMOT[56].nIEC_SP				= 906;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_DP				= 66;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_NM				= 178;		/* Mérések IEC kezdõcíme */
/* 87-37  -----------------------------------------------------------*/	
sT[0].sTI[57].nType = TYP_TMOK;

	sT[0].sMOT[57].nIEC_SP				= 922;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_DP				= 67;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_NM				= 181;		/* Mérések IEC kezdõcíme */
/* 54-65  -----------------------------------------------------------*/	
sT[0].sTI[58].nType = TYP_TMOK;

	sT[0].sMOT[58].nIEC_SP				= 938;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_DP				= 68;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_NM				= 184;		/* Mérések IEC kezdõcíme */
/* 50-61  -----------------------------------------------------------*/	
sT[0].sTI[59].nType = TYP_TMOK;

	sT[0].sMOT[59].nIEC_SP				= 954;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_DP				= 69;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_NM				= 187;		/* Mérések IEC kezdõcíme */
/* 50-61  -----------------------------------------------------------*/	
sT[0].sTI[60].nType = TYP_TMOK;

	sT[0].sMOT[60].nIEC_SP				= 970;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_DP				= 70;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_NM				= 190;		/* Mérések IEC kezdõcíme */
/* 50-61  -----------------------------------------------------------*/	
sT[0].sTI[61].nType = TYP_TMOK;

	sT[0].sMOT[61].nIEC_SP				= 986;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_DP				= 71;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_NM				= 193;		/* Mérések IEC kezdõcíme */
/* 71-73  -----------------------------------------------------------*/	
sT[0].sTI[62].nType = TYP_TMOK;

	sT[0].sMOT[62].nIEC_SP				= 1002;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_DP				= 72;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_NM				= 196;		/* Mérések IEC kezdõcíme */
/* Gyõr, egyetem -----------------------------------------------------------*/
sT[0].sTI[63].nType = TYP_TAL;

		sT[0].sTAL[63].nIEC_SP       		= 1018;
		sT[0].sTAL[63].nIEC_OsszevontHiba	= 1050;
		sT[0].sTAL[63].nIEC_MT_KommHiba		= 1051;
		sT[0].sTAL[63].nIEC_DP       		= 73;
		sT[0].sTAL[63].nIEC_DP_FSZ1  		= 77;
		sT[0].sTAL[63].nIEC_NM				= 682;
		sT[0].sTAL[63].nNMNum		  		= 16;
		sT[0].sTAL[63].nKommStatusNum		= 2;

/* Nagsyentjános, biogáz -----------------------------------------------------------*/
sT[0].sTI[64].nType = TYP_TAL;

		sT[0].sTAL[64].nIEC_SP       		= 1055;
		sT[0].sTAL[64].nIEC_OsszevontHiba	= 1087;
		sT[0].sTAL[64].nIEC_MT_KommHiba		= 1088;
		sT[0].sTAL[64].nIEC_DP       		= 81;
		sT[0].sTAL[64].nIEC_DP_FSZ1  		= 85;
		sT[0].sTAL[64].nIEC_NM				= 210;
		sT[0].sTAL[64].nNMNum		  		= 11;
		sT[0].sTAL[64].nKommStatusNum		= 2;
/* Ikrény, biogáz -----------------------------------------------------------*/
sT[0].sTI[65].nType = TYP_TAL;

		sT[0].sTAL[65].nIEC_SP       		= 1092;
		sT[0].sTAL[65].nIEC_OsszevontHiba	= 1124;
		sT[0].sTAL[65].nIEC_MT_KommHiba		= 1125;
		sT[0].sTAL[65].nIEC_DP       		= 89;
		sT[0].sTAL[65].nIEC_DP_FSZ1  		= 93;
		sT[0].sTAL[65].nIEC_NM				= 221;
		sT[0].sTAL[65].nNMNum		  		= 11;
		sT[0].sTAL[65].nKommStatusNum		= 2;
/* Ács, szélerõmû -----------------------------------------------------------*/
sT[0].sTI[66].nType = TYP_TAL;

		sT[0].sTAL[66].nIEC_SP       		= 1129;
		sT[0].sTAL[66].nIEC_OsszevontHiba	= 1161;
		sT[0].sTAL[66].nIEC_MT_KommHiba		= 1162;
		sT[0].sTAL[66].nIEC_DP       		= 97;
		sT[0].sTAL[66].nIEC_DP_FSZ1  		= 101;
		sT[0].sTAL[66].nIEC_NM				= 232;
		sT[0].sTAL[66].nNMNum		  		= 11;
		sT[0].sTAL[66].nKommStatusNum		= 2;
		
/* 52-93  -----------------------------------------------------------*/	
sT[0].sTI[67].nType = TYP_TMOK;

	sT[0].sMOT[67].nIEC_SP				= 1166;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_DP				= 105;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_NM				= 243;		/* Mérések IEC kezdõcíme */
/* 48-938  -----------------------------------------------------------*/	
sT[0].sTI[68].nType = TYP_TMOK;

	sT[0].sMOT[68].nIEC_SP				= 1182;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_DP				= 106;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_NM				= 246;		/* Mérések IEC kezdõcíme */
/* 49-049  -----------------------------------------------------------*/	
sT[0].sTI[69].nType = TYP_TMOK;

	sT[0].sMOT[69].nIEC_SP				= 1198;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_DP				= 107;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_NM				= 249;		/* Mérések IEC kezdõcíme */

/* 13-27  -----------------------------------------------------------*/	
sT[0].sTI[70].nType = TYP_TMOK;

	sT[0].sMOT[70].nIEC_SP				= 1214;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[70].nIEC_DP				= 108;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[70].nIEC_NM				= 252;		/* Mérések IEC kezdõcíme */	

/* 90-65  -----------------------------------------------------------*/	
sT[0].sTI[71].nType = TYP_TMOK;

	sT[0].sMOT[71].nIEC_SP				= 1230;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_DP				= 109;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_NM				= 255;		/* Mérések IEC kezdõcíme */	
	
/* 64-22  -----------------------------------------------------------*/	
sT[0].sTI[72].nType = TYP_TMOK;

	sT[0].sMOT[72].nIEC_SP				= 1246;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_DP				= 110;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_NM				= 258;		/* Mérések IEC kezdõcíme */	
	
/* 64-20  -----------------------------------------------------------*/	
sT[0].sTI[73].nType = TYP_TMOK;

	sT[0].sMOT[73].nIEC_SP				= 1262;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_DP				= 111;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_NM				= 261;		/* Mérések IEC kezdõcíme */	
	
/* 21-52  -----------------------------------------------------------*/	
sT[0].sTI[74].nType = TYP_TMOK;

	sT[0].sMOT[74].nIEC_SP				= 1278;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_DP				= 112;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_NM				= 264;		/* Mérések IEC kezdõcíme */	
/* 72-43  -----------------------------------------------------------*/	
sT[0].sTI[75].nType = TYP_TMOK;

	sT[0].sMOT[75].nIEC_SP				= 1294;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_DP				= 113;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_NM				= 267;		/* Mérések IEC kezdõcíme */	
/* 60-78   -----------------------------------------------------------*/	
sT[0].sTI[76].nType = TYP_TMOK;

	sT[0].sMOT[76].nIEC_SP				= 1310;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_DP				= 114;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_NM				= 270;		/* Mérések IEC kezdõcíme */	
/* 61-18   -----------------------------------------------------------*/	
sT[0].sTI[77].nType = TYP_TMOK;

	sT[0].sMOT[77].nIEC_SP				= 1326;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_DP				= 115;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_NM				= 273;		/* Mérések IEC kezdõcíme */	
/* 11-06   -----------------------------------------------------------*/	
sT[0].sTI[78].nType = TYP_TMOK;

	sT[0].sMOT[78].nIEC_SP				= 1342;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_DP				= 116;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_NM				= 276;		/* Mérések IEC kezdõcíme */	
/* 10-91   -----------------------------------------------------------*/	
sT[0].sTI[79].nType = TYP_TMOK;

	sT[0].sMOT[79].nIEC_SP				= 1358;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_DP				= 117;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_NM				= 279;		/* Mérések IEC kezdõcíme */	
/* 19-604  -----------------------------------------------------------*/	
sT[0].sTI[80].nType = TYP_TMOK;

	sT[0].sMOT[80].nIEC_SP				= 1374;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[80].nIEC_DP				= 118;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[80].nIEC_NM				= 282;		/* Mérések IEC kezdõcíme */	
/* 11-39   -----------------------------------------------------------*/	
sT[0].sTI[81].nType = TYP_TMOK;

	sT[0].sMOT[81].nIEC_SP				= 1390;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_DP				= 119;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_NM				= 285;		/* Mérések IEC kezdõcíme */	
/* 11-13   -----------------------------------------------------------*/	
sT[0].sTI[82].nType = TYP_TMOK;

	sT[0].sMOT[82].nIEC_SP				= 1406;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_DP				= 120;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_NM				= 288;		/* Mérések IEC kezdõcíme */	
/* 10-06   -----------------------------------------------------------*/	
sT[0].sTI[83].nType = TYP_TMOK;

	sT[0].sMOT[83].nIEC_SP				= 1422;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_DP				= 121;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_NM				= 291;		/* Mérések IEC kezdõcíme */	
/* 61-23  -----------------------------------------------------------*/	
sT[0].sTI[84].nType = TYP_TMOK;

	sT[0].sMOT[84].nIEC_SP				= 1438;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_DP				= 122;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_NM				= 294;		/* Mérések IEC kezdõcíme */	
/* 61-31  -----------------------------------------------------------*/	
sT[0].sTI[85].nType = TYP_TMOK;

	sT[0].sMOT[85].nIEC_SP				= 1454;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_DP				= 123;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_NM				= 297;		/* Mérések IEC kezdõcíme */	
/* 42-01  -----------------------------------------------------------*/	
sT[0].sTI[86].nType = TYP_TMOK;

	sT[0].sMOT[86].nIEC_SP				= 1470;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_DP				= 124;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_NM				= 300;		/* Mérések IEC kezdõcíme */	
/* 42-03  -----------------------------------------------------------*/	
sT[0].sTI[87].nType = TYP_TMOK;

	sT[0].sMOT[87].nIEC_SP				= 1486;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_DP				= 125;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_NM				= 303;		/* Mérések IEC kezdõcíme */	
/* 42-04  -----------------------------------------------------------*/	
sT[0].sTI[88].nType = TYP_TMOK;

	sT[0].sMOT[88].nIEC_SP				= 1502;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_DP				= 126;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_NM				= 306;		/* Mérések IEC kezdõcíme */		
/* 43-43  -----------------------------------------------------------*/	
sT[0].sTI[89].nType = TYP_TMOK;

	sT[0].sMOT[89].nIEC_SP				= 1518;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_DP				= 127;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_NM				= 309;		/* Mérések IEC kezdõcíme */	
/* 90-74  -----------------------------------------------------------*/	
sT[0].sTI[90].nType = TYP_TMOK;

	sT[0].sMOT[90].nIEC_SP				= 1534;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_DP				= 128;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_NM				= 312;		/* Mérések IEC kezdõcíme */	
/* 20-26  -----------------------------------------------------------*/	
sT[0].sTI[91].nType = TYP_TMOK;

	sT[0].sMOT[91].nIEC_SP				= 1550;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_DP				= 129;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_NM				= 315;		/* Mérések IEC kezdõcíme */	
/* 20-38  -----------------------------------------------------------*/	
sT[0].sTI[92].nType = TYP_TMOK;

	sT[0].sMOT[92].nIEC_SP				= 1566;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_DP				= 130;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_NM				= 318;		/* Mérések IEC kezdõcíme */	
/* 54-42  -----------------------------------------------------------*/	
sT[0].sTI[93].nType = TYP_TMOK;

	sT[0].sMOT[93].nIEC_SP				= 1582;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_DP				= 131;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_NM				= 321;		/* Mérések IEC kezdõcíme */	
/* 53-32  -----------------------------------------------------------*/	
sT[0].sTI[94].nType = TYP_TMOK;

	sT[0].sMOT[94].nIEC_SP				= 1598;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_DP				= 132;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_NM				= 324;		/* Mérések IEC kezdõcíme */	
/* 71-80  -----------------------------------------------------------*/	
sT[0].sTI[95].nType = TYP_TMOK;

	sT[0].sMOT[95].nIEC_SP				= 1614;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[95].nIEC_DP				= 133;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[95].nIEC_NM				= 327;		/* Mérések IEC kezdõcíme */	
/* 52-52  -----------------------------------------------------------*/	
sT[0].sTI[96].nType = TYP_TMOK;

	sT[0].sMOT[96].nIEC_SP				= 1630;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_DP				= 134;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_NM				= 330;		/* Mérések IEC kezdõcíme */	
/* 52-43  -----------------------------------------------------------*/	
sT[0].sTI[97].nType = TYP_TMOK;

	sT[0].sMOT[97].nIEC_SP				= 1646;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_DP				= 135;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_NM				= 333;		/* Mérések IEC kezdõcíme */	
/* 59-706 -----------------------------------------------------------*/	
sT[0].sTI[98].nType = TYP_TMOK;

	sT[0].sMOT[98].nIEC_SP				= 1662;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_DP				= 136;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_NM				= 336;		/* Mérések IEC kezdõcíme */	
/* 54-74  -----------------------------------------------------------*/	
sT[0].sTI[99].nType = TYP_TMOK;

	sT[0].sMOT[99].nIEC_SP				= 1678;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_DP				= 137;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_NM				= 339;		/* Mérések IEC kezdõcíme */	
/* 50-80  -----------------------------------------------------------*/	
sT[0].sTI[100].nType = TYP_TMOK;

	sT[0].sMOT[100].nIEC_SP				= 1694;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_DP				= 138;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_NM				= 342;		/* Mérések IEC kezdõcíme */	
/* 62-10  -----------------------------------------------------------*/	
sT[0].sTI[101].nType = TYP_TMOK;

	sT[0].sMOT[101].nIEC_SP				= 1710;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_DP				= 139;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_NM				= 345;		/* Mérések IEC kezdõcíme */	
/* 11-92  -----------------------------------------------------------*/	
sT[0].sTI[102].nType = TYP_TMOK;

	sT[0].sMOT[102].nIEC_SP				= 1726;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_DP				= 140;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_NM				= 348;		/* Mérések IEC kezdõcíme */		
/* 60-04  -----------------------------------------------------------*/	
sT[0].sTI[103].nType = TYP_TMOK;

	sT[0].sMOT[103].nIEC_SP				= 1742;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_DP				= 141;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_NM				= 351;		/* Mérések IEC kezdõcíme */	
/* 11-84  -----------------------------------------------------------*/	
sT[0].sTI[104].nType = TYP_TMOK;

	sT[0].sMOT[104].nIEC_SP				= 1758;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_DP				= 142;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_NM				= 354;		/* Mérések IEC kezdõcíme */	
/* 20-40  -----------------------------------------------------------*/	
sT[0].sTI[105].nType = TYP_TMOK;

	sT[0].sMOT[105].nIEC_SP				= 1774;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_DP				= 143;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_NM				= 357;		/* Mérések IEC kezdõcíme */	
/* 20-11  -----------------------------------------------------------*/	
sT[0].sTI[106].nType = TYP_TMOK;

	sT[0].sMOT[106].nIEC_SP				= 1790;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_DP				= 144;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_NM				= 360;		/* Mérések IEC kezdõcíme */	
/* 21-54  -----------------------------------------------------------*/	
sT[0].sTI[107].nType = TYP_TMOK;

	sT[0].sMOT[107].nIEC_SP				= 1806;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_DP				= 145;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_NM				= 363;		/* Mérések IEC kezdõcíme */	
/* 54-09  -----------------------------------------------------------*/	
sT[0].sTI[108].nType = TYP_TMOK;

	sT[0].sMOT[108].nIEC_SP				= 1822;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_DP				= 146;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_NM				= 366;		/* Mérések IEC kezdõcíme */	
/* 42-25  -----------------------------------------------------------*/	
sT[0].sTI[109].nType = TYP_TMOK;

	sT[0].sMOT[109].nIEC_SP				= 1838;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_DP				= 147;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_NM				= 369;		/* Mérések IEC kezdõcíme */	
/* 54-77  -----------------------------------------------------------*/	
sT[0].sTI[110].nType = TYP_TMOK;

	sT[0].sMOT[110].nIEC_SP				= 1854;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_DP				= 148;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_NM				= 372;		/* Mérések IEC kezdõcíme */	
/* 54-78  -----------------------------------------------------------*/	
sT[0].sTI[111].nType = TYP_TMOK;

	sT[0].sMOT[111].nIEC_SP				= 1870;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_DP				= 149;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_NM				= 375;		/* Mérések IEC kezdõcíme */	
/* 54-75  -----------------------------------------------------------*/	
sT[0].sTI[112].nType = TYP_TMOK;

	sT[0].sMOT[112].nIEC_SP				= 1886;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_DP				= 150;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_NM				= 378;		/* Mérések IEC kezdõcíme */	
/* 54-76  -----------------------------------------------------------*/	
sT[0].sTI[113].nType = TYP_TMOK;

	sT[0].sMOT[113].nIEC_SP				= 1902;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_DP				= 151;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_NM				= 381;		/* Mérések IEC kezdõcíme */	

/* 37-26  -----------------------------------------------------------*/	
sT[0].sTI[114].nType = TYP_TMOK;

	sT[0].sMOT[114].nIEC_SP				= 1918;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_DP				= 152;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_NM				= 384;		/* Mérések IEC kezdõcíme */	

/* 20-01  -----------------------------------------------------------*/	
sT[0].sTI[115].nType = TYP_TMOK;

	sT[0].sMOT[115].nIEC_SP				= 1934;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_DP				= 153;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_NM				= 387;		/* Mérések IEC kezdõcíme */	

/* 50-30  -----------------------------------------------------------*/	
sT[0].sTI[116].nType = TYP_TMOK;

	sT[0].sMOT[116].nIEC_SP				= 1950;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_DP				= 154;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_NM				= 390;		/* Mérések IEC kezdõcíme */	

/* 11-25  -----------------------------------------------------------*/	
sT[0].sTI[117].nType = TYP_TMOK;

	sT[0].sMOT[117].nIEC_SP				= 1966;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_DP				= 155;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_NM				= 393;		/* Mérések IEC kezdõcíme */	

/* 74-38  -----------------------------------------------------------*/	
sT[0].sTI[118].nType = TYP_TMOK;

	sT[0].sMOT[118].nIEC_SP				= 1982;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_DP				= 156;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_NM				= 396;		/* Mérések IEC kezdõcíme */	

/* 54-79  -----------------------------------------------------------*/	
sT[0].sTI[119].nType = TYP_TMOK;

	sT[0].sMOT[119].nIEC_SP				= 1998;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_DP				= 157;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_NM				= 399;		/* Mérések IEC kezdõcíme */	


/* 72-73  -----------------------------------------------------------*/	
sT[0].sTI[120].nType = TYP_TMOK;

	sT[0].sMOT[120].nIEC_SP				= 2014;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[120].nIEC_DP				= 158;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[120].nIEC_NM				= 402;		/* Mérések IEC kezdõcíme */	

/* 11-94  -----------------------------------------------------------*/	
sT[0].sTI[121].nType = TYP_TMOK;

	sT[0].sMOT[121].nIEC_SP				= 2030;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[121].nIEC_DP				= 159;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[121].nIEC_NM				= 405;		/* Mérések IEC kezdõcíme */	

/* 90-08  -----------------------------------------------------------*/	
sT[0].sTI[122].nType = TYP_TMOK;

	sT[0].sMOT[122].nIEC_SP				= 2046;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_DP				= 160;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_NM				= 408;		/* Mérések IEC kezdõcíme */	

/* 79-910  -----------------------------------------------------------*/	
sT[0].sTI[123].nType = TYP_TMOK;

	sT[0].sMOT[123].nIEC_SP				= 2062;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_DP				= 161;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_NM				= 411;		/* Mérések IEC kezdõcíme */	

/* 60-62  -----------------------------------------------------------*/	
sT[0].sTI[124].nType = TYP_TMOK;

	sT[0].sMOT[124].nIEC_SP				= 2078;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_DP				= 162;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_NM				= 414;		/* Mérések IEC kezdõcíme */	

/* 72-15  -----------------------------------------------------------*/	
sT[0].sTI[125].nType = TYP_TMOK;

	sT[0].sMOT[125].nIEC_SP				= 2094;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_DP				= 163;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_NM				= 417;		/* Mérések IEC kezdõcíme */	


/* 64-61  -----------------------------------------------------------*/	
sT[0].sTI[126].nType = TYP_TMOK;

	sT[0].sMOT[126].nIEC_SP				= 2110;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[126].nIEC_DP				= 164;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[126].nIEC_NM				= 420;		/* Mérések IEC kezdõcíme */	

/* 62-92  -----------------------------------------------------------*/	
sT[0].sTI[127].nType = TYP_TMOK;

	sT[0].sMOT[127].nIEC_SP				= 2126;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_DP				= 165;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_NM				= 423;		/* Mérések IEC kezdõcíme */	
	
/* 61-07  -----------------------------------------------------------*/	
sT[0].sTI[128].nType = TYP_TMOK;

	sT[0].sMOT[128].nIEC_SP				= 2142;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_DP				= 166;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_NM				= 426;		/* Mérések IEC kezdõcíme */	
	
/* 10-42  -----------------------------------------------------------*/	
sT[0].sTI[129].nType = TYP_TMOK;

	sT[0].sMOT[129].nIEC_SP				= 2158;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_DP				= 167;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_NM				= 429;		/* Mérések IEC kezdõcíme */	
	
/* 11-59  -----------------------------------------------------------*/	
sT[0].sTI[130].nType = TYP_TMOK;

	sT[0].sMOT[130].nIEC_SP				= 2174;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_DP				= 168;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_NM				= 432;		/* Mérések IEC kezdõcíme */	
	
/* 19-507 -----------------------------------------------------------*/	
sT[0].sTI[131].nType = TYP_TMOK;

	sT[0].sMOT[131].nIEC_SP				= 2190;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_DP				= 169;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_NM				= 435;		/* Mérések IEC kezdõcíme */	
	
/* 11-47  -----------------------------------------------------------*/	
sT[0].sTI[132].nType = TYP_TMOK;

	sT[0].sMOT[132].nIEC_SP				= 2206;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[132].nIEC_DP				= 170;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[132].nIEC_NM				= 438;		/* Mérések IEC kezdõcíme */	
	
/* 13-43  -----------------------------------------------------------*/	
sT[0].sTI[133].nType = TYP_TMOK;

	sT[0].sMOT[133].nIEC_SP				= 2222;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_DP				= 171;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_NM				= 441;		/* Mérések IEC kezdõcíme */	
	
/* 61-72  -----------------------------------------------------------*/	
sT[0].sTI[134].nType = TYP_TMOK;

	sT[0].sMOT[134].nIEC_SP				= 2238;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_DP				= 172;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_NM				= 444;		/* Mérések IEC kezdõcíme */	
	
/* 61-75  -----------------------------------------------------------*/	
sT[0].sTI[135].nType = TYP_TMOK;

	sT[0].sMOT[135].nIEC_SP				= 2254;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_DP				= 173;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_NM				= 447;		/* Mérések IEC kezdõcíme */	
	
/* 61-66  -----------------------------------------------------------*/	
sT[0].sTI[136].nType = TYP_TMOK;

	sT[0].sMOT[136].nIEC_SP				= 2270;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_DP				= 174;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_NM				= 450;		/* Mérések IEC kezdõcíme */	
	
/* 37-31  -----------------------------------------------------------*/	
sT[0].sTI[137].nType = TYP_TMOK;

	sT[0].sMOT[137].nIEC_SP				= 2286;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_DP				= 175;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_NM				= 453;		/* Mérések IEC kezdõcíme */	
	
/* 90-93  -----------------------------------------------------------*/	
sT[0].sTI[138].nType = TYP_TMOK;

	sT[0].sMOT[138].nIEC_SP				= 2302;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_DP				= 176;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_NM				= 456;		/* Mérések IEC kezdõcíme */	
	
/* 90-29  -----------------------------------------------------------*/	
sT[0].sTI[139].nType = TYP_TMOK;

	sT[0].sMOT[139].nIEC_SP				= 2318;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_DP				= 177;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_NM				= 459;		/* Mérések IEC kezdõcíme */	
	
/* 90-68  -----------------------------------------------------------*/	
sT[0].sTI[140].nType = TYP_TMOK;

	sT[0].sMOT[140].nIEC_SP				= 2334;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_DP				= 178;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_NM				= 462;		/* Mérések IEC kezdõcíme */	
	
/* 21-02  -----------------------------------------------------------*/	
sT[0].sTI[141].nType = TYP_TMOK;

	sT[0].sMOT[141].nIEC_SP				= 2350;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_DP				= 179;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_NM				= 465;		/* Mérések IEC kezdõcíme */	
	
/* 21-87  -----------------------------------------------------------*/	
sT[0].sTI[142].nType = TYP_TMOK;

	sT[0].sMOT[142].nIEC_SP				= 2366;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_DP				= 180;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_NM				= 468;		/* Mérések IEC kezdõcíme */	
	
/* 21-153 -----------------------------------------------------------*/	
sT[0].sTI[143].nType = TYP_TMOK;

	sT[0].sMOT[143].nIEC_SP				= 2382;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_DP				= 181;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_NM				= 471;		/* Mérések IEC kezdõcíme */	
	
/* 21-17  -----------------------------------------------------------*/	
sT[0].sTI[144].nType = TYP_TMOK;

	sT[0].sMOT[144].nIEC_SP				= 2398;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_DP				= 182;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_NM				= 474;		/* Mérések IEC kezdõcíme */	
	
/* 54-71  -----------------------------------------------------------*/	
sT[0].sTI[145].nType = TYP_TMOK;

	sT[0].sMOT[145].nIEC_SP				= 2414;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[145].nIEC_DP				= 183;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[145].nIEC_NM				= 477;		/* Mérések IEC kezdõcíme */	
	
/* 50-08  -----------------------------------------------------------*/	
sT[0].sTI[146].nType = TYP_TMOK;

	sT[0].sMOT[146].nIEC_SP				= 2430;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[146].nIEC_DP				= 184;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[146].nIEC_NM				= 480;		/* Mérések IEC kezdõcíme */	
	
/* 50-39  -----------------------------------------------------------*/	
sT[0].sTI[147].nType = TYP_TMOK;

	sT[0].sMOT[147].nIEC_SP				= 2446;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_DP				= 185;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_NM				= 483;		/* Mérések IEC kezdõcíme */	
	
/* 50-48  -----------------------------------------------------------*/	
sT[0].sTI[148].nType = TYP_TMOK;

	sT[0].sMOT[148].nIEC_SP				= 2462;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[148].nIEC_DP				= 186;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[148].nIEC_NM				= 486;		/* Mérések IEC kezdõcíme */	
	
/* 50-66  -----------------------------------------------------------*/	
sT[0].sTI[149].nType = TYP_TMOK;

	sT[0].sMOT[149].nIEC_SP				= 2478;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_DP				= 187;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_NM				= 489;		/* Mérések IEC kezdõcíme */	
	
/* 51-56  -----------------------------------------------------------*/	
sT[0].sTI[150].nType = TYP_TMOK;

	sT[0].sMOT[150].nIEC_SP				= 2494;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_DP				= 188;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_NM				= 492;		/* Mérések IEC kezdõcíme */	
	
/* 51-35  -----------------------------------------------------------*/	
sT[0].sTI[151].nType = TYP_TMOK;

	sT[0].sMOT[151].nIEC_SP				= 2510;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_DP				= 189;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_NM				= 495;		/* Mérések IEC kezdõcíme */	
	
/* 71-05  -----------------------------------------------------------*/	
sT[0].sTI[152].nType = TYP_TMOK;

	sT[0].sMOT[152].nIEC_SP				= 2526;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_DP				= 190;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_NM				= 498;		/* Mérések IEC kezdõcíme */	
	
/* 54-25  -----------------------------------------------------------*/	
sT[0].sTI[153].nType = TYP_TMOK;

	sT[0].sMOT[153].nIEC_SP				= 2542;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[153].nIEC_DP				= 191;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[153].nIEC_NM				= 501;		/* Mérések IEC kezdõcíme */
	
/* 70-59  -----------------------------------------------------------*/	
sT[0].sTI[154].nType = TYP_TMOK;

	sT[0].sMOT[154].nIEC_SP				= 2558;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[154].nIEC_DP				= 192;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[154].nIEC_NM				= 504;		/* Mérések IEC kezdõcíme */	
	
/* 71-22  -----------------------------------------------------------*/	
sT[0].sTI[155].nType = TYP_TMOK;

	sT[0].sMOT[155].nIEC_SP				= 2574;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[155].nIEC_DP				= 193;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[155].nIEC_NM				= 507;		/* Mérések IEC kezdõcíme */	
	
/* 71-14  -----------------------------------------------------------*/	
sT[0].sTI[156].nType = TYP_TMOK;

	sT[0].sMOT[156].nIEC_SP				= 2590;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_DP				= 194;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_NM				= 510;		/* Mérések IEC kezdõcíme */	
	
/* 71-33  -----------------------------------------------------------*/	
sT[0].sTI[157].nType = TYP_TMOK;

	sT[0].sMOT[157].nIEC_SP				= 2606;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_DP				= 195;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_NM				= 513;		/* Mérések IEC kezdõcíme */	
	
/* 71-32  -----------------------------------------------------------*/	
sT[0].sTI[158].nType = TYP_TMOK;

	sT[0].sMOT[158].nIEC_SP				= 2622;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_DP				= 196;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_NM				= 516;		/* Mérések IEC kezdõcíme */	
	
/* 74-30  -----------------------------------------------------------*/	
sT[0].sTI[159].nType = TYP_TMOK;

	sT[0].sMOT[159].nIEC_SP				= 2638;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_DP				= 197;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_NM				= 519;		/* Mérések IEC kezdõcíme */	

/* 52-44  -----------------------------------------------------------*/	
sT[0].sTI[160].nType = TYP_TMOK;

	sT[0].sMOT[160].nIEC_SP				= 2654;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_DP				= 198;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_NM				= 522;		/* Mérések IEC kezdõcíme */	

/* 90-34  -----------------------------------------------------------*/	
sT[0].sTI[161].nType = TYP_TMOK;

	sT[0].sMOT[161].nIEC_SP				= 2670;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_DP				= 199;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_NM				= 525;		/* Mérések IEC kezdõcíme */	

/* 87-20  -----------------------------------------------------------*/	
sT[0].sTI[162].nType = TYP_TMOK;

	sT[0].sMOT[162].nIEC_SP				= 2686;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_DP				= 200;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_NM				= 528;		/* Mérések IEC kezdõcíme */	

/* 11-40  -----------------------------------------------------------*/	
sT[0].sTI[163].nType = TYP_TMOK;

	sT[0].sMOT[163].nIEC_SP				= 2702;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_DP				= 201;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_NM				= 531;		/* Mérések IEC kezdõcíme */	
	
/* 61-14  -----------------------------------------------------------*/	
sT[0].sTI[164].nType = TYP_TMOK;

	sT[0].sMOT[164].nIEC_SP				= 2718;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_DP				= 202;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_NM				= 534;		/* Mérések IEC kezdõcíme */	
	
/* 54-80  -----------------------------------------------------------*/	
sT[0].sTI[165].nType = TYP_TMOK;

	sT[0].sMOT[165].nIEC_SP				= 2734;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_DP				= 203;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_NM				= 537;		/* Mérések IEC kezdõcíme */	
	
/* 70-80  -----------------------------------------------------------*/	
sT[0].sTI[166].nType = TYP_TMOK;

	sT[0].sMOT[166].nIEC_SP				= 2750;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_DP				= 204;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_NM				= 540;		/* Mérések IEC kezdõcíme */	
	
/* 37-69  -----------------------------------------------------------*/	
sT[0].sTI[167].nType = TYP_TMOK;

	sT[0].sMOT[167].nIEC_SP				= 2766;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_DP				= 205;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_NM				= 543;		/* Mérések IEC kezdõcíme */	
	
/* 79-134 -----------------------------------------------------------*/	
sT[0].sTI[168].nType = TYP_TMOK;

	sT[0].sMOT[168].nIEC_SP				= 2782;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_DP				= 206;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_NM				= 546;		/* Mérések IEC kezdõcíme */	
	
/* 61-27  -----------------------------------------------------------*/	
sT[0].sTI[169].nType = TYP_TMOK;

	sT[0].sMOT[169].nIEC_SP				= 2798;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[169].nIEC_DP				= 207;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[169].nIEC_NM				= 549;		/* Mérések IEC kezdõcíme */	
	
/* 90-70  -----------------------------------------------------------*/	
sT[0].sTI[170].nType = TYP_TMOK;

	sT[0].sMOT[170].nIEC_SP				= 2814;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[170].nIEC_DP				= 208;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[170].nIEC_NM				= 552;		/* Mérések IEC kezdõcíme */	
	
/* 50-91  -----------------------------------------------------------*/	
sT[0].sTI[171].nType = TYP_TMOK;

	sT[0].sMOT[171].nIEC_SP				= 2830;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[171].nIEC_DP				= 209;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[171].nIEC_NM				= 555;		/* Mérések IEC kezdõcíme */	
	
/* 68-428 -----------------------------------------------------------*/	
sT[0].sTI[172].nType = TYP_TMOK;

	sT[0].sMOT[172].nIEC_SP				= 2846;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_DP				= 210;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_NM				= 558;		/* Mérések IEC kezdõcíme */	
	
/* 11-82  -----------------------------------------------------------*/	
sT[0].sTI[173].nType = TYP_TMOK;

	sT[0].sMOT[173].nIEC_SP				= 2862;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_DP				= 211;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_NM				= 561;		/* Mérések IEC kezdõcíme */	
	
/* 90-43  -----------------------------------------------------------*/	
sT[0].sTI[174].nType = TYP_TMOK;

	sT[0].sMOT[174].nIEC_SP				= 2878;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_DP				= 212;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_NM				= 564;		/* Mérések IEC kezdõcíme */	
	
/* 90-26  -----------------------------------------------------------*/	
sT[0].sTI[175].nType = TYP_TMOK;

	sT[0].sMOT[175].nIEC_SP				= 2894;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[175].nIEC_DP				= 213;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[175].nIEC_NM				= 567;		/* Mérések IEC kezdõcíme */	
	
/* 73-23  -----------------------------------------------------------*/	
sT[0].sTI[176].nType = TYP_TMOK;

	sT[0].sMOT[176].nIEC_SP				= 2910;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_DP				= 214;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_NM				= 570;		/* Mérések IEC kezdõcíme */	
	
/* 54-81  -----------------------------------------------------------*/	
sT[0].sTI[177].nType = TYP_TMOK;

	sT[0].sMOT[177].nIEC_SP				= 2926;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_DP				= 215;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_NM				= 573;		/* Mérések IEC kezdõcíme */	
	
/* 74-23  -----------------------------------------------------------*/	
sT[0].sTI[178].nType = TYP_TMOK;

	sT[0].sMOT[178].nIEC_SP				= 2942;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_DP				= 216;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_NM				= 576;		/* Mérések IEC kezdõcíme */	
	
	
/* Gyõr város DAC -----------------------------------------------------------*/	
sT[0].sTI[179].nType = TYP_MOT;	

	/*sT[0].sMOT[179].nTableNumPar		= 2;		 Egesz paraméterek tábla sorszáma */	
	sT[0].sMOT[179].nIEC_SP				= 2958;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[179].nIEC_SP_NUM			= 6;		/* Egybites értékek száma*/	
	sT[0].sMOT[179].nIEC_DP_NUM			= 0;
	sT[0].sMOT[179].nNMNum      		= 0;

/* 20-47  -----------------------------------------------------------*/	
sT[0].sTI[180].nType = TYP_TMOK;

	sT[0].sMOT[180].nIEC_SP				= 3062;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_DP				= 223;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_NM				= 597;		/* Mérések IEC kezdõcíme */	


/* 51-32  -----------------------------------------------------------*/	
sT[0].sTI[181].nType = TYP_TMOK;

	sT[0].sMOT[181].nIEC_SP				= 2966;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_DP				= 217;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_NM				= 579;		/* Mérések IEC kezdõcíme */	

/* 11-63  -----------------------------------------------------------*/	
sT[0].sTI[182].nType = TYP_TMOK;

	sT[0].sMOT[182].nIEC_SP				= 2982;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_DP				= 218;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_NM				= 582;		/* Mérések IEC kezdõcíme */	

/* 50-74  -----------------------------------------------------------*/	
sT[0].sTI[183].nType = TYP_TMOK;

	sT[0].sMOT[183].nIEC_SP				= 2998;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[183].nIEC_DP				= 219;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[183].nIEC_NM				= 585;		/* Mérések IEC kezdõcíme */	

/* 50-07  -----------------------------------------------------------*/	
sT[0].sTI[184].nType = TYP_TMOK;

	sT[0].sMOT[184].nIEC_SP				= 3014;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[184].nIEC_DP				= 220;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[184].nIEC_NM				= 588;		/* Mérések IEC kezdõcíme */	

/* 54-38  -----------------------------------------------------------*/	
sT[0].sTI[185].nType = TYP_TMOK;

	sT[0].sMOT[185].nIEC_SP				= 3030;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[185].nIEC_DP				= 221;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[185].nIEC_NM				= 591;		/* Mérések IEC kezdõcíme */	

/* 71-99  -----------------------------------------------------------*/	
sT[0].sTI[186].nType = TYP_TMOK;

	sT[0].sMOT[186].nIEC_SP				= 3046;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_DP				= 222;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_NM				= 594;		/* Mérések IEC kezdõcíme */	
	

/* 54-82  -----------------------------------------------------------*/	
sT[0].sTI[187].nType = TYP_TMOK;

	sT[0].sMOT[187].nIEC_SP				= 3078;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_DP				= 224;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_NM				= 600;		/* Mérések IEC kezdõcíme */	

/* 74-45  -----------------------------------------------------------*/	
sT[0].sTI[188].nType = TYP_TMOK;

	sT[0].sMOT[188].nIEC_SP				= 3094;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[188].nIEC_DP				= 225;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[188].nIEC_NM				= 603;		/* Mérések IEC kezdõcíme */	

/* 71-70  -----------------------------------------------------------*/	
sT[0].sTI[189].nType = TYP_TMOK;

	sT[0].sMOT[189].nIEC_SP				= 3110;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[189].nIEC_DP				= 226;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[189].nIEC_NM				= 606;		/* Mérések IEC kezdõcíme */	

/* 74-11  -----------------------------------------------------------*/	
sT[0].sTI[190].nType = TYP_TMOK;

	sT[0].sMOT[190].nIEC_SP				= 3126;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_DP				= 227;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_NM				= 609;		/* Mérések IEC kezdõcíme */	

/* Pápa, Ganna  -----------------------------------------------------------*/	
sT[0].sTI[191].nType = TYP_MOT;	
	
	sT[0].sMOT[191].nIEC_SP				= 3142;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[191].nIEC_DP				= 228;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[191].nIEC_NM				= 612;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[191].nNMNum				= 11;		/* Analóg mérések száma*/
	
/* 10-20  -----------------------------------------------------------*/	
sT[0].sTI[192].nType = TYP_TMOK;

	sT[0].sMOT[192].nIEC_SP				= 3158;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_DP				= 236;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_NM				= 623;		/* Mérések IEC kezdõcíme */	
	
/* 10-01  -----------------------------------------------------------*/	
sT[0].sTI[193].nType = TYP_TMOK;

	sT[0].sMOT[193].nIEC_SP				= 3174;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_DP				= 237;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_NM				= 626;		/* Mérések IEC kezdõcíme */	
	
/* Veszprém, kiserõmû -----------------------------------------------------------*/	
sT[0].sTI[194].nType = TYP_MOT;	
	
	sT[0].sMOT[194].nIEC_SP				= 3190;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[194].nIEC_DP				= 238;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[194].nIEC_NM				= 629;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[194].nNMNum				= 11;		/* Analóg mérések száma*/

/* Aszófõ DAC -----------------------------------------------------------*/	
sT[0].sTI[195].nType = TYP_MOT;	

	/*sT[0].sMOT[10].nTableNumPar		= 2;		 Egesz paraméterek tábla sorszáma */	
	sT[0].sMOT[195].nIEC_SP			= 3206;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[195].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/	
	sT[0].sMOT[195].nIEC_DP_NUM		= 0;
	sT[0].sMOT[195].nNMNum      	= 0;


/* Felpléc biogáz -----------------------------------------------------------*/
sT[0].sTI[196].nType = TYP_TAL;

		sT[0].sTAL[196].nIEC_SP       		= 3213;
		sT[0].sTAL[196].nIEC_OsszevontHiba	= 3245;
		sT[0].sTAL[196].nIEC_MT_KommHiba	= 3246;
		sT[0].sTAL[196].nIEC_DP       		= 250;
		sT[0].sTAL[196].nIEC_DP_FSZ1  		= 254;
		sT[0].sTAL[196].nIEC_NM				= 640;
		sT[0].sTAL[196].nNMNum		  		= 11;
		sT[0].sTAL[196].nKommStatusNum		= 2;

/* 21-73  -----------------------------------------------------------*/	
sT[0].sTI[197].nType = TYP_TMOK;

	sT[0].sMOT[197].nIEC_SP				= 3250;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[197].nIEC_DP				= 258;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[197].nIEC_NM				= 651;		/* Mérések IEC kezdõcíme */	

/* 21-15  -----------------------------------------------------------*/	
sT[0].sTI[198].nType = TYP_TMOK;

	sT[0].sMOT[198].nIEC_SP				= 3266;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_DP				= 259;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_NM				= 654;		/* Mérések IEC kezdõcíme */	

/* 21-21  -----------------------------------------------------------*/	
sT[0].sTI[199].nType = TYP_TMOK;

	sT[0].sMOT[199].nIEC_SP				= 3282;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_DP				= 260;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_NM				= 657;		/* Mérések IEC kezdõcíme */	

/* 21-22  -----------------------------------------------------------*/	
sT[0].sTI[200].nType = TYP_TMOK;

	sT[0].sMOT[200].nIEC_SP				= 3298;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_DP				= 261;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_NM				= 660;		/* Mérések IEC kezdõcíme */	
	
/* 87-96  -----------------------------------------------------------*/	
sT[0].sTI[201].nType = TYP_TMOK;

	sT[0].sMOT[201].nIEC_SP				= 3314;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[201].nIEC_DP				= 262;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[201].nIEC_NM				= 663;		/* Mérések IEC kezdõcíme */	

/* 87-25  -----------------------------------------------------------*/	
sT[0].sTI[202].nType = TYP_TMOK;

	sT[0].sMOT[202].nIEC_SP				= 3330;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_DP				= 263;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_NM				= 666;		/* Mérések IEC kezdõcíme */	

/* 20-66  -----------------------------------------------------------*/	
sT[0].sTI[203].nType = TYP_TMOK;

	sT[0].sMOT[203].nIEC_SP				= 3346;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_DP				= 264;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_NM				= 669;		/* Mérések IEC kezdõcíme */	

/* 21-08  -----------------------------------------------------------*/	
sT[0].sTI[204].nType = TYP_TMOK;

	sT[0].sMOT[204].nIEC_SP				= 3362;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_DP				= 265;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_NM				= 672;		/* Mérések IEC kezdõcíme */	

/* 21-78  -----------------------------------------------------------*/	
sT[0].sTI[205].nType = TYP_TMOK;

	sT[0].sMOT[205].nIEC_SP				= 3378;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_DP				= 266;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_NM				= 675;		/* Mérések IEC kezdõcíme */	
	
/* Ajka DAC -----------------------------------------------------*/
sT[0].sTI[206].nType = TYP_MOT;

	sT[0].sMOT[206].nIEC_SP			= 3394;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[206].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[206].nIEC_DP_NUM		= 0;
	sT[0].sMOT[206].nNMNum      	= 0;
	
/* Veszprémvarsány DAC -----------------------------------------------------*/
sT[0].sTI[207].nType = TYP_MOT;

	sT[0].sMOT[207].nIEC_SP			= 3401;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[207].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[207].nIEC_DP_NUM		= 0;
	sT[0].sMOT[207].nNMNum      	= 0;

/* Várpalota DAC -----------------------------------------------------*/
sT[0].sTI[208].nType = TYP_MOT;

	sT[0].sMOT[208].nIEC_SP			= 3408;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[208].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[208].nIEC_DP_NUM		= 0;
	sT[0].sMOT[208].nNMNum      	= 0;

/* Csorna DAC -----------------------------------------------------*/
sT[0].sTI[209].nType = TYP_MOT;

	sT[0].sMOT[209].nIEC_SP			= 3415;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[209].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[209].nIEC_DP_NUM		= 0;
	sT[0].sMOT[209].nNMNum      	= 0;

/* Sopron nyugat DAC -----------------------------------------------------*/
sT[0].sTI[210].nType = TYP_MOT;

	sT[0].sMOT[210].nIEC_SP			= 3422;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[210].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[210].nIEC_DP_NUM		= 0;
	sT[0].sMOT[210].nNMNum      	= 0;

/* Gyõr, Busch-Hungária -----------------------------------------------------------*/
sT[0].sTI[211].nType = TYP_TAL;

		sT[0].sTAL[211].nIEC_SP       		= 3436;
		sT[0].sTAL[211].nIEC_OsszevontHiba	= 3468;
		sT[0].sTAL[211].nIEC_MT_KommHiba	= 3469;
		sT[0].sTAL[211].nIEC_DP       		= 267;
		sT[0].sTAL[211].nIEC_DP_FSZ1  		= 271;
		sT[0].sTAL[211].nIEC_NM				= 678;
		sT[0].sTAL[211].nNMNum		  		= 4;
		sT[0].sTAL[211].nKommStatusNum		= 2;
		sT[0].sTAL[211].nIEC_DP_12BIT1		= 275;
		sT[0].sTAL[211].nIEC_DP_12BIT2		= 276;
		sT[0].sTAL[211].nIEC_DP_12BIT3		= 277;
		sT[0].sTAL[211].nIEC_DP_12BIT4		= 278;
		sT[0].sTAL[211].nIEC_DP_2BIT_BK1		= 912;
		sT[0].sTAL[211].nIEC_DP_2BIT_BK2		= 913;
		sT[0].sTAL[211].nIEC_DP_2BIT_BK3		= 926;
		sT[0].sTAL[211].nIEC_DP_2BIT_BK4		= 927;

/* Gyõr, Árpád tömb -----------------------------------------------------------*/
sT[0].sTI[212].nType = TYP_TAL;

		sT[0].sTAL[212].nIEC_SP       		= 3505;
		sT[0].sTAL[212].nIEC_OsszevontHiba	= 3537;
		sT[0].sTAL[212].nIEC_MT_KommHiba	= 3538;
		sT[0].sTAL[212].nIEC_DP       		= 279;
		sT[0].sTAL[212].nIEC_DP_FSZ1  		= 283;
		sT[0].sTAL[212].nIEC_NM				= 698;
		sT[0].sTAL[212].nNMNum		  		= 4;
		sT[0].sTAL[212].nKommStatusNum		= 2;
		sT[0].sTAL[212].nIEC_DP_2BIT1 		= 287;
		sT[0].sTAL[212].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[212].nIEC_DP_2BIT_BENT1	= 913;


/* 53-14  -----------------------------------------------------------*/	
sT[0].sTI[213].nType = TYP_TMOK;

	sT[0].sMOT[213].nIEC_SP				= 3473;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_DP				= 288;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_NM				= 702;		/* Mérések IEC kezdõcíme */	

/* 53-15  -----------------------------------------------------------*/	
sT[0].sTI[214].nType = TYP_TMOK;

	sT[0].sMOT[214].nIEC_SP				= 3489;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[214].nIEC_DP				= 289;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[214].nIEC_NM				= 705;		/* Mérések IEC kezdõcíme */	




} /* end fnSetDataPar()*/

