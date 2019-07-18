/**************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2010.07.20	Gergely Zsolt		50-90: 2/2 -> 2/4 							*
* V2.1.2	2010.11.30	Gergely Zsolt		Gyõr, szeméttelep 							*
* V2.1.3	2011.01.10	Gergely Zsolt		Nagyszentjános, biogáz 							*
* V2.1.4	2011.04.04	Gergely Zsolt		Ikrény, biogáz 							*
* V2.1.5	2011.05.10	Gergely Zsolt		Ács, szélerõmû 							*
* V2.1.6	2011.09.15	Gergely Zsolt		52-93 AREVA 							*
* V2.1.6	2012.02.17	Gergely Zsolt		51-65  2/3 -> 2/5 							*
* V2.1.7	2012.05.09	Gergely Zsolt		11 db TMOK							*
* V2.1.8	2012.05.10	Gergely Zsolt		54-64  2/5 -> 2/1 							*
* V2.1.9	2012.09.04	Gergely Zsolt		50-91  2/2 -> 2/4 							*
* V2.1.10	2012.09.11	Gergely Zsolt		Gyõr város, DAC 							*
* V2.1.11	2012.10.16	Gergely Zsolt		Nagyszentjános 1/1, Ács 1/2							*
* V2.1.12	2012.11.13	Gergely Zsolt		21-02, 21-87 8/4						*
* V2.1.13	2012.12.06	Gergely Zsolt		71-70, 74-11						*
* V2.1.14	2012.12.11	Gergely Zsolt		10-91, 11-13, 11-39, 19-507, 61-18, Gyõr szeméttelep 						*
* V2.1.15	2013.06.14	Gergely Zsolt		20-01  8/5 -> 8/4  !!! Mégse 						*
* V2.1.16	2013.06.17	Gergely Zsolt		51-32  2/2 -> 2/1 						*
* V2.1.17	2013.07.02	Gergely Zsolt		74-45  4/6 -> 4/9 						*
* V2.1.18	2013.09.06	Gergely Zsolt		50-74  2/2 -> 2/4 						*
* V2.1.19	2013.10.04	Gergely Zsolt		50-61  2/2 -> 2/4 						*
* V2.1.20	2013.10.16	Gergely Zsolt		54-75  2/5 -> 2/8 						*
* V2.1.21	2013.10.22	Gergely Zsolt		Pápa, Ganna						*
* V2.1.22	2013.11.15	Gergely Zsolt		10-20, 10-01						*
* V2.1.23	2013.11.25	Gergely Zsolt		Veszprém, kiserõmû						*
* V2.1.24	2013.12.19	Gergely Zsolt		21-02	8/4 -> 8/2						*
* V2.1.25	2014.03.12	Gergely Zsolt		61-72	1/6 -> 3/1						*
* V2.1.26	2014.03.12	Gergely Zsolt		10-01	1/5 -> 1/4						*
* V2.1.27	2014.09.24	Gergely Zsolt		11-40, 13-27  4/6						*
* V2.1.28	2014.10.09	Gergely Zsolt		21-21, 21-22						*
* V2.1.29	2014.11.02	Gergely Zsolt		87-96, 87-25						*
* V2.1.30	2014.11.05	Gergely Zsolt		20-66						*
* V2.1.31	2014.11.26	Gergely Zsolt		21-08, 21-78						*
* V2.1.32	2014.12.05	Gergely Zsolt		Ajka, Veszprémvarsány, Várpalota, Csorna, Sopron nyugat DAC						*
* V2.1.33	2015.02.18	Gergely Zsolt		Gyõr, Busch-Hungária					*
* V2.1.34	2015.03.24	Gergely Zsolt		42-01, 42-03 -> 5/5				*
* V2.1.35	2015.04.09	Gergely Zsolt		15-73, 71-32, 71-33, 71-73, 73-02, 79-134, 73-23, 74-38				*
* V2.1.36	2016.04.19	Gergely Zsolt		52-43, 52-82 -> Radio 9/9			*
* V2.1.37	2016.09.14	Gergely Zsolt		54-64 -> Radio 3/5			*
* V2.1.37	2016.09.28	Gergely Zsolt		50-66 -> Radio 2/5			*






****************************************************************************
* NAME           :  PARS_F.c                                                *
* DESCRIPTION    :                                						    *
* PROCESS        :  
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/


extern void fnSCTblIndx(int nIECOffset, int *nSCTblIndx, int *nOffset, short **p_col_SCAct);

/**********************************************/
/* Globals                                     */
/**********************************************/
/*extern STATION_DESC_MOT		sMOT[];
extern STATION_DESC_TALUS	sTAL[];
extern STATION_TYPE_INDEX 	sTI[];*/

/*extern COM_PAR				sCP;*/
/*extern STATION_COMM_DATA	sCD[];*/
/*extern RTU_RAD				sRAD;*/
/*extern RTU_RAD_NEW			ST[0].sRAD_K1[0];
extern RTU_RAD_NEW			ST[0].sRAD_K2[0];
extern RTU_RAD_NEW			ST[0].sRAD_K3[0];*/

/*extern RTU_LIN				ST[0].sLIN[0];*/
/*extern unsigned short		nNumOfSites;*/
/*extern unsigned short		ST[0].nSiteList[];
extern unsigned short		ST[0].nLinkList[];*/
/*extern unsigned char		byComStat[];
extern int					nTotalRTU;*/
extern void setdat2(unsigned char *input);
/*--------------------------------------------------------------------------*/
/* The list of the function included in this block */                         

