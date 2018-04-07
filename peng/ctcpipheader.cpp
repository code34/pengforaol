#include "globals.h"

/***************************************************************************
                          ctcpipheader.cpp  -  description
                             -------------------
    begin                : Thu Jun 7 2001
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
    
#include "ctcpipheader.h"
    
{
    



{



/** Positionnne le header */ 
void CTcpIpHeader::SetHeader(char *pHeader) 
{
    



/** Donne le protocol Ip */ 
char CTcpIpHeader::GetIpProtocol() 
{
    



/** Retourne la longueur du header Ip */ 
int CTcpIpHeader::GetIpLen() 
{
    
    



/** Retourne la taille du header TCP */ 
int CTcpIpHeader::GetTcpLen() 
{
    



/** place la longueur TCP */ 
void CTcpIpHeader::SetTcpLen(int nLen) 
{
    



/** Place la longueur Ip */ 
void CTcpIpHeader::SetIpLen(int nLen) 
{
    
    



/** Recalcul le checksum IP */ 
void CTcpIpHeader::CalculateIpChkSum() 
{
    
    



/** Recalcul le checksum TCP */ 
void CTcpIpHeader::CalculateTcpChkSum() 
{
    
	htons(m_cIpTools->TcpChkSum((unsigned short *) m_pHeader));
    


