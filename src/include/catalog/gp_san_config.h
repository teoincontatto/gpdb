/*-------------------------------------------------------------------------
 *
 * gp_san_config.h
 *    a san configuration table
 *
 * Copyright (c) 2009-2011, Greenplum Inc.
 *
 * $Id: $
 * $Change: $
 * $DateTime: $
 * $Author: $
 *-------------------------------------------------------------------------
 */
#ifndef _GP_SAN_CONFIG_H_
#define _GP_SAN_CONFIG_H_

/*
 * Defines for gp_fault_strategy table.
 */
#define GpFaultStrategy		"gp_fault_strategy"

/* TIDYCAT_BEGINDEF

   CREATE TABLE gp_fault_strategy
   with (camelcase=GpFaultStrategy, shared=true, oid=false, relid=5039, content=MASTER_ONLY)
   (
   fault_strategy "char"
   );

   TIDYCAT_ENDDEF
*/
/* TIDYCAT_BEGIN_CODEGEN 

   WARNING: DO NOT MODIFY THE FOLLOWING SECTION: 
   Generated by tidycat.pl version 34
   on Wed Nov 18 14:01:51 2015
*/


/*
 TidyCat Comments for gp_fault_strategy:
  Table is shared, so catalog.c:IsSharedRelation is updated.
  Table does not have an Oid column.
  Table does not have static type.
  Table contents are only maintained on MASTER.

*/

/* ----------------
 *		gp_fault_strategy definition.  cpp turns this into
 *		typedef struct FormData_gp_fault_strategy
 * ----------------
 */
#define GpFaultStrategyRelationId	5039

CATALOG(gp_fault_strategy,5039) BKI_SHARED_RELATION BKI_WITHOUT_OIDS
{
	char	fault_strategy;	
} FormData_gp_fault_strategy;


/* ----------------
 *		Form_gp_fault_strategy corresponds to a pointer to a tuple with
 *		the format of gp_fault_strategy relation.
 * ----------------
 */
typedef FormData_gp_fault_strategy *Form_gp_fault_strategy;


/* ----------------
 *		compiler constants for gp_fault_strategy
 * ----------------
 */
#define Natts_gp_fault_strategy					1
#define Anum_gp_fault_strategy_fault_strategy	1


/* TIDYCAT_END_CODEGEN */

/*
 * Defines for gp_san_config table.
 *
 * Stores info for failover using SAN.
 */
#define GpSanConfigRelationName		"gp_san_configuration"

/* TIDYCAT_BEGINDEF

   CREATE TABLE gp_san_configuration
   with (camelcase=GpSanConfig, shared=true, oid=false, relid=5035, content=MASTER_ONLY)
   (
   mountid             smallint ,
   active_host         "char"   ,
   san_type            "char"   ,
   primary_host        text     ,
   primary_mountpoint  text     ,
   primary_device      text     ,
   mirror_host         text     ,
   mirror_mountpoint   text     ,
   mirror_device       text     
   );

   create unique index on gp_san_configuration(mountid) with (indexid=6111, indexname=gp_san_config_mountid_index);

   TIDYCAT_ENDDEF
*/
/* TIDYCAT_BEGIN_CODEGEN 

   WARNING: DO NOT MODIFY THE FOLLOWING SECTION: 
   Generated by tidycat.pl version 34
   on Wed Nov 18 14:01:51 2015
*/


/*
 TidyCat Comments for gp_san_configuration:
  Table is shared, so catalog.c:IsSharedRelation is updated.
  Table does not have an Oid column.
  Table does not have static type.
  Table has TOASTable columns, but NO TOAST table.
  Table contents are only maintained on MASTER.

*/

/* ----------------
 *		gp_san_configuration definition.  cpp turns this into
 *		typedef struct FormData_gp_san_configuration
 * ----------------
 */
#define GpSanConfigRelationId	5035

CATALOG(gp_san_configuration,5035) BKI_SHARED_RELATION BKI_WITHOUT_OIDS
{
	int2	mountid;			
	char	active_host;		
	char	san_type;			
	text	primary_host;		
	text	primary_mountpoint;	
	text	primary_device;		
	text	mirror_host;		
	text	mirror_mountpoint;	
	text	mirror_device;		
} FormData_gp_san_configuration;


/* ----------------
 *		Form_gp_san_configuration corresponds to a pointer to a tuple with
 *		the format of gp_san_configuration relation.
 * ----------------
 */
typedef FormData_gp_san_configuration *Form_gp_san_configuration;


/* ----------------
 *		compiler constants for gp_san_configuration
 * ----------------
 */
#define Natts_gp_san_configuration						9
#define Anum_gp_san_configuration_mountid				1
#define Anum_gp_san_configuration_active_host			2
#define Anum_gp_san_configuration_san_type				3
#define Anum_gp_san_configuration_primary_host			4
#define Anum_gp_san_configuration_primary_mountpoint	5
#define Anum_gp_san_configuration_primary_device		6
#define Anum_gp_san_configuration_mirror_host			7
#define Anum_gp_san_configuration_mirror_mountpoint		8
#define Anum_gp_san_configuration_mirror_device			9


/* TIDYCAT_END_CODEGEN */

#endif /*_GP_SAN_CONFIG_H_*/
