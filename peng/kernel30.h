/***************************************************************************
                          kernel30.h  -  description
                             -------------------
    begin                : Fri Jun 1 2001
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
    
#ifndef KERNEL30_H
#define KERNEL30_H
    
#ifdef WIN32
#include <winsock.h>
#else				/* 
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <sys/fcntl.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#define SOCKET int
#define closesocket close
#endif				/* 
    
#include "nulldriver.h"
#include "ckernel.h"
#include "caolheader30.h"
#include "cvjcompress.h"
#include "caoltoclient30.h"
#include "caolcmd30.h"
#include "cclienttoaol30.h"
    
#define MRUIn	1550
#define MRUOut	1550
    
/**noyau de simulation 3.0
  *@author stephane (birdy57)
  */ 

  
    
    
    
    
    
  /** ecrit une sequence Raw en y ajoutant le header AOL */ 
    void WriteRawIn(char *buffer, int nLon);
    
  /** recherche l'adresse IP */ 
	bool FindIp(char *sBuffer, int nLon);
    
  /** Demmare le noyau */ 
    void Start();
    
  /** Connection */ 
	bool Connect(char *Login, char *Pass);
    
  /** donne l'adresse IP */ 
    void GetIp(char *sBuffer);
    
  /** donne le nom de domaine */ 
    void GetDomainName(char *sBuffer);
    
  /** Donne le Dns */ 
    void GetDns(char *sBuffer);
    
  /** arrete le noyau */ 
    void Stop();
  
      
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
    
    
      
	
	
	
	
	
	
	
	
	
	    sprintf(buffer, "%d.%d.%d.%d", Ip1, Ip2, Ip3, Ip4);
	};
	
	    sprintf(buffer, "%d.%d.%d.%d", Dns1, Dns2, Dns3, Dns4);
	};
    
    
  /** donnee */ 
	m_CData * CData;
    
  /** Header aol version 3.0 et cable */ 
	CAolHeader30 * AolHeaderIn;
  
  /** Lecture d'un trame AOL , la longueur est retoune */ 
    int ReadAolTrame(char *buffer, int MaxBuffer);
    
  /** recharge la trame nAck,nSeq */ 
    int ReadAolTrameSeqAck(char *buffer, int nBufferSize, int nSeq,
			   int nAck);
    
  /** negociation de la connection */ 
	bool Negociate(char *Login, char *PassWord);
    
  /** Classe Ip */ 
	m_CIp * m_Ip;
    
  /** compresseur */ 
	CVjcompress * VjcompressOut;
    
	// Variables commune au 3 classe du noyau
	
    
    
    
    
    
    
    
    
    
    
  /** Classe Cmd */ 
	CAolCmd30 * m_cCmd;
    
  /** classe client->Aol */ 
	CClientToAol30 * m_cClientToAol;
    
  /** classe Aol->client */ 
	CAolToClient30 * m_cAolToClient;
    
  /** ecriture */ 
	bool m_bWriting;



#endif				/* 