/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setd2"   , setdat2},  	
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
/* Statikus site tabla feltoltes												*/
/****************************************************************************/
void setdat2(unsigned char *input)
{

	

	TOTAL_PAR			*ST;
	
	ST = (TOTAL_PAR *)input;
	
	


/*nNumOfSites=250;*/
				
ST[0].nSiteList[0]	=8001; 	ST[0].nLinkList[0]	=RADIO4_5;	/* RADIO4_5 70-54		 				PAP */
ST[0].nSiteList[1]	=8002; 	ST[0].nLinkList[1]	=RADIO4_6;	/* RADIO4_6 72-25		 				PAP */
ST[0].nSiteList[2]	=8003; 	ST[0].nLinkList[2]	=RADIO3_5;	/* RADIO3_5 54-64		 				VESZ */
ST[0].nSiteList[3]	=8004; 	ST[0].nLinkList[3]	=RADIO6_1;	/* RADIO6_1 51-65		 				VESZ */
ST[0].nSiteList[4]	=8005; 	ST[0].nLinkList[4]	=RADIO1_6;	/* RADIO1_6 61-46		 				KAP */
ST[0].nSiteList[5]	=8006; 	ST[0].nLinkList[5]	=RADIO3_4;	/* RADIO3_4 60-33		 				SOP */
ST[0].nSiteList[6]	=8007; 	ST[0].nLinkList[6]	=RADIO3_1;	/* RADIO3_1 62-85		 				SOP */
ST[0].nSiteList[7]	=8008; 	ST[0].nLinkList[7]	=RADIO1_4;	/* RADIO1_5 13-15		 				GYOR */
ST[0].nSiteList[8]	=8009; 	ST[0].nLinkList[8]	=RADIO3_1;	/* RADIO3_1 60-01		 				SOP */
ST[0].nSiteList[9]	=8010; 	ST[0].nLinkList[9]	=RADIO9_5;	/* RADIO9_5 90-77		 				SUM */
ST[0].nSiteList[10]	=8011; 	ST[0].nLinkList[10]	=RADIO9_5;	/* RADIO9_5 90-78		 				SUM */
ST[0].nSiteList[11]	=8012; 	ST[0].nLinkList[11]	=RADIO5_5;	/* RADIO5_5 42-31		 				KOR */
ST[0].nSiteList[12]	=8020; 	ST[0].nLinkList[12]	=RADIO4_6;	/* RADIO4_6 72-57		 				PAP */
ST[0].nSiteList[13]	=8021; 	ST[0].nLinkList[13]	=RADIO2_2;	/* RADIO2_2 50-71		 				VESZ */
ST[0].nSiteList[14]	=8022; 	ST[0].nLinkList[14]	=RADIO9_9;	/* RADIO9_3 52-82		 				TAP */
ST[0].nSiteList[15]	=8023; 	ST[0].nLinkList[15]	=RADIO9_9;	/* RADIO9_2 52-63		 				TAP */
ST[0].nSiteList[16]	=8024; 	ST[0].nLinkList[16]	=RADIO9_9;	/* RADIO9_4 54-66		 				TAP */
ST[0].nSiteList[17]	=8025; 	ST[0].nLinkList[17]	=RADIO2_3;	/* RADIO2_4 50-90		 				VESZ */
ST[0].nSiteList[18]	=8026; 	ST[0].nLinkList[18]	=RADIO6_1;	/* RADIO6_1 51-70		 				VESZ */
ST[0].nSiteList[19]	=8027; 	ST[0].nLinkList[19]	=RADIO9_9;	/* RADIO9_3 52-64		 				TAP */
ST[0].nSiteList[20]	=8028; 	ST[0].nLinkList[20]	=RADIO6_1;	/* RADIO6_1 51-14		 				VESZ */
ST[0].nSiteList[21]	=8029; 	ST[0].nLinkList[21]	=RADIO2_3;	/* RADIO2_2 50-84		 				VESZ */
ST[0].nSiteList[22]	=8030; 	ST[0].nLinkList[22]	=RADIO2_3;	/* RADIO2_2 72-06		 				VESZ */
ST[0].nSiteList[23]	=8031; 	ST[0].nLinkList[23]	=RADIO6_2;	/* RADIO2_2 52-66		 				VESZ */
ST[0].nSiteList[24]	=8032; 	ST[0].nLinkList[24]	=RADIO4_6;	/* RADIO4_6 72-97		 				PAP */
ST[0].nSiteList[25]	=8033; 	ST[0].nLinkList[25]	=RADIO4_5;	/* RADIO4_5 71-23		 				PAP */
ST[0].nSiteList[26]	=8034; 	ST[0].nLinkList[26]	=RADIO4_6;	/* RADIO4_6 72-66		 				PAP */
ST[0].nSiteList[27]	=8035; 	ST[0].nLinkList[27]	=RADIO9_1;	/* RADIO9_1 52-98		 				TAP */
ST[0].nSiteList[28]	=8036; 	ST[0].nLinkList[28]	=RADIO2_1;	/* RADIO2_1 50-31		 				VESZ */
ST[0].nSiteList[29]	=8037; 	ST[0].nLinkList[29]	=RADIO2_3;	/* RADIO2_3 51-96		 				VESZ */
ST[0].nSiteList[30]	=8038; 	ST[0].nLinkList[30]	=RADIO4_1;	/* RADIO4_6 73-02		 				PAP */
ST[0].nSiteList[31]	=8039; 	ST[0].nLinkList[31]	=RADIO1_5;	/* RADIO1_5 13-93		 				GYOR */
ST[0].nSiteList[32]	=8040; 	ST[0].nLinkList[32]	=LINE11;	/* RADIO1_5 12-88		 				GYOR */
ST[0].nSiteList[33]	=8041; 	ST[0].nLinkList[33]	=RADIO1_6;	/* RADIO1_6 64-09		 				GYOR */
ST[0].nSiteList[34]	=8042; 	ST[0].nLinkList[34]	=RADIO3_3;	/* RADIO3_1 60-88		 				SOP */
ST[0].nSiteList[35]	=8043; 	ST[0].nLinkList[35]	=RADIO1_6;	/* RADIO1_6 60-85		 				GYOR */
ST[0].nSiteList[36]	=8044; 	ST[0].nLinkList[36]	=RADIO1_5;	/* RADIO1_5 11-83		 				GYOR */
ST[0].nSiteList[37]	=8045; 	ST[0].nLinkList[37]	=RADIO3_4;	/* RADIO3_4 62-17		 				SOP */
ST[0].nSiteList[38]	=8046; 	ST[0].nLinkList[38]	=RADIO5_1;	/* RADIO1_5 64-62		 				GYOR */
ST[0].nSiteList[39]	=8047; 	ST[0].nLinkList[39]	=RADIO1_5;	/* RADIO1_5 11-18		 				GYOR */
ST[0].nSiteList[40]	=8048; 	ST[0].nLinkList[40]	=RADIO5_1;	/* RADIO1_5 61-20		 				GYOR */
ST[0].nSiteList[41]	=8049; 	ST[0].nLinkList[41]	=RADIO1_6;	/* RADIO1_6 64-70		 				GYOR */
ST[0].nSiteList[42]	=8050; 	ST[0].nLinkList[42]	=RADIO1_5;	/* RADIO1_5 11-44		 				GYOR */
ST[0].nSiteList[43]	=8051; 	ST[0].nLinkList[43]	=RADIO1_5;	/* RADIO1_5 11-04		 				GYOR */
ST[0].nSiteList[44]	=8052; 	ST[0].nLinkList[44]	=RADIO1_5;	/* RADIO1_5 11-43		 				GYOR */
ST[0].nSiteList[45]	=8053; 	ST[0].nLinkList[45]	=RADIO5_1;	/* RADIO1_5 61-06		 				GYOR */
ST[0].nSiteList[46]	=8054; 	ST[0].nLinkList[46]	=RADIO5_1;	/* RADIO1_6 60-96		 				GYOR */
ST[0].nSiteList[47]	=8055; 	ST[0].nLinkList[47]	=RADIO5_1;	/* RADIO1_6 64-54		 				GYOR */
ST[0].nSiteList[48]	=8056; 	ST[0].nLinkList[48]	=RADIO1_6;	/* RADIO1_6 61-92		 				GYOR */
ST[0].nSiteList[49]	=8057; 	ST[0].nLinkList[49]	=RADIO3_1;	/* RADIO3_1 60-40		 				SOP */
ST[0].nSiteList[50]	=8058; 	ST[0].nLinkList[50]	=RADIO1_4;	/* RADIO1_4 10-15		 				GYOR */
ST[0].nSiteList[51]	=8059; 	ST[0].nLinkList[51]	=RADIO8_3;	/* RADIO8_3 21-98		 				DOR */
ST[0].nSiteList[52]	=8060; 	ST[0].nLinkList[52]	=RADIO4_6;	/* RADIO4_6 86-84		 				PAP */
ST[0].nSiteList[53]	=8061; 	ST[0].nLinkList[53]	=RADIO8_4;	/* RADIO8_4 21-25		 				DOR */
ST[0].nSiteList[54]	=8062; 	ST[0].nLinkList[54]	=RADIO8_4;	/* RADIO8_4 20-44		 				DOR */
ST[0].nSiteList[55]	=8063; 	ST[0].nLinkList[55]	=RADIO8_4;	/* RADIO8_4 21-129		 				DOR */
ST[0].nSiteList[56]	=8064; 	ST[0].nLinkList[56]	=RADIO7_7;	/* RADIO7_5 87-15		 				BICS */
ST[0].nSiteList[57]	=8065; 	ST[0].nLinkList[57]	=RADIO7_5;	/* RADIO7_5 87-37 (87-36) 				BICS */
ST[0].nSiteList[58]	=8066; 	ST[0].nLinkList[58]	=RADIO2_3;	/* RADIO4_6 54-65		 				PAP */
ST[0].nSiteList[59]	=8067; 	ST[0].nLinkList[59]	=RADIO2_3;	/* RADIO2_4 50-61		 				VESZ */
ST[0].nSiteList[60]	=8068; 	ST[0].nLinkList[60]	=RADIO3_5;	/* RADIO2_1 37-19		 				VESZ */
ST[0].nSiteList[61]	=8070; 	ST[0].nLinkList[61]	=RADIO3_5;	/* RADIO2_5 37-38		 				VESZ */
ST[0].nSiteList[62]	=8071; 	ST[0].nLinkList[62]	=RADIO4_1;	/* RADIO4_1 71-73		 				PAP */
ST[0].nSiteList[63]	=8072; 	ST[0].nLinkList[63]	=RADIO1_1;	/* RADIO1_1 Gyõr, szeméttelep			GYOR */
ST[0].nSiteList[64]	=7088; 	ST[0].nLinkList[64]	=RADIO1_5;	/* RADIO1_1 Nagyszentjanos, Biogaz		GYOR */
ST[0].nSiteList[65]	=8073; 	ST[0].nLinkList[65]	=RADIO1_5;	/* RADIO1_5 Ikrény, Biogaz				GYOR */
ST[0].nSiteList[66]	=5223; 	ST[0].nLinkList[66]	=RADIO1_1;	/* RADIO1_2 Ács, szélerõmû				GYOR */
ST[0].nSiteList[67]	=8074; 	ST[0].nLinkList[67]	=RADIO2_2;	/* RADIO2_2 52-93						VESZ */
ST[0].nSiteList[68]	=8075; 	ST[0].nLinkList[68]	=RADIO5_5;	/* RADIO5_5 48-938						KOR */
ST[0].nSiteList[69]	=8076; 	ST[0].nLinkList[69]	=RADIO5_5;	/* RADIO5_5 49-049						KOR */
ST[0].nSiteList[70]	=8077; 	ST[0].nLinkList[70]	=RADIO4_6;	/* RADIO1_5 13-27						GYOR */
ST[0].nSiteList[71]	=8078; 	ST[0].nLinkList[71]	=RADIO9_6;	/* RADIO9_5 90-65						SUM */
ST[0].nSiteList[72]	=8079; 	ST[0].nLinkList[72]	=RADIO5_1;	/* RADIO1_5 64-22						GYOR */
ST[0].nSiteList[73]	=8080; 	ST[0].nLinkList[73]	=RADIO5_1;	/* RADIO1_6 64-20						GYOR*/
ST[0].nSiteList[74]	=8081; 	ST[0].nLinkList[74]	=RADIO8_4;	/* RADIO7_5 21391 (21-52)			    ESZT */
ST[0].nSiteList[75]	=8082; 	ST[0].nLinkList[75]	=RADIO4_5;	/* RADIO4_5 72-43						PAP*/

ST[0].nSiteList[76]	=8083; 	ST[0].nLinkList[76]	=RADIO5_1;	/* RADIO1_5 60-78						GYOR */
ST[0].nSiteList[77]	=8084; 	ST[0].nLinkList[77]	=RADIO5_1;	/* RADIO1_1 61-18						GYOR */
ST[0].nSiteList[78]	=8085; 	ST[0].nLinkList[78]	=RADIO1_4;	/* RADIO1_4 11-06						GYOR */
ST[0].nSiteList[79]	=8086; 	ST[0].nLinkList[79]	=RADIO1_1;	/* RADIO1_1 10-91						GYOR */
ST[0].nSiteList[80]	=8087; 	ST[0].nLinkList[80]	=RADIO1_5;	/* RADIO1_5 19-604						GYOR */
ST[0].nSiteList[81]	=8088; 	ST[0].nLinkList[81]	=RADIO1_1;	/* RADIO1_1 11-39						GYOR */
ST[0].nSiteList[82]	=8089; 	ST[0].nLinkList[82]	=RADIO1_1;	/* RADIO1_1 11-13						GYOR */
ST[0].nSiteList[83]	=8090; 	ST[0].nLinkList[83]	=RADIO1_4;	/* RADIO1_4 10-06						GYOR */
ST[0].nSiteList[84]	=8091; 	ST[0].nLinkList[84]	=RADIO1_6;	/* RADIO1_6 61-23						GYOR */
ST[0].nSiteList[85]	=8092; 	ST[0].nLinkList[85]	=RADIO1_6;	/* RADIO1_6 61-31						GYOR */
ST[0].nSiteList[86]	=8093; 	ST[0].nLinkList[86]	=RADIO5_5;	/* RADIO5_7 42-01						KOR */
ST[0].nSiteList[87]	=8094; 	ST[0].nLinkList[87]	=RADIO5_5;	/* RADIO5_7 42-03						KOR */
ST[0].nSiteList[88]	=8095; 	ST[0].nLinkList[88]	=RADIO5_5;	/* RADIO5_5 42-04						KOR */
ST[0].nSiteList[89]	=8096; 	ST[0].nLinkList[89]	=RADIO5_5;	/* RADIO5_5 43-43						KOR */
ST[0].nSiteList[90]	=8097; 	ST[0].nLinkList[90]	=RADIO9_5;	/* RADIO9_5 90-74						SUM */
ST[0].nSiteList[91]	=8098; 	ST[0].nLinkList[91]	=RADIO8_4;	/* RADIO8_4 20-26						DOR */
ST[0].nSiteList[92]	=8099; 	ST[0].nLinkList[92]	=RADIO8_4;	/* RADIO8_4 20-38						DOR */
ST[0].nSiteList[93]	=8100; 	ST[0].nLinkList[93]	=RADIO2_2;	/* RADIO2_2 54-42						VESZ */
ST[0].nSiteList[94]	=8101; 	ST[0].nLinkList[94]	=RADIO2_2;	/* RADIO2_2 53-32						VESZ */
ST[0].nSiteList[95]	=8102; 	ST[0].nLinkList[95]	=RADIO4_5;	/* RADIO4_5 71-80						PAP */
ST[0].nSiteList[96]	=8103; 	ST[0].nLinkList[96]	=RADIO9_1;	/* RADIO9_1 52-52						TAP */
ST[0].nSiteList[97]	=8104; 	ST[0].nLinkList[97]	=RADIO9_9;	/* RADIO9_2 52-43						TAP */
ST[0].nSiteList[98]	=8105; 	ST[0].nLinkList[98]	=RADIO9_1;	/* RADIO9_1 59-706						TAP */
ST[0].nSiteList[99]	=8106; 	ST[0].nLinkList[99]	=RADIO3_5;	/* RADIO2_3 54-74						VESZ */
ST[0].nSiteList[100]=8107; 	ST[0].nLinkList[100]=RADIO2_3;	/* RADIO2_2 50-80						TAP */

ST[0].nSiteList[101]=8108; 	ST[0].nLinkList[101]=RADIO3_3;	/* RADIO3_8 62-10						SOP */
ST[0].nSiteList[102]=8109; 	ST[0].nLinkList[102]=RADIO1_4;	/* RADIO1_4 11-92						GYOR */
ST[0].nSiteList[103]=8110; 	ST[0].nLinkList[103]=RADIO3_4;	/* RADIO3_4 60-04						SOP */
ST[0].nSiteList[104]=8111; 	ST[0].nLinkList[104]=RADIO1_5;	/* RADIO1_5 11-84						GYOR */
ST[0].nSiteList[105]=8112; 	ST[0].nLinkList[105]=RADIO8_4;	/* RADIO8_4 20-40						DOR */
ST[0].nSiteList[106]=8113; 	ST[0].nLinkList[106]=RADIO8_4;	/* RADIO8_4 20-11						DOR */
ST[0].nSiteList[107]=8114; 	ST[0].nLinkList[107]=RADIO7_5;	/* RADIO7_5 21-54						BI */
ST[0].nSiteList[108]=8115; 	ST[0].nLinkList[108]=RADIO6_1;	/* RADIO6_2 54-09						VESZ */

ST[0].nSiteList[109]=8116; 	ST[0].nLinkList[109]=RADIO5_5;	/* RADIO5_5 42-25						KOR */
ST[0].nSiteList[110]=8117; 	ST[0].nLinkList[110]=RADIO9_1;	/* RADIO9_1 54-77						TAP */
ST[0].nSiteList[111]=8118; 	ST[0].nLinkList[111]=RADIO4_7;	/* RADIO4_7 54-78						PAP */
ST[0].nSiteList[112]=8119; 	ST[0].nLinkList[112]=RADIO3_6;	/* RADIO2_8 54-75						VESZ */
ST[0].nSiteList[113]=8184; 	ST[0].nLinkList[113]=RADIO6_1;	/* RADIO6_1 54-76						VESZ */
ST[0].nSiteList[114]=8120; 	ST[0].nLinkList[114]=RADIO2_8;	/* RADIO2_8 37-26						VESZ */

ST[0].nSiteList[115]=5279; 	ST[0].nLinkList[115]=RADIO7_2;	/* RADIO8_4 20-01						DOR */

ST[0].nSiteList[116]=8121; 	ST[0].nLinkList[116]=RADIO2_1;	/* RADIO2_1 50-30						VESZ */
ST[0].nSiteList[117]=8122; 	ST[0].nLinkList[117]=RADIO1_5;	/* RADIO1_5 11-25						GYOR */
ST[0].nSiteList[118]=8123; 	ST[0].nLinkList[118]=RADIO4_4;	/* RADIO4_4 74-38						PAP */
ST[0].nSiteList[119]=8124; 	ST[0].nLinkList[119]=RADIO4_6;	/* RADIO4_6 54-79						PAP */
ST[0].nSiteList[120]=8125; 	ST[0].nLinkList[120]=RADIO4_5;	/* RADIO4_5 72-73						PAP */
ST[0].nSiteList[121]=8126; 	ST[0].nLinkList[121]=RADIO4_6;	/* RADIO1_5 11-94						GYOR */
ST[0].nSiteList[122]=8127; 	ST[0].nLinkList[122]=RADIO9_5;	/* RADIO9_5 90-08						SUM */
ST[0].nSiteList[123]=8128; 	ST[0].nLinkList[123]=RADIO4_1;	/* RADIO4_6 79-910						PAP */
ST[0].nSiteList[124]=8129; 	ST[0].nLinkList[124]=RADIO1_6;	/* RADIO1_6 60-62						GYOR */
ST[0].nSiteList[125]=8130; 	ST[0].nLinkList[125]=RADIO4_5;	/* RADIO4_5 72-15						PAP */
ST[0].nSiteList[126]=8131; 	ST[0].nLinkList[126]=RADIO5_1;	/* RADIO1_6 64-61						GYOR */

ST[0].nSiteList[127]=8132; 	ST[0].nLinkList[127]=RADIO1_6;	/* RADIO1_6 62-92						GYOR */
ST[0].nSiteList[128]=8133; 	ST[0].nLinkList[128]=RADIO5_1;	/* RADIO1_6 61-07						GYOR */
ST[0].nSiteList[129]=8134; 	ST[0].nLinkList[129]=RADIO1_4;	/* RADIO1_5 10-42						GYOR */
ST[0].nSiteList[130]=8135; 	ST[0].nLinkList[130]=RADIO1_5;	/* RADIO1_5 11-59						GYOR */
ST[0].nSiteList[131]=8136; 	ST[0].nLinkList[131]=RADIO1_1;	/* RADIO1_1 19-507						GYOR */
ST[0].nSiteList[132]=8137; 	ST[0].nLinkList[132]=RADIO4_1;	/* RADIO1_5 (11-47) 15-73				GYOR */
ST[0].nSiteList[133]=8138; 	ST[0].nLinkList[133]=RADIO1_5;	/* RADIO1_5 13-43						GYOR */
ST[0].nSiteList[134]=8139; 	ST[0].nLinkList[134]=RADIO3_1;	/* RADIO3_1 61-72						GYOR */
ST[0].nSiteList[135]=8140; 	ST[0].nLinkList[135]=RADIO1_6;	/* RADIO1_6 61-75						GYOR */
ST[0].nSiteList[136]=8141; 	ST[0].nLinkList[136]=RADIO3_1;	/* RADIO3_1 61-66						SOP */
ST[0].nSiteList[137]=8142; 	ST[0].nLinkList[137]=RADIO3_5;	/* RADIO2_1 37-31						VESZ */
ST[0].nSiteList[138]=8143; 	ST[0].nLinkList[138]=RADIO9_5;	/* RADIO9_5 90-93						TAP */
ST[0].nSiteList[139]=8144; 	ST[0].nLinkList[139]=RADIO9_5;	/* RADIO9_5 90-29						TAP */
ST[0].nSiteList[140]=8145; 	ST[0].nLinkList[140]=RADIO9_7;	/* RADIO9_7 90-68 						TAP */
ST[0].nSiteList[141]=8146; 	ST[0].nLinkList[141]=RADIO8_2;	/* RADIO8_2 21-02						DOR */
ST[0].nSiteList[142]=8147; 	ST[0].nLinkList[142]=RADIO7_1;	/* RADIO8_4 21-87						DOR */
ST[0].nSiteList[143]=8148; 	ST[0].nLinkList[143]=RADIO8_4;	/* RADIO8_4 21-153						DOR */
ST[0].nSiteList[144]=8149; 	ST[0].nLinkList[144]=RADIO8_4;	/* RADIO8_4 21-17						DOR */
ST[0].nSiteList[145]=8150; 	ST[0].nLinkList[145]=RADIO2_1;	/* RADIO2_1 54-71						VESZ */
ST[0].nSiteList[146]=8151; 	ST[0].nLinkList[146]=RADIO2_1;	/* RADIO2_1 50-08						VESZ */
ST[0].nSiteList[147]=8152; 	ST[0].nLinkList[147]=RADIO2_1;	/* RADIO2_1 50-39						VESZ */
ST[0].nSiteList[148]=8153; 	ST[0].nLinkList[148]=RADIO2_1;	/* RADIO2_1 50-48						VESZ */
ST[0].nSiteList[149]=8154; 	ST[0].nLinkList[149]=RADIO2_5;	/* RADIO2_2 50-66 						VESZ */
ST[0].nSiteList[150]=8155; 	ST[0].nLinkList[150]=RADIO2_2;	/* RADIO2_2 51-56						VESZ */
ST[0].nSiteList[151]=8156; 	ST[0].nLinkList[151]=RADIO6_1;	/* RADIO6_1 51-35						VESZ */
ST[0].nSiteList[152]=8157; 	ST[0].nLinkList[152]=RADIO2_3;	/* RADIO2_2 71-05 74-37						VESZ */
ST[0].nSiteList[153]=8158; 	ST[0].nLinkList[153]=RADIO6_1;	/* RADIO6_1 54-25						VESZ */
ST[0].nSiteList[154]=8159; 	ST[0].nLinkList[154]=RADIO4_5;	/* RADIO4_5 70-59						PAP */
ST[0].nSiteList[155]=8160; 	ST[0].nLinkList[155]=RADIO4_5;	/* RADIO4_5 71-22						PAP */
ST[0].nSiteList[156]=8161; 	ST[0].nLinkList[156]=RADIO4_5;	/* RADIO4_5 71-14						PAP */
ST[0].nSiteList[157]=8162; 	ST[0].nLinkList[157]=RADIO4_1;	/* RADIO4_6 71-33						PAP */
ST[0].nSiteList[158]=8163; 	ST[0].nLinkList[158]=RADIO4_1;	/* RADIO4_6 71-32						PAP */
ST[0].nSiteList[159]=8164; 	ST[0].nLinkList[159]=RADIO4_6;	/* RADIO4_6 74-30						PAP */
ST[0].nSiteList[160]=8165; 	ST[0].nLinkList[160]=RADIO9_1;	/* RADIO9_1 52-44						SUM */
ST[0].nSiteList[161]=8166; 	ST[0].nLinkList[161]=RADIO9_5;	/* RADIO9_5 90-34						SUM */

ST[0].nSiteList[162]=8167; 	ST[0].nLinkList[162]=RADIO7_5;	/* RADIO7_5 87-20						BI */
ST[0].nSiteList[163]=8168; 	ST[0].nLinkList[163]=RADIO4_6;	/* RADIO1_5 11-40						GYOR */
ST[0].nSiteList[164]=8169; 	ST[0].nLinkList[164]=RADIO1_6;	/* RADIO1_6 61-14						GYOR */
ST[0].nSiteList[165]=8170; 	ST[0].nLinkList[165]=RADIO9_1;	/* RADIO9_1 54-80						SUM */
ST[0].nSiteList[166]=8171; 	ST[0].nLinkList[166]=RADIO4_5;	/* RADIO4_5 70-80						PAP */
ST[0].nSiteList[167]=8172; 	ST[0].nLinkList[167]=RADIO2_1;	/* RADIO2_1 37-69						VESZ */
ST[0].nSiteList[168]=8173; 	ST[0].nLinkList[168]=RADIO4_1;	/* RADIO4_6 79-134 						PAP */
ST[0].nSiteList[169]=8174; 	ST[0].nLinkList[169]=RADIO1_6;	/* RADIO1_6 61-27						GYOR */
ST[0].nSiteList[170]=8175; 	ST[0].nLinkList[170]=RADIO9_5;	/* RADIO9_5 90-70						SUM */
ST[0].nSiteList[171]=8176; 	ST[0].nLinkList[171]=RADIO2_3;	/* RADIO2_4 50-91						VESZ */
ST[0].nSiteList[172]=8177; 	ST[0].nLinkList[172]=RADIO3_1;	/* RADIO3_1 68-428						SOP */
ST[0].nSiteList[173]=8178; 	ST[0].nLinkList[173]=RADIO4_6;	/* RADIO4_6 11-82						PAP */
ST[0].nSiteList[174]=8179; 	ST[0].nLinkList[174]=RADIO9_5;	/* RADIO9_5 90-43						SUM */
ST[0].nSiteList[175]=8180; 	ST[0].nLinkList[175]=RADIO9_7;	/* RADIO9_7 90-26						TAP */
ST[0].nSiteList[176]=8181; 	ST[0].nLinkList[176]=RADIO4_4;	/* RADIO4_4 73-23						PAP */
ST[0].nSiteList[177]=8182; 	ST[0].nLinkList[177]=RADIO3_5;	/* RADIO2_1 54-81						VESZ */
ST[0].nSiteList[178]=8183; 	ST[0].nLinkList[178]=RADIO4_9;	/* RADIO4_6 74-23						PAP */
ST[0].nSiteList[179]=2500; 	ST[0].nLinkList[179]=RSLINK11;	/* Rslink11 Gyõr város DAC				PAP */
ST[0].nSiteList[180]=8185; 	ST[0].nLinkList[180]=RADIO8_4;	/* RADIO8_4 20-47						DOR */

ST[0].nSiteList[181]=8186; 	ST[0].nLinkList[181]=RADIO6_1;	/* RADIO6_1 51-32						VESZ */
ST[0].nSiteList[182]=8187; 	ST[0].nLinkList[182]=RADIO1_1;	/* RADIO1_1 11-63						GYOR */
ST[0].nSiteList[183]=8188; 	ST[0].nLinkList[183]=RADIO2_3;	/* RADIO2_4 50-74						VESZ */
ST[0].nSiteList[184]=8189; 	ST[0].nLinkList[184]=RADIO2_1;	/* RADIO2_1 50-07						VESZ */
ST[0].nSiteList[185]=8190; 	ST[0].nLinkList[185]=RADIO6_2;	/* RADIO6_2 54-38						VESZ */
ST[0].nSiteList[186]=8191; 	ST[0].nLinkList[186]=RADIO4_5;	/* RADIO4_5 71-99						PAP */
ST[0].nSiteList[187]=8192; 	ST[0].nLinkList[187]=RADIO6_1;	/* RADIO6_1 54-82						VESZ */
ST[0].nSiteList[188]=8193; 	ST[0].nLinkList[188]=RADIO4_6;	/* RADIO4_9 74-45						PAP */

ST[0].nSiteList[189]=5054; 	ST[0].nLinkList[189]=RADIO4_7;	/* RADIO4_7 71-70						PAP */
ST[0].nSiteList[190]=7133; 	ST[0].nLinkList[190]=RADIO4_7;	/* RADIO4_7 74-11						PAP */

ST[0].nSiteList[191]=8194; 	ST[0].nLinkList[191]=RADIO4_5;	/* RADIO4_5 Pápa, Ganna					PAP */

ST[0].nSiteList[192]=8195; 	ST[0].nLinkList[192]=RADIO1_5;	/* RADIO1_5 10-20						GYOR */
ST[0].nSiteList[193]=8196; 	ST[0].nLinkList[193]=RADIO1_4;	/* RADIO1_4 10-01						GYOR */

ST[0].nSiteList[194]=8197; 	ST[0].nLinkList[194]=RADIO2_1;	/* RADIO2_1 Veszprém, kiserõmû			VESZ */

ST[0].nSiteList[195]=2510; 	ST[0].nLinkList[195]=LINE1;		/* Aszófõ DAC							VESZ */
ST[0].nSiteList[196]=8198; 	ST[0].nLinkList[196]=RADIO1_5;	/* Felpéc biogáz						GYOR */

ST[0].nSiteList[197]=8200; 	ST[0].nLinkList[197]=RADIO8_4;	/* 21-73								DOR */
ST[0].nSiteList[198]=8199; 	ST[0].nLinkList[198]=RADIO8_4;	/* 21-15								DOR */

ST[0].nSiteList[199]=8201; 	ST[0].nLinkList[199]=RADIO8_4;	/* 21-21								DOR */
ST[0].nSiteList[200]=8202; 	ST[0].nLinkList[200]=RADIO8_4;	/* 21-22								DOR */

ST[0].nSiteList[201]=8205; 	ST[0].nLinkList[201]=RADIO7_5;	/* 87-96								DOR */
ST[0].nSiteList[202]=8204; 	ST[0].nLinkList[202]=RADIO7_5;	/* 87-25								DOR */

ST[0].nSiteList[203]=8206; 	ST[0].nLinkList[203]=RADIO8_4;	/* 20-66								DOR */

ST[0].nSiteList[204]=8207; 	ST[0].nLinkList[204]=RADIO8_4;	/* 21-08								DOR */
ST[0].nSiteList[205]=8203; 	ST[0].nLinkList[205]=RADIO8_4;	/* 21-78								DOR */

ST[0].nSiteList[206]=2520; 	ST[0].nLinkList[206]=LINE1;		/* Ajka DAC								 */
ST[0].nSiteList[207]=2540; 	ST[0].nLinkList[207]=LINE1;		/* Veszprénvarsány DAC					 */
ST[0].nSiteList[208]=2530; 	ST[0].nLinkList[208]=LINE1;		/* Várpalota DAC						 */
ST[0].nSiteList[209]=2550; 	ST[0].nLinkList[209]=LINE1;		/* Csorna DAC							 */
ST[0].nSiteList[210]=2560; 	ST[0].nLinkList[210]=LINE1;		/* Sopron nyugat DAC					 */
ST[0].nSiteList[211]=8208; 	ST[0].nLinkList[211]=RADIO1_4;		/* Gyõr, Busch-Hungária					 */
ST[0].nSiteList[212]=8211; 	ST[0].nLinkList[212]=RADIO1_4;		/* Gyõr, Árpád tömb					 */

ST[0].nSiteList[213]=8209; 	ST[0].nLinkList[213]=RADIO2_2;	/* 53-14								VESZ */
ST[0].nSiteList[214]=8210; 	ST[0].nLinkList[214]=RADIO2_2;	/* 53-15								VESZ */

ST[0].nSiteList[215]=2000; 	ST[0].nLinkList[215]=RSLINK11;	/* Front end B							*/
ST[0].nSiteList[216]=6000; 	ST[0].nLinkList[216]=RSLINK11;	/* Front end D							*/
ST[0].nSiteList[217]=10000;	ST[0].nLinkList[217]=RSLINK11;	/* Front end H							*/
ST[0].nSiteList[218]=8999; 	ST[0].nLinkList[218]=RSLINK11;	/* B redundancia						*/






ST[0].nSiteList[249]=0;		ST[0].nLinkList[249]	=ALL_LINK;	/* RTUALL */







/*for (nI=0;nI<MAX_RTU;nI++)
{
	byComStat[nI] = 0;
}


   MOSCAD_set_sitetable(nNumOfSites,ST[0].nSiteList,ST[0].nLinkList,byComStat);*/




/****************************************************************************/
/* Dinamikus site tabla feltoltese											*/
/****************************************************************************/

	
/*-------------------------------*/
/* Clear the dynamic site table. */
/*-------------------------------*/
MOSCAD_init_sitetable(); 
/* 250--------------------------------------------------------------------------259*/
/* 250 Komarom, Hansaprint			IG			*/ MOSCAD_add_new_site(301,RADIO5_8);		
/* 251 85-00,85-83					IG			*/ MOSCAD_add_new_site(302,RADIO5_1);
/* 252 12-14						MOS			*/ MOSCAD_add_new_site(303,RADIO7_1);
/* 253 30-23						SZVAR		*/ MOSCAD_add_new_site(304,RADIO1_1);
/* 254 11-10						MOS			*/ MOSCAD_add_new_site(305,RADIO7_1);
/* 255 */ MOSCAD_add_new_site(315,RADIO6_1);
/* 256 */ MOSCAD_add_new_site(316,RADIO6_1);
/* 257 */ MOSCAD_add_new_site(317,RADIO6_1);
/* 258 */ MOSCAD_add_new_site(318,RADIO6_1);
/* 259 */ MOSCAD_add_new_site(319,RADIO6_1);
/* 260--------------------------------------269*/
/* 260 */ MOSCAD_add_new_site(320,RADIO6_1);
/* 261 */ MOSCAD_add_new_site(321,RADIO6_1);
/* 262 */ MOSCAD_add_new_site(322,RADIO6_1);
/* 263 */ MOSCAD_add_new_site(323,RADIO6_1);
/* 264 */ MOSCAD_add_new_site(324,RADIO6_1);
/* 265 */ MOSCAD_add_new_site(325,RADIO6_1);
/* 266 */ MOSCAD_add_new_site(326,RADIO6_1);
/* 267 */ MOSCAD_add_new_site(327,RADIO6_1);
/* 268 */ MOSCAD_add_new_site(328,RADIO6_1);
/* 269 */ MOSCAD_add_new_site(329,RADIO6_1);
/* 270--------------------------------------279*/
/* 270 */ MOSCAD_add_new_site(330,RADIO6_1);
/* 271 */ MOSCAD_add_new_site(331,RADIO6_1);
/* 272 */ MOSCAD_add_new_site(332,RADIO6_1);
/* 273 */ MOSCAD_add_new_site(333,RADIO6_1);
/* 274 */ MOSCAD_add_new_site(334,RADIO6_1);
/* 275 */ MOSCAD_add_new_site(335,RADIO6_1);
/* 276 */ MOSCAD_add_new_site(336,RADIO6_1);
/* 277 */ MOSCAD_add_new_site(337,RADIO6_1);
/* 278 */ MOSCAD_add_new_site(338,RADIO6_1);
/* 279 */ MOSCAD_add_new_site(339,RADIO6_1);
/* 280--------------------------------------289*/
/* 280 */ MOSCAD_add_new_site(340,RADIO6_1);
/* 281 */ MOSCAD_add_new_site(341,RADIO6_1);
/* 282 */ MOSCAD_add_new_site(342,RADIO6_1);
/* 283 */ MOSCAD_add_new_site(343,RADIO6_1);
/* 284 */ MOSCAD_add_new_site(344,RADIO6_1);
/* 285 */ MOSCAD_add_new_site(345,RADIO6_1);
/* 286 */ MOSCAD_add_new_site(346,RADIO6_1);
/* 287 */ MOSCAD_add_new_site(347,RADIO6_1);
/* 288 */ MOSCAD_add_new_site(348,RADIO6_1);
/* 289 */ MOSCAD_add_new_site(349,RADIO6_1);
/* 290--------------------------------------299*/
/* 290 */ MOSCAD_add_new_site(350,RADIO6_1);
/* 291 */ MOSCAD_add_new_site(351,RADIO6_1);
/* 292 */ MOSCAD_add_new_site(352,RADIO6_1);
/* 293 */ MOSCAD_add_new_site(353,RADIO6_1);
/* 294 */ MOSCAD_add_new_site(354,RADIO6_1);
/* 295 */ MOSCAD_add_new_site(355,RADIO6_1);
/* 296 */ MOSCAD_add_new_site(356,RADIO6_1);
/* 297 */ MOSCAD_add_new_site(357,RADIO6_1);
/* 298 */ MOSCAD_add_new_site(358,RADIO6_1);
/* 299 */ MOSCAD_add_new_site(359,RADIO6_1);
/* 300--------------------------------------309*/
/* 300 */ MOSCAD_add_new_site(360,RADIO6_1);
/* 301 */ MOSCAD_add_new_site(361,RADIO6_1);
/* 302 */ MOSCAD_add_new_site(362,RADIO6_1);
/* 303 */ MOSCAD_add_new_site(363,RADIO6_1);
/* 304 */ MOSCAD_add_new_site(364,RADIO6_1);
/* 305 */ MOSCAD_add_new_site(365,RADIO6_1);
/* 306 */ MOSCAD_add_new_site(406,RADIO6_1);
/* 307 */ MOSCAD_add_new_site(407,RADIO6_1);
/* 308 */ MOSCAD_add_new_site(408,RADIO6_1);
/* 309 */ MOSCAD_add_new_site(409,RADIO6_1);
/* 310--------------------------------------319*/
/* 310 */ MOSCAD_add_new_site(410,RADIO6_1);
/* 311 */ MOSCAD_add_new_site(411,RADIO6_1);
/* 312 */ MOSCAD_add_new_site(412,RADIO6_1);
/* 313 */ MOSCAD_add_new_site(413,RADIO6_1);
/* 314 */ MOSCAD_add_new_site(414,RADIO6_1);
/* 315 */ MOSCAD_add_new_site(415,RADIO6_1);
/* 316 */ MOSCAD_add_new_site(416,RADIO6_1);
/* 317 */ MOSCAD_add_new_site(417,RADIO6_1);
/* 318 */ MOSCAD_add_new_site(418,RADIO6_1);
/* 319 */ MOSCAD_add_new_site(419,RADIO6_1);
	



/****************************************************************************/
/* Parancskuldes parameterei      											*/
/****************************************************************************/

/*int		nI;
int 			nSCTblIndx;
int 			nOffset;
short			*p_col_DCAct;
short			*p_col_SCAct;*/
	
	

/* IEC cimnek megfelelo RTU cimek -----------------------------------------------------------------------*/
/* Ha valamelyik darabszam = 0, akkor olyan tipusu parancs nem tartozik az RTU-hoz */
        	
         	





/*Nyugta inicializalas*/

/*for (nI=0;nI<sCP.nRtuNum && nI<MAX_RTU;nI++)
{
	if (sCP.sCPR[nI].nAckNum>0)
		{
 		fnSCTblIndx(sCP.sCPR[nI].nAckStart, &nSCTblIndx, &nOffset, &p_col_SCAct);

		p_col_SCAct[sCP.sCPR[nI].nAckStart-nOffset] = 1;
		}
}*/


/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* K1 : GYOR, KAP*/
ST[0].sRAD_K1[0].nRtuNumRad = 63; /*63*/
ST[0].sRAD_K1[0].nIndx[0]=4; 
ST[0].sRAD_K1[0].nIndx[1]=7; 
ST[0].sRAD_K1[0].nIndx[2]=31; 
ST[0].sRAD_K1[0].nIndx[3]=32; 
ST[0].sRAD_K1[0].nIndx[4]=33; 
ST[0].sRAD_K1[0].nIndx[5]=35; 
ST[0].sRAD_K1[0].nIndx[6]=36; 
ST[0].sRAD_K1[0].nIndx[7]=38; 
ST[0].sRAD_K1[0].nIndx[8]=39; 
ST[0].sRAD_K1[0].nIndx[9]=40; 
ST[0].sRAD_K1[0].nIndx[10]=41; 
ST[0].sRAD_K1[0].nIndx[11]=42; 
ST[0].sRAD_K1[0].nIndx[12]=43; 
ST[0].sRAD_K1[0].nIndx[13]=44; 
ST[0].sRAD_K1[0].nIndx[14]=45; 
ST[0].sRAD_K1[0].nIndx[15]=46; 
ST[0].sRAD_K1[0].nIndx[16]=47; 
ST[0].sRAD_K1[0].nIndx[17]=48; 
ST[0].sRAD_K1[0].nIndx[18]=49; 
ST[0].sRAD_K1[0].nIndx[19]=50; 
ST[0].sRAD_K1[0].nIndx[20]=63; 
ST[0].sRAD_K1[0].nIndx[21]=64; 
ST[0].sRAD_K1[0].nIndx[22]=65; 
ST[0].sRAD_K1[0].nIndx[23]=66; 
ST[0].sRAD_K1[0].nIndx[24]=70; 
ST[0].sRAD_K1[0].nIndx[25]=72; 
ST[0].sRAD_K1[0].nIndx[26]=73;
ST[0].sRAD_K1[0].nIndx[27]=76;
ST[0].sRAD_K1[0].nIndx[28]=77;
ST[0].sRAD_K1[0].nIndx[29]=78;
ST[0].sRAD_K1[0].nIndx[30]=79;
ST[0].sRAD_K1[0].nIndx[31]=80;
ST[0].sRAD_K1[0].nIndx[32]=81;
ST[0].sRAD_K1[0].nIndx[33]=82;
ST[0].sRAD_K1[0].nIndx[34]=83;
ST[0].sRAD_K1[0].nIndx[35]=84;
ST[0].sRAD_K1[0].nIndx[36]=85;
ST[0].sRAD_K1[0].nIndx[37]=102;
ST[0].sRAD_K1[0].nIndx[38]=104;
ST[0].sRAD_K1[0].nIndx[39]=117;
ST[0].sRAD_K1[0].nIndx[40]=121;
ST[0].sRAD_K1[0].nIndx[41]=123;
ST[0].sRAD_K1[0].nIndx[42]=124;
ST[0].sRAD_K1[0].nIndx[43]=125;
ST[0].sRAD_K1[0].nIndx[44]=126;
ST[0].sRAD_K1[0].nIndx[45]=127;
ST[0].sRAD_K1[0].nIndx[46]=128;
ST[0].sRAD_K1[0].nIndx[47]=129;
ST[0].sRAD_K1[0].nIndx[48]=130;
ST[0].sRAD_K1[0].nIndx[49]=131;
ST[0].sRAD_K1[0].nIndx[50]=132;
ST[0].sRAD_K1[0].nIndx[51]=133;
ST[0].sRAD_K1[0].nIndx[52]=134;
ST[0].sRAD_K1[0].nIndx[53]=135;
ST[0].sRAD_K1[0].nIndx[54]=163;
ST[0].sRAD_K1[0].nIndx[55]=164;
ST[0].sRAD_K1[0].nIndx[56]=169;
ST[0].sRAD_K1[0].nIndx[57]=182;
ST[0].sRAD_K1[0].nIndx[58]=192;
ST[0].sRAD_K1[0].nIndx[59]=193;
ST[0].sRAD_K1[0].nIndx[60]=196;
ST[0].sRAD_K1[0].nIndx[61]=211;
ST[0].sRAD_K1[0].nIndx[62]=212;



/* K2 : VESZ, TAP, PAP, SUM */
ST[0].sRAD_K2[0].nRtuNumRad = 102; /*76*/
ST[0].sRAD_K2[0].nIndx[0]=0;
ST[0].sRAD_K2[0].nIndx[1]=1;
ST[0].sRAD_K2[0].nIndx[2]=2;
ST[0].sRAD_K2[0].nIndx[3]=3;
ST[0].sRAD_K2[0].nIndx[4]=9;
ST[0].sRAD_K2[0].nIndx[5]=10;
ST[0].sRAD_K2[0].nIndx[6]=12;
ST[0].sRAD_K2[0].nIndx[7]=13;
ST[0].sRAD_K2[0].nIndx[8]=14;
ST[0].sRAD_K2[0].nIndx[9]=15;
ST[0].sRAD_K2[0].nIndx[10]=16;
ST[0].sRAD_K2[0].nIndx[11]=17;
ST[0].sRAD_K2[0].nIndx[12]=18;
ST[0].sRAD_K2[0].nIndx[13]=19;
ST[0].sRAD_K2[0].nIndx[14]=20;
ST[0].sRAD_K2[0].nIndx[15]=21;
ST[0].sRAD_K2[0].nIndx[16]=22;
ST[0].sRAD_K2[0].nIndx[17]=23;
ST[0].sRAD_K2[0].nIndx[18]=24;
ST[0].sRAD_K2[0].nIndx[19]=25;
ST[0].sRAD_K2[0].nIndx[20]=26;
ST[0].sRAD_K2[0].nIndx[21]=27;
ST[0].sRAD_K2[0].nIndx[22]=28;
ST[0].sRAD_K2[0].nIndx[23]=29;
ST[0].sRAD_K2[0].nIndx[24]=30;
ST[0].sRAD_K2[0].nIndx[25]=52;
ST[0].sRAD_K2[0].nIndx[26]=58;
ST[0].sRAD_K2[0].nIndx[27]=59;
ST[0].sRAD_K2[0].nIndx[28]=60;
ST[0].sRAD_K2[0].nIndx[29]=61;
ST[0].sRAD_K2[0].nIndx[30]=62;
ST[0].sRAD_K2[0].nIndx[31]=67;
ST[0].sRAD_K2[0].nIndx[32]=71;
ST[0].sRAD_K2[0].nIndx[33]=75;
ST[0].sRAD_K2[0].nIndx[34]=90;
ST[0].sRAD_K2[0].nIndx[35]=93;
ST[0].sRAD_K2[0].nIndx[36]=94;
ST[0].sRAD_K2[0].nIndx[37]=95;
ST[0].sRAD_K2[0].nIndx[38]=96;
ST[0].sRAD_K2[0].nIndx[39]=97;
ST[0].sRAD_K2[0].nIndx[40]=98;
ST[0].sRAD_K2[0].nIndx[41]=99;
ST[0].sRAD_K2[0].nIndx[42]=100;
ST[0].sRAD_K2[0].nIndx[43]=108;
ST[0].sRAD_K2[0].nIndx[44]=110;
ST[0].sRAD_K2[0].nIndx[45]=111;
ST[0].sRAD_K2[0].nIndx[46]=112;
ST[0].sRAD_K2[0].nIndx[47]=113;
ST[0].sRAD_K2[0].nIndx[48]=114;
ST[0].sRAD_K2[0].nIndx[49]=116;
ST[0].sRAD_K2[0].nIndx[50]=118;
ST[0].sRAD_K2[0].nIndx[51]=119;
ST[0].sRAD_K2[0].nIndx[52]=120;
ST[0].sRAD_K2[0].nIndx[53]=122;
ST[0].sRAD_K2[0].nIndx[54]=137;
ST[0].sRAD_K2[0].nIndx[55]=138;
ST[0].sRAD_K2[0].nIndx[56]=139;
ST[0].sRAD_K2[0].nIndx[57]=140;
ST[0].sRAD_K2[0].nIndx[58]=145;
ST[0].sRAD_K2[0].nIndx[59]=146;
ST[0].sRAD_K2[0].nIndx[60]=147;
ST[0].sRAD_K2[0].nIndx[61]=148;
ST[0].sRAD_K2[0].nIndx[62]=149;
ST[0].sRAD_K2[0].nIndx[63]=150;
ST[0].sRAD_K2[0].nIndx[64]=151;
ST[0].sRAD_K2[0].nIndx[65]=152;
ST[0].sRAD_K2[0].nIndx[66]=153;
ST[0].sRAD_K2[0].nIndx[67]=154;
ST[0].sRAD_K2[0].nIndx[68]=155;
ST[0].sRAD_K2[0].nIndx[69]=156;
ST[0].sRAD_K2[0].nIndx[70]=157;
ST[0].sRAD_K2[0].nIndx[71]=158;
ST[0].sRAD_K2[0].nIndx[72]=159;
ST[0].sRAD_K2[0].nIndx[73]=160;
ST[0].sRAD_K2[0].nIndx[74]=161;
ST[0].sRAD_K2[0].nIndx[75]=165;
ST[0].sRAD_K2[0].nIndx[76]=166;
ST[0].sRAD_K2[0].nIndx[77]=167;
ST[0].sRAD_K2[0].nIndx[78]=168;
ST[0].sRAD_K2[0].nIndx[79]=170;
ST[0].sRAD_K2[0].nIndx[80]=171;
ST[0].sRAD_K2[0].nIndx[81]=173;
ST[0].sRAD_K2[0].nIndx[82]=174;
ST[0].sRAD_K2[0].nIndx[83]=175;
ST[0].sRAD_K2[0].nIndx[84]=176;
ST[0].sRAD_K2[0].nIndx[85]=177;
ST[0].sRAD_K2[0].nIndx[86]=178;
ST[0].sRAD_K2[0].nIndx[87]=181;
ST[0].sRAD_K2[0].nIndx[88]=183;
ST[0].sRAD_K2[0].nIndx[89]=184;
ST[0].sRAD_K2[0].nIndx[90]=185;
ST[0].sRAD_K2[0].nIndx[91]=186;
ST[0].sRAD_K2[0].nIndx[92]=187;
ST[0].sRAD_K2[0].nIndx[93]=188;
ST[0].sRAD_K2[0].nIndx[94]=189;
ST[0].sRAD_K2[0].nIndx[95]=190;
ST[0].sRAD_K2[0].nIndx[96]=191;
ST[0].sRAD_K2[0].nIndx[97]=194;
ST[0].sRAD_K2[0].nIndx[98]=205;
ST[0].sRAD_K2[0].nIndx[99]=204;
ST[0].sRAD_K2[0].nIndx[100]=213;
ST[0].sRAD_K2[0].nIndx[101]=214;



/* K3 : DOR, SOP, KOR, BI, GPRS */
ST[0].sRAD_K3[0].nRtuNumRad = 45;  /*55*/
ST[0].sRAD_K3[0].nIndx[0]=5; /*8*/
ST[0].sRAD_K3[0].nIndx[1]=6; /*8*/
ST[0].sRAD_K3[0].nIndx[2]=8; /*8*/
ST[0].sRAD_K3[0].nIndx[3]=11; /*8*/
ST[0].sRAD_K3[0].nIndx[4]=34; /*8*/
ST[0].sRAD_K3[0].nIndx[5]=37; /*8*/
ST[0].sRAD_K3[0].nIndx[6]=51; /*8*/
ST[0].sRAD_K3[0].nIndx[7]=53; /*8*/
ST[0].sRAD_K3[0].nIndx[8]=54; /*8*/
ST[0].sRAD_K3[0].nIndx[9]=55; /*8*/
ST[0].sRAD_K3[0].nIndx[10]=56; /*8*/
ST[0].sRAD_K3[0].nIndx[11]=57; /*8*/
ST[0].sRAD_K3[0].nIndx[12]=68; /*8*/
ST[0].sRAD_K3[0].nIndx[13]=69; /*8*/
ST[0].sRAD_K3[0].nIndx[14]=74; /*8*/
ST[0].sRAD_K3[0].nIndx[15]=86; /*8*/
ST[0].sRAD_K3[0].nIndx[16]=87; /*8*/
ST[0].sRAD_K3[0].nIndx[17]=88; /*8*/
ST[0].sRAD_K3[0].nIndx[18]=89; /*8*/
ST[0].sRAD_K3[0].nIndx[19]=91; /*8*/
ST[0].sRAD_K3[0].nIndx[20]=92; /*8*/
ST[0].sRAD_K3[0].nIndx[21]=101; /*8*/
ST[0].sRAD_K3[0].nIndx[22]=103; /*8*/
ST[0].sRAD_K3[0].nIndx[23]=105; /*8*/
ST[0].sRAD_K3[0].nIndx[24]=106; /*8*/
ST[0].sRAD_K3[0].nIndx[25]=107; /*8*/
ST[0].sRAD_K3[0].nIndx[26]=109; /*8*/
ST[0].sRAD_K3[0].nIndx[27]=115; /*8*/
ST[0].sRAD_K3[0].nIndx[28]=136; /*8*/
ST[0].sRAD_K3[0].nIndx[29]=141; /*8*/
ST[0].sRAD_K3[0].nIndx[30]=142; /*8*/
ST[0].sRAD_K3[0].nIndx[31]=143; /*8*/
ST[0].sRAD_K3[0].nIndx[32]=144; /*8*/
ST[0].sRAD_K3[0].nIndx[33]=162; /*8*/
ST[0].sRAD_K3[0].nIndx[34]=172; /*8*/
ST[0].sRAD_K3[0].nIndx[35]=180; /*8*/
ST[0].sRAD_K3[0].nIndx[36]=197; /*8*/
ST[0].sRAD_K3[0].nIndx[37]=198; /*8*/
ST[0].sRAD_K3[0].nIndx[38]=199; /*8*/
ST[0].sRAD_K3[0].nIndx[39]=200; /*8*/
ST[0].sRAD_K3[0].nIndx[40]=203; /*8*/
ST[0].sRAD_K3[0].nIndx[41]=204; /*8*/
ST[0].sRAD_K3[0].nIndx[42]=205; /*8*/
ST[0].sRAD_K3[0].nIndx[43]=201; /*8*/
ST[0].sRAD_K3[0].nIndx[44]=202; /*8*/


/*RST[0].sLINK RTUk indexei*/
ST[0].sLIN[0].nRtuNumLin = 7;
ST[0].sLIN[0].nIndx[0] =206;
ST[0].sLIN[0].nIndx[1] =207;
ST[0].sLIN[0].nIndx[2] =208;
ST[0].sLIN[0].nIndx[3] =209;
ST[0].sLIN[0].nIndx[4] =210;
ST[0].sLIN[0].nIndx[5] =179;
ST[0].sLIN[0].nIndx[6] =195;





} /* end fnSetComPar()*/

