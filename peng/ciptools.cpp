#include "globals.h"

/***************************************************************************
                          ciptools.cpp  -  description
                             -------------------
    begin                : Sat May 26 2001
    copyright            : (C) 2001 by stephane (birdy57)
    email                : birdy57@multimania.com
 ***************************************************************************/ 
    
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/ 
    
#include "ciptools.h"
    
{



{



/** Calcul le checksum de la trame */ 
unsigned int CIpTools::AOChkSum(unsigned char *buffer, int length) 
{
    
    
    
    
	
	
	    //printf("0x%X,",ch);
	    for (j = 0; j < 8; j++) {
	    
		
	    
	    else
		
	    
	
    
    



/** Recalcul le checksum ip de la trame */ 
unsigned short CIpTools::IpChkSum(unsigned short *pIP) 
{
    
    
    
    
    
    
    
    
	
	
	
    
    
    
// Compute the one's complement of the checksum.
	finalchk = (~chksum & 0xffff);
    
// return the final checksum.
	pIP[5] = tmp;
    



/** Recalcul le checkum TCP */ 
unsigned short CIpTools::TcpChkSum(unsigned short *pIP) 
{
    
    
    
    
    
    
    
    
    
    
    
// test si impair
	
	
	
	
	
    
// calcul la pseudo entete
	
	
	
	
    
// length + the protocol type.
	chksum += (olen + 6);
    
// compute the 16 bit sum of the TCP header and data.
	for (i = 0; i < nLen; i++)
	
	
	
    
//Fold the 32 checksum into 16 bit.
	chksum = (chksum >> 16) + (chksum & 0xffff);
    
    
// Get the one's complement of the checksum.
	finalchk = (~chksum & 0xffff);
    
// return the final checksum.
	pIP[18] = tmp;
    



/** renvoie l'ancien checksum */ 
unsigned short CIpTools::GetIpCrc(unsigned short *pIp) 
{
    



/** assigne le checksum */ 
void
    CIpTools::SetTcpChskSum(unsigned short *pIP,
			    unsigned short nCheckSum) 
{
    



/** assigne le checksum ip */ 
    void
 CIpTools::SetIpChkSum(unsigned short *pIP, unsigned short nChkSum) 
{
    



/** fournit le checksum TCP */ 
unsigned short CIpTools::GetTcpCrc(unsigned short *pIp) 
{
    